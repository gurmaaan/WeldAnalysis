#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QDesktopServices>
#include "exceldatamanager.h"
#include "jsondatamanager.h"
#include "usbhidmanager.hpp"
#include <QStandardPaths>
#include <QDir>
#include <QFile>
#include <QFileDialog>
#include <QFileInfo>
#include <QMessageBox>
#include "constants.h"
#include <QAction>
#include <QEvent>
#include <QMenu>
#include <QSettings>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    DATA_PATH = apdr.dataDirPath();
    apdr.copyFilesToAppData();
    connect(&picture, SIGNAL(savedFileName(QString)), this, SLOT(pushStatusBarMessage(QString)));
    connect(&picture, SIGNAL(savedFileName(QString)), this, SLOT(pushInformationNotification(QString)));
    connect(&picture, SIGNAL(savedFilePath(QString)), this, SLOT(showSavedFile(QString)));

    ui->setupUi(this);
    setUIlogic();
    ui->menu_other_app_fullScreen_button->installEventFilter(this);

    trayIcon = new QSystemTrayIcon(this);
    trayIcon->setToolTip(APP_NAME);
    trayIcon->setIcon(QIcon(RES_APPICON));
    trayIcon->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::pushStatusBarMessage(QString message)
{
    statusBar()->showMessage(message, 5000);
}

void MainWindow::pushInformationNotification(QString message)
{
    QString title = QString(MES_IMG) + QString(TIT_SAVED),
            messageText = message + QString(MES_IMG) + QString(MES_SUCSAVE);
    trayIcon->showMessage(title, messageText, QSystemTrayIcon::Information, TRAY_DELAY);   
}

void MainWindow::showSavedFile(QString path)
{
    showMinimized();
    QApplication::alert(this, 0);
    QDir savedDir(path);
    QDesktopServices::openUrl(QUrl::fromLocalFile(savedDir.absolutePath()));
}

void MainWindow::setUIlogic()
{
    setTablesUI();
    setFullScreenButtonMenu();
    setStatusBarWidgets();
}

void MainWindow::setTablesUI()
{
    //Создание моделей для установки в tableView
    QStandardItemModel *settingsModel = new QStandardItemModel;
    QStandardItemModel *statisticsModel = new QStandardItemModel;

    QFile settingsFile(RES_EMPTSET);
    settingsFile.open(QFile::ReadOnly);
    QFile statisticsFile(RES_EMPSTAT);
    statisticsFile.open(QFile::ReadOnly);

    settingsModel = jsonManager.getModel(jsonManager.getArrayFromFile(&settingsFile, JS_SETTINGS), JS_KEY, JS_VAL);
    settingsFile.close();
    statisticsModel = jsonManager.getModel(jsonManager.getArrayFromFile(&statisticsFile, JS_STATISTICS), JS_KEY, JS_VAL);
    statisticsFile.close();

    ui->settings_table->setModel(settingsModel);
    ui->realTime_table->setModel(statisticsModel);

    ui->settings_table->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Stretch);
    ui->realTime_table->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Stretch);
}

void MainWindow::setFullScreenButtonMenu()
{
    QMenu *menu = new QMenu();
    QAction *maximazeAction = new QAction("", this);
    QPixmap iconPicture(RES_MAXICON);
    QIcon icon(iconPicture);
    maximazeAction->setIcon(icon);
    menu->addAction(maximazeAction);
    ui->menu_other_app_fullScreen_button->setMenu(menu);

    connect(maximazeAction, SIGNAL(triggered(bool)), this, SLOT(maximizeButtonAction()));
}

void MainWindow::setStatusBarWidgets()
{
    QLabel *portLabel = new QLabel(this);
    QLabel *connectionLabel = new QLabel(this);
    portStatus = new QLabel(this);
    connectionStatus = new QLabel(this);

    connectionLabel->setText(STATUS_CONNECT);
    connectionStatus->setText(STATUS_CONNECTINFOFF);
    portLabel->setText(STATUS_PORT);
    portStatus->setText(STATUS_PORTINFNULL);

    statusBar()->addWidget(connectionLabel);
    statusBar()->addWidget(connectionStatus);
    statusBar()->addWidget(portLabel);
    statusBar()->addWidget(portStatus);
}

//Обработчик нажатия на кнопку полного экрана (ПКМ)
bool MainWindow::eventFilter(QObject *watched, QEvent *event)
{
    QToolButton *button = ui->menu_other_app_fullScreen_button;
    if ( (watched == button) && (event->type() == QEvent::MouseButtonPress) )
    {
        QMouseEvent *e = static_cast<QMouseEvent *>(event);
        if (e->button() == Qt::RightButton) {
            button->menu()->popup(button->mapToGlobal(e->pos()));
            return true;
        } else
            return false;
    }
    return false;
}

