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
#include <QDesktopServices>

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

    checkMathCad();

    trayIcon = new QSystemTrayIcon(this);
    trayIcon->setToolTip(APP_NAME);
    trayIcon->setIcon(QIcon(RES_APPICON));
    trayIcon->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}

//Вывод сообщения в статус бар (слот)
void MainWindow::pushStatusBarMessage(QString message)
{
    statusBar()->showMessage(message, 5000);
}

//Вывод сообщения в нотификейшн центр (слот)
void MainWindow::pushInformationNotification(QString message)
{
    QString title = QString(MES_IMG) + QString(TIT_SAVED),
            messageText = message + QString(MES_IMG) + QString(MES_SUCSAVE);
    trayIcon->showMessage(title, messageText, QSystemTrayIcon::Information, TRAY_DELAY);   
}

//Открытие проводника после сохранения изображения
void MainWindow::showSavedFile(QString path)
{
    showMinimized();
    QApplication::alert(this, 0);
    QDir savedDir(path);
    QDesktopServices::openUrl(QUrl::fromLocalFile(savedDir.absolutePath()));
}

//Установка всех предварительных действий в интерфейсе
void MainWindow::setUIlogic()
{
    ui->menu_other_app_fullScreen_button->installEventFilter(this);
    ui->menu_other_data_table_button->installEventFilter(this);

    setTablesUI();
    setButtonsMenu();
    setStatusBarWidgets();
}

//Инициализация таблиц
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

//Добавление меню ПКМ во все кнопки
void MainWindow::setButtonsMenu()
{
    //Кнопка полного экрана
    QMenu *menuFullScreen = new QMenu();
    menuFullScreen->addAction(ui->action_fullScreen_maximize);
    ui->menu_other_app_fullScreen_button->setMenu(menuFullScreen);

    //Кнопка таблица
    QMenu *menuTable = new QMenu();
    menuTable->addAction(ui->action_table_internal);
    menuTable->addAction(ui->action_table_excel);
    menuTable->addAction(ui->action_table_notepad);
    ui->menu_other_data_table_button->setMenu(menuTable);

}

//Обработчик всех нажатий ПКМ по кнопкам
bool MainWindow::eventFilter(QObject *watched, QEvent *event)
{
    QToolButton *buttonTable = ui->menu_other_data_table_button;
    if ( (watched == buttonTable) && (event->type() == QEvent::MouseButtonPress) )
    {
        QMouseEvent *e = static_cast<QMouseEvent *>(event);
        if (e->button() == Qt::RightButton) {
            buttonTable->menu()->popup(buttonTable->mapToGlobal(e->pos()));
            return true;
        } else {
            return false;
        }
    }

    QToolButton *buttonFullScreen = ui->menu_other_app_fullScreen_button;
    if ( (watched == buttonFullScreen) && (event->type() == QEvent::MouseButtonPress) )
    {
        QMouseEvent *e = static_cast<QMouseEvent *>(event);
        if (e->button() == Qt::RightButton) {
            buttonFullScreen->menu()->popup(buttonFullScreen->mapToGlobal(e->pos()));
            return true;
        } else {
            return false;
        }
    }
    return false;
}

//Проверка установленной версии Маткада
void MainWindow::checkMathCad()
{
    QSettings settings(MAT_REGFOLDER, QSettings::NativeFormat);
    QStringList keyListDisplay = settings.allKeys().filter( MAT_DISPLAYKEY );
    QStringList versionKeyList = settings.allKeys().filter( MAT_VERSIONKEY );
    QStringList pathKeyList = settings.allKeys().filter( "InstallLocation");

    bool exist = false, versionGood = false;

    foreach ( QString key, keyListDisplay)
    {
        const QString currentSetting = settings.value(key).toString();
        int step = keyListDisplay.indexOf(key);
        //const QString currentPath = settings.value(pathKeyList.at(step)).toString();
        const QString currentVersion = settings.value(versionKeyList.at(step)).toString();
        if( (currentSetting == MAT_NAME14) || (currentSetting == MAT_NAME15) )
        {
            exist = true;

            ui->menu_other_mathcad_versionStatus->setText(currentVersion);
            QStringList versionList = currentVersion.split(".");
            bool convertation;
            int versionNumber = versionList.at(0).toInt(&convertation, 10);
            if(convertation && (versionNumber >= 14))
                versionGood = true;
            else
            {
                versionGood = false;
                QString badMes = QString(MAT_VERMES) + currentVersion + ".";
                trayIcon->showMessage(MAT_ERRORVERTIT, badMes, QSystemTrayIcon::Critical, TRAY_DELAY/4);
                statusBar()->showMessage(badMes, TRAY_DELAY);
            }

            break;
        }
        else
        {
            exist = false;
        }
    }

    ui->menu_other_mathcad_statusCheck->setChecked(exist);
    if (exist) {
        ui->menu_other_mathcad_statusCheck->setStyleSheet(MAT_SUCCESSCOLOR);
        ui->menu_other_mathcad_statusCheck->setText(MAT_SUCCESSINF);
    }
    else {
        trayIcon->showMessage(MAT_ERRORTIT, MAT_ERRORMES, QSystemTrayIcon::Critical, TRAY_DELAY/4);
        statusBar()->showMessage(MAT_ERRORTIT, TRAY_DELAY);
        ui->menu_other_mathcad_statusCheck->setText(MAT_ERRORINF);
        ui->menu_other_mathcad_statusCheck->setStyleSheet(MAT_ERRORCOLOR);
    }

    ui->menu_other_mathcad_messageCheck->setChecked(exist && versionGood);
    if (exist && versionGood) {
        ui->menu_other_mathcad_messageCheck->setStyleSheet(MAT_SUCCESSCOLOR);
        ui->menu_other_mathcad_messageCheck->setText(MAT_SUCCESSVERINF);
    }
    else{
        ui->menu_other_mathcad_messageCheck->setStyleSheet(MAT_ERRORCOLOR);
        ui->menu_other_mathcad_messageCheck->setText(MAT_ERRORVERINF);
    }

    ui->menu_other_mathcad_open_button->setEnabled(exist && versionGood);
}

