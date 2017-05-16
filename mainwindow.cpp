#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QDesktopServices>
#include "exceldatamanager.h"
#include "usbhidmanager.hpp"
#include <QStandardPaths>
#include <QDir>
#include <QFile>
#include <QFileDialog>
#include <QFileInfo>
#include <QMessageBox>
#include "constants.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    AppDir apdr;
    DATA_PATH = apdr.dataDirPath();
    apdr.copyFilesToAppData();
    ui->setupUi(this);
    setUIlogic();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setUIlogic()
{
    setTablesUI();
}

void MainWindow::setTablesUI()
{
    //Создание моделей для установки в tableView
    QStandardItemModel *settingsModel = new QStandardItemModel;
    QStandardItemModel *realTimeModel = new QStandardItemModel;

    ExcelDataManager dataManager;
    QAxObject *excelFile = dataManager.openExcelFile(defaultsSettingsFilePath);
    settingsModel = dataManager.getSettingsModel(excelFile);
    realTimeModel = dataManager.getRealTimeModel(excelFile);

    ui->settings_table->setModel(settingsModel);
    ui->realTime_table->setModel(realTimeModel);

    ui->settings_table->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Stretch);
    ui->realTime_table->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Stretch);
}

void MainWindow::on_menu_other_app_advanced_button_clicked()
{
    advanced.show();
}

void MainWindow::on_menu_device_manualSearch_button_clicked() {
    usbDeviceListWindow.open();

    //std::list<USBDeviceHIDManager> devices = USBDeviceHIDManager::getDevicesList();

//    for (auto it = devices.begin(); it != devices.end(); ++it) {
//        qDebug() << QString::fromStdWString(it->name)
//                 << QString::fromStdString(it->type)
//                 << QString::fromStdString(it->hidPID)
//                 << QString::fromStdString(it->hidVID);
//    }
}

void MainWindow::on_menu_other_app_fullScreen_button_clicked()
{
    bool buttonStatus = ui->menu_other_app_fullScreen_button->isChecked();
    ui->menu_other_app_fullScreen_button->setChecked(buttonStatus);
    if(buttonStatus)
        this->showMaximized();
    else
        this->showNormal();
}


void MainWindow::on_menu_other_app_reference_button_clicked()
{
    QDesktopServices::openUrl(QUrl("file:///C:/Users/Dima/YandexDisk/_Application/WeldAnalysis/Experiments/UserManual.pdf", QUrl::TolerantMode));
}

void MainWindow::on_menu_device_winManager_button_clicked()
{
    QString deviceManagerpath = QStandardPaths::writableLocation(QStandardPaths::DataLocation);
    QDesktopServices::openUrl(QUrl("file:///C:/Users/Dima/YandexDisk/_Application/WeldAnalysis/Experiments/devicemanager.bat", QUrl::TolerantMode));
}

//Обработчик нажатия на кнопку перезагрузки программы - DONE
void MainWindow::on_menu_file_restart_button_clicked()
{
    qApp->quit();
    QProcess::startDetached(qApp->arguments()[0], qApp->arguments());
}

//Возвращает путь к папке с данными
QString AppDir::dataDirPath()
{
    return QStandardPaths::writableLocation(QStandardPaths::DataLocation);
}

//Копирование программных файлов в системную папку приложения
void AppDir::copyFilesToAppData()
{
    QString appPath = QStandardPaths::writableLocation(QStandardPaths::DataLocation);\
    //Проверка пути на валидность создание при отсутствии
    QDir dir(appPath);
    if ( !dir.exists() )
        if ( dir.mkpath(appPath) )
            qDebug() << MES_PATH << APP_NAME << MES_CREATEDF;
        else
            showCreateMessageBox(APP_NAME);



//Копирование из ресурсов в корень директории
    //Руководство пользователя
    copyFile(&dir, NAM_MANUAL);

    //Создание папок и проверка отсутствия
    createDirectory(&dir, DIR_GUI);
    createDirectory(&dir, DIR_BAT);

//Переход в директорию батников
    dir.cd(DIR_BAT);
    //Батник запуска девайс менеджера
    copyFile(&dir, NAM_DEVMAN);
}

//Функция копирования файла
void AppDir::copyFile(QDir *dir, QString name)
{
    QString abs = dir->path() + "/" + name;
    bool copied = false;
    if(QFile::copy(RES_MANUAL, abs))
    {
        qDebug() << MES_FILE << name << MES_COPIEDF;
        copied = true;
    }
    else if (copied)
        showCopyMessageBox(NAM_MANUAL, &abs);
}

//Функция создания папки
void AppDir::createDirectory(QDir *dir, QString name)
{
    if (!dir->exists(name))
    {
        if(dir->mkdir(name))
            qDebug() << MES_DIRECTORY << name << MES_CREATEDD;
        else
            showCreateMessageBox(name);
    }
}

//Отображение окна ошибки при копировании файла
void AppDir::showCopyMessageBox(QString fileName, QString *filePath)
{
    QMessageBox mesBox;
    mesBox.setText(TIT_COPYING);
    QString message = MES_FILE + fileName + MES_NOTCOPIEDF + MES_SELFBROWSE;
    mesBox.setInformativeText(message);

    mesBox.setStandardButtons(QMessageBox::Yes | QMessageBox::Ignore);
    mesBox.setIcon(QMessageBox::Warning);
    mesBox.setDefaultButton(QMessageBox::Yes);

    int answer = mesBox.exec();
    MainWindow w;
    switch (answer) {
    case QMessageBox::Yes:
    {
        QFileInfo file = QFileDialog::getOpenFileName(&w, TIT_BROWSE, QDir::homePath());
        *filePath = file.absoluteFilePath();
        break;
    }
    case QMessageBox::Ignore:
    {
        mesBox.close();
        break;
    }
    default:
        break;
    }
}

//Отображение окошка ошибки при создании папки
void AppDir::showCreateMessageBox(QString dirName)
{
    QMessageBox mesBox;
    mesBox.setText(TIT_CREATING);
    QString message = MES_DIRECTORY + dirName + MES_NOTCREATEDD + MES_SELFCREATE;
    mesBox.setInformativeText(message);

    mesBox.setStandardButtons(QMessageBox::Yes | QMessageBox::Ignore);
    mesBox.setIcon(QMessageBox::Warning);
    mesBox.setDefaultButton(QMessageBox::Yes);

    int answer = mesBox.exec();
    switch (answer) {
    case QMessageBox::Yes:
        QDesktopServices::openUrl(QUrl::fromLocalFile(QStandardPaths::writableLocation(QStandardPaths::DataLocation)));
        break;
    case QMessageBox::Ignore:
        mesBox.reject();
        break;
    default:
        break;
    }
}