//TODO - fix with FullScreen button context menu
void MainWindow::resizeEvent(QResizeEvent *event)
{
    if ( isMaximized() )
    {
        //qDebug() << windowState();
        ui->menu_other_app_fullScreen_button->menu()->actions().at(0)->setText(ACT_MIN);
        ui->menu_other_app_fullScreen_button->setChecked(false);
    }
    else
    {
        ui->menu_other_app_fullScreen_button->menu()->actions().at(0)->setText(ACT_MAX);
        ui->menu_other_app_fullScreen_button->setChecked(false);
    }
}

//Обработчик нажатия на кнопку продвинутых настроек
void MainWindow::on_menu_other_app_advanced_button_clicked()
{
    advanced.showDirPath(DATA_PATH);
    advanced.show();
}

void MainWindow::on_menu_device_manualSearch_button_clicked() {

    //std::list<USBDeviceHIDManager> devices = USBDeviceHIDManager::getDevicesList();

//    for (auto it = devices.begin(); it != devices.end(); ++it) {
//        qDebug() << QString::fromStdWString(it->name)
//                 << QString::fromStdString(it->type)
//                 << QString::fromStdString(it->hidPID)
//                 << QString::fromStdString(it->hidVID);
//    }
}

//Обработчик нажатия на кнопку полного экрана (ЛКМ)
void MainWindow::on_menu_other_app_fullScreen_button_clicked()
{
    bool buttonStatus = ui->menu_other_app_fullScreen_button->isChecked();
    ui->menu_other_app_fullScreen_button->setChecked(buttonStatus);
    if(buttonStatus)
        this->showFullScreen();
    else
        this->showNormal();
}

void MainWindow::on_menu_other_app_reference_button_clicked()
{
    QString userManualPath = LINK_FILE + DATA_PATH + NAMS_MANUAL;
    QDesktopServices::openUrl(QUrl(userManualPath, QUrl::TolerantMode));
}

void MainWindow::on_menu_device_winManager_button_clicked()
{
    QString deviceManagerpath = LINK_FILE + DATA_PATH + NAMS_DEVMAN;
    QDesktopServices::openUrl(QUrl(deviceManagerpath, QUrl::TolerantMode));
}

//Обработчик нажатия на кнопку перезагрузки программы
void MainWindow::on_menu_file_restart_button_clicked()
{
    qApp->quit();
    QProcess::startDetached(qApp->arguments()[0], qApp->arguments());
}

//Действие при нажатии на меню кнопки полного экрана
void MainWindow::maximizeButtonAction()
{
    if (this->isMaximized())
    {
        //ui->menu_other_app_fullScreen_button->menu()->actions().at(0)->setText(ACT_MAX);
        ui->menu_other_app_fullScreen_button->setChecked(false);
        showNormal();
    }
    else
    {
        //ui->menu_other_app_fullScreen_button->menu()->actions().at(0)->setText(ACT_MIN);
        ui->menu_other_app_fullScreen_button->setChecked(false);
        showMaximized();
    }
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
    {
        if ( dir.mkpath(appPath) )
            qDebug() << MES_PATH << APP_NAME << MES_CREATEDF;
        else
            showCreateMessageBox(APP_NAME);
    }

//Копирование из ресурсов в корень директории
    //Руководство пользователя
    copyFile(&dir, NAM_MANUAL);

    //Создание папок и проверка отсутствия
    createDirectory(&dir, DIR_DEFAULTS);
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

//Функция создания папки приложения
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
    mesBox.setText(TIT_ERCOP);
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
    mesBox.setText(TIT_ERCREATE);
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

//Нажатие на кнопку сохранения картинки
void MainWindow::on_menu_other_data_picture_button_clicked()
{
    QTemporaryDir tempDir;
    if (tempDir.isValid()) {
      const QString tempFile = tempDir.path() + "/temp.png";
      ui->graph_screen->savePng(tempFile);
      picture.openPicture(tempFile);
      picture.show();
      QApplication::alert(this, 0);
    }
}

//Нажатие на кнопку проверить версию MathCad
void MainWindow::on_menu_other_mathcad_check_button_clicked()
{
    QSettings settings("HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Uninstall", QSettings::NativeFormat);
    QStringList keyList = settings.allKeys().filter( "DisplayName" );

    foreach ( QString key, keyList)
        qDebug() << settings.value( key ).toString();

}