//Настройка статус бара
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

//Обработчик нажатия на кнопку продвинутых настроек
void MainWindow::on_menu_other_app_advanced_button_clicked()
{
    advanced.showDirPath(DATA_PATH);
    advanced.show();
}

//Ручной поиск устройства
//TODO  интеграция сережиной хуйни
void MainWindow::on_menu_device_manualSearch_button_clicked() {

//    std::list<USBDeviceHIDManager> devices = USBDeviceHIDManager::

//    for (auto it = devices.begin(); it != devices.end(); ++it) {
//        qDebug() << QString::fromStdWString(it->name)
//                 << QString::fromStdString(it->type)
//                 << QString::fromStdString(it->hidPID)
//                 << QString::fromStdString(it->hidVID);
//    }
}

//Открытие руководства пользователя
//TODO создать само руководство + руководство в формате chm
void MainWindow::on_menu_other_app_reference_button_clicked()
{
    QString userManualPath = LINK_FILE + DATA_PATH + NAMS_MANUAL;
    QDesktopServices::openUrl(QUrl(userManualPath, QUrl::TolerantMode));
}

//Менеджер устройств Windows
void MainWindow::on_menu_device_winManager_button_clicked()
{
    QString deviceManagerpath = LINK_FILE + DATA_PATH + "/" + DIR_BAT +NAMS_DEVMAN;
    qDebug() << deviceManagerpath;
    QDesktopServices::openUrl(QUrl(deviceManagerpath, QUrl::TolerantMode));
}

//Обработчик нажатия на кнопку перезагрузки программы
void MainWindow::on_menu_file_restart_button_clicked()
{
    qApp->quit();
    QProcess::startDetached(qApp->arguments()[0], qApp->arguments());
}

//Нажатие кнопки полного экрана ЛКМ
void MainWindow::on_menu_other_app_fullScreen_button_clicked(bool checked)
{
    if (ui->action_fullScreen_maximize->isChecked())
        ui->action_fullScreen_maximize->setChecked(false);
    if (checked)
        showFullScreen();
    else
        showNormal();
}

//Возвращает путь к папке с данными
QString AppDir::dataDirPath()
{
    return QStandardPaths::writableLocation(QStandardPaths::DataLocation);
}

//Возвращает путь к програм файлс исходя из значения системной переменной.
QString AppDir::programmFilesPath()
{
    QStringList varibleList =(QProcess::systemEnvironment());
    foreach (QString varible, varibleList) {
        qDebug() << varible;
        if (varible.contains(PROGRAMFILES, Qt::CaseInsensitive) && (varible.indexOf(PROGRAMFILES) == 0)) {
            QStringList varList = varible.split("=");
            return varList.at(1);
            break;
        }
    }
    return " ";
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
    createDirectory(&dir, DIR_DRIVERS);

//Переход в директорию батников
    dir.cd(DIR_BAT);
    //Батник запуска девайс менеджера
    copyFile(&dir, NAM_DEVMAN);

//Перешли в папку дров
    dir.cdUp();
    dir.cd(DIR_DRIVERS);
    //Копируем дрова с ехе
    copyExeFile(&dir, DRIVER_FTDI);
    copyExeFile(&dir, DRIVER_IVI);
    copyExeFile(&dir, DRIVER_AGILENT);

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

//Копирование экзешников с дровами
void AppDir::copyExeFile(QDir *dir, QString name)
{
    QString absAppData = dir->path() + "/" + name;
    QString absCoreDir = QCoreApplication::applicationDirPath() + "/" + QString(DIR_DRIVERS) + "/" + name;
    bool copied = false;
    if(QFile::copy(absCoreDir, absAppData))
    {
        qDebug() << MES_FILE << name << MES_COPIEDF;
        copied = true;
    }
    else if (copied)
        showCopyMessageBox(NAM_MANUAL, &absAppData);
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
      ui->experiment_graph_tab->savePng(tempFile);
      picture.openPicture(tempFile);
      picture.show();
      QApplication::alert(this, 0);
    }
}

//Кнопка отркрыть маткад
void MainWindow::on_menu_other_mathcad_open_button_clicked()
{
    QStringList versionList = ui->menu_other_mathcad_versionStatus->text().split(".");
    QString mathCadPath =  apdr.programmFilesPath() + QString(MAT_PATH) + versionList.at(0) + "\\";
    QDir::setCurrent(mathCadPath);
    QProcess *mcproc = new QProcess();
    if ( mcproc->startDetached(MAT_EXENAM) ) {
        trayIcon->showMessage(MAT_SUCCPROC, " ", QSystemTrayIcon::Information, TRAY_DELAY/4);
    }
    else {
        trayIcon->showMessage(MAT_ERRPROC, QString(MES_SELFBROWSE) + mathCadPath, QSystemTrayIcon::Critical, TRAY_DELAY/4);
    }
}

//Кнопка наличия маткада проверка
void MainWindow::on_menu_other_mathcad_check_clicked()
{
    checkMathCad();
    bool ok = ui->menu_other_mathcad_messageCheck->isChecked() && ui->menu_other_mathcad_statusCheck->isChecked();
    if(ok) {
        QString tittle = QString(MAT_SUCCESSTIT);
        QString message = QString(MAT_SUCCESSTIT) + ui->menu_other_mathcad_versionStatus->text() + QString(MAT_SUCCESSVERENB);
        trayIcon->showMessage(tittle, message, QSystemTrayIcon::Information, TRAY_DELAY/4);
        statusBar()->showMessage(message);
    }
}

//Наличие драйверов в системе
void MainWindow::on_menu_device_driverInfo_button_clicked()
{
    pushStatusBarMessage(DRIVER_MESSAGEWAIT);
    bool ividriver = false;
         //ftdidriver = false,
         //agilentdriver = false;

    //Если компоненты ИВИ установлены => есть системная переменная IVIROOTDIR, проверка:
    QStringList varibleList =(QProcess::systemEnvironment());
    foreach (const QString &varible, varibleList) {
        qDebug() << varible;
        if (varible.contains(DRIVER_IVIVARIBLE)) {
            ividriver = true;
            //trayIcon->showMessage(QString(DRIVER_TEXT) + QString(DRIVER_IVI) + QString(MAT_SUCCESS), " ", QSystemTrayIcon::Information, TRAY_DELAY/4);

            QStringList var = varible.split("=");
            QString libPath = var[1] + DRIVER_AGIVARIBLE;
            if (QFile(libPath).exists()) {
                //agilentdriver = true;
                //trayIcon->showMessage(QString(DRIVER_TEXT) + QString(DRIVER_AGILENT) + QString(MAT_SUCCESS), " ", QSystemTrayIcon::Information, TRAY_DELAY/4);
            }
            else {
                //agilentdriver = false;
                trayIcon->showMessage(QString(DRIVER_TEXT) + QString(DRIVER_AGILENT) + QString(MES_NOTCOPIEDF), DRIVER_MESSAGE, QSystemTrayIcon::Critical, TRAY_DELAY/4);
            }
            break;
        }
    }
    if (!ividriver)
        trayIcon->showMessage(QString(DRIVER_TEXT) + QString(DRIVER_IVI) + QString(MES_NOTCOPIEDF), DRIVER_MESSAGE, QSystemTrayIcon::Critical, TRAY_DELAY/4);
}

//Установить драйвера
void MainWindow::on_menu_device_driverSetUp_button_clicked()
{
    QDir::setCurrent(DATA_PATH + "/" + QString(DIR_DRIVERS));

    QProcess *ftdiproc = new QProcess(this);
    QProcess *iviproc = new QProcess(this);
    QProcess *agilentproc = new QProcess(this);

    ftdiproc->startDetached(DRIVER_FTDI);
    iviproc->startDetached(DRIVER_IVI);
    agilentproc->startDetached(DRIVER_AGILENT);

}

//Действие при нажатии на пункт "Развернуть "меню кнопки полного экрана
void MainWindow::on_action_fullScreen_maximize_triggered(bool checked)
{
    if (ui->menu_other_app_fullScreen_button->isChecked())
        ui->menu_other_app_fullScreen_button->setChecked(false);
    if(checked)
        this->showMaximized();
    else
        this->showNormal();
}
