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
#include "applicationmanager.h"
#include <QWidget>
#include <QList>

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

    ui->start_button->click();

    trayIcon = new QSystemTrayIcon(this);
    trayIcon->setToolTip(APP_NAME);
    trayIcon->setIcon(QIcon(RES_APPICON));
    trayIcon->show();

    checkMathCad();
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

//Установка всех предварительных действий в интерфейсе
void MainWindow::setUIlogic()
{
    ui->menu_other_app_fullScreen_button->installEventFilter(this);
    ui->menu_other_data_table_button->installEventFilter(this);
    ui->menu_device_driverSetUp_button->installEventFilter(this);
    ui->menu_device_driverManual_button->installEventFilter(this);

    setTablesUI();
    setButtonsMenu();
    setStatusBarWidgets();
    loadComPortsInfo();
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

    ui->experiment_tabs->removeTab(2);
    ui->experiment_tabs->removeTab(2);
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

    //Кнопка установки драйверов
    QMenu *menuDriverSetUp = new QMenu();
    menuDriverSetUp->addAction(ui->action_driverl_ivi);
    menuDriverSetUp->addAction(ui->action_driver_agilent);
    menuDriverSetUp->addAction(ui->action_driver_ftdi);
    ui->menu_device_driverSetUp_button->setMenu(menuDriverSetUp);

    //Кнопка скачивания драйверов
    QMenu *menuDownload = new QMenu();
    menuDownload->addAction(ui->action_downloadl_ivi);
    menuDownload->addAction(ui->action_download_agilent);
    menuDownload->addAction(ui->action_downloadr_ftdi);
    ui->menu_device_driverManual_button->setMenu(menuDownload);

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

    QToolButton *buttonDriverSetUp = ui->menu_device_driverSetUp_button;
    if ( (watched == buttonDriverSetUp) && (event->type() == QEvent::MouseButtonPress) )
    {
        QMouseEvent *e = static_cast<QMouseEvent *>(event);
        if (e->button() == Qt::RightButton) {
            buttonDriverSetUp->menu()->popup(buttonDriverSetUp->mapToGlobal(e->pos()));
            return true;
        } else {
            return false;
        }
    }

    QToolButton *buttonDriverDownload = ui->menu_device_driverManual_button;
    if ( (watched == buttonDriverDownload) && (event->type() == QEvent::MouseButtonPress) )
    {
        QMouseEvent *e = static_cast<QMouseEvent *>(event);
        if (e->button() == Qt::RightButton) {
            buttonDriverDownload->menu()->popup(buttonDriverDownload->mapToGlobal(e->pos()));
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
    QCheckBox *exCheck = ui->menu_other_mathcad_statusCheck;
    QLineEdit *verEdit = ui->menu_other_mathcad_versionStatus;
    QCheckBox *verCheck = ui->menu_other_mathcad_messageCheck;

    apps = new ApplicationManager();
    exCheck->setChecked(apps->isMathCad());
    verEdit->setText(apps->getMathCadVersion());
    verCheck->setChecked(apps->isVersion());

    if (exCheck->isChecked()) {
        exCheck->setStyleSheet(MAT_SUCCESSCOLOR);
        exCheck->setText(MAT_SUCCESSINF);
    }
    else {
        trayIcon->showMessage(MAT_ERRORTIT, MAT_ERRORMES, QSystemTrayIcon::Critical, TRAY_DELAY/4);
//        statusBar()->showMessage(MAT_ERRORTIT, TRAY_DELAY);
        exCheck->setText(MAT_ERRORINF);
        exCheck->setStyleSheet(MAT_ERRORCOLOR);
    }

    if (verCheck->isChecked()) {
        verCheck->setStyleSheet(MAT_SUCCESSCOLOR);
        verCheck->setText(MAT_SUCCESSVERINF);
    }
    else{
        if (exCheck->isChecked()) {
            trayIcon->showMessage(MAT_ERRORVERTIT, MAT_ERRORVERMES, QSystemTrayIcon::Critical, TRAY_DELAY/4);
//            statusBar()->showMessage(MAT_ERRORVERTIT, TRAY_DELAY);
        }
        verCheck->setStyleSheet(MAT_ERRORCOLOR);
        verCheck->setText(MAT_ERRORVERINF);
    }

    ui->menu_other_mathcad_open_button->setEnabled(verCheck->isChecked() && exCheck->isChecked());
}

//Выводит список ком портов в комбобокс
void MainWindow::loadComPortsInfo()
{
    usbprocessor = new USBProcessor();
    ui->menu_device_port_com_combobox->addItems(usbprocessor->getCOMPortsList());
    COMdevice device = usbprocessor->getCOMDevicesList().first();
    ui->menu_device_port_pid_edit->setText(device.getPID());
    ui->menu_device_port_vid_edit->setText(device.getVID());
    ui->menu_device_port_name_edit->setText(device.getDescription());
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

//WARNING при первом разе копируется битый битник
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

//TODO Вся область графика
//Нажатие на кнопку сохранения картинки
void MainWindow::on_menu_other_data_picture_button_clicked()
{
    QTemporaryDir tempDir;
    if (tempDir.isValid()) {
      const QString tempFile = tempDir.path() + "/temp.png";
      ui->graph->savePng(tempFile);
      picture.openPicture(tempFile);
      picture.show();
      QApplication::alert(this, 0);
    }
}

//Открытие проводника после сохранения изображения
void MainWindow::showSavedFile(QString path)
{
    showMinimized();
    QApplication::alert(this, 0);
    QDir savedDir(path);
    QDesktopServices::openUrl(QUrl::fromLocalFile(savedDir.absolutePath()));
}

//TODO Установить маткад и проверить
//Кнопка отркрыть маткад
void MainWindow::on_menu_other_mathcad_open_button_clicked()
{
    QString mathCadPath =  apdr.programmFilesPath() + QString(MAT_PATH) + apps->getMathCadHeadVersion() + "\\";
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
    apps->createList();
    QStandardItemModel *model = apps->getModel();
    ui->experiment_app_table->setModel(model);
    ui->experiment_tabs->addTab(ui->experiment_app_tab, tr("Приложения"));
    ui->experiment_tabs->setCurrentIndex(2);

    int rowC = 0;
    QList<Application> applications = apps->getList();
    foreach (Application app, applications) {
        rowC++;
        if ((app.getName() == QString(MAT_NAME14)) || (app.getName() == QString(MAT_NAME15)))
            break;

    }

    ui->experiment_app_table->selectRow(rowC-1);
    ui->experiment_app_table->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Stretch);
    bool ok = ui->menu_other_mathcad_messageCheck->isChecked() && ui->menu_other_mathcad_statusCheck->isChecked();
    if(ok) {
        QString tittle = QString(MAT_SUCCESSTIT);
        QString message = QString(MAT_SUCCESSTIT) + ui->menu_other_mathcad_versionStatus->text() + QString(MAT_SUCCESSVERENB);
        trayIcon->showMessage(tittle, message, QSystemTrayIcon::Information, TRAY_DELAY/4);
        statusBar()->showMessage(message);
        ui->menu_other_mathcad_open_button->setEnabled(true);
    }
}

//Наличие драйверов в системе
void MainWindow::on_menu_device_driverInfo_button_clicked()
{
    //pushStatusBarMessage(DRIVER_MESSAGEWAIT);
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
    ui->action_driverl_ivi->trigger();
    ui->action_driver_agilent->trigger();
    ui->action_driver_ftdi->trigger();
}

//TODO Обработчик ResizeEvent ( нормальный)
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

//Изменение спина сетки напряжения
void MainWindow::on_menu_experiment_gridU_spin_valueChanged(double arg1)
{
    ui->menu_experiment_gridU_slider->setValue( static_cast<int>(arg1 * 10));
}

//Изменения слайдера напряжения
void MainWindow::on_menu_experiment_gridU_slider_sliderMoved(int position)
{
    ui->menu_experiment_gridU_spin->setValue(position * 0.1);
}

//Изменение галочки сетки
void MainWindow::on_menu_experiment_grid_checkbox_toggled(bool checked)
{
    ui->menu_experiment_gridU_slider->setEnabled(checked);
    ui->menu_experiment_gridU_spin->setEnabled(checked);
    ui->menu_experiment_gridT_slider->setEnabled(checked);
    ui->menu_experiment_gridT_spin->setEnabled(checked);
}

//Галочка максимумов
void MainWindow::on_menu_experiment_minMax_checkbox_toggled(bool checked)
{
    ui->menu_experiment_minMaxTmax_spin->setEnabled(!checked);
    ui->menu_experiment_minMaxTmin_spin->setEnabled(!checked);
    ui->menu_experiment_minMaxUmax_spin->setEnabled(!checked);
    ui->menu_experiment_minMaxUmin_spin->setEnabled(!checked);
}

//Изменение сетка Время Слайдер
void MainWindow::on_menu_experiment_gridT_slider_sliderMoved(int position)
{
    ui->menu_experiment_gridT_spin->setValue(position);
}

//Изменение сетка Время Спин
void MainWindow::on_menu_experiment_gridT_spin_valueChanged(int arg1)
{
    ui->menu_experiment_gridT_slider->setValue(arg1);
}

//Изменение шаг дискретизации слайдер
void MainWindow::on_menu_experiment_curveDT_slider_sliderMoved(int position)
{
    ui->menu_experiment_curveDT_spin->setValue(position);
}

//Изменение шаг дискретизации спин
void MainWindow::on_menu_experiment_curveDT_spin_valueChanged(int arg1)
{
    ui->menu_experiment_curveDT_slider->setValue(arg1);
}

//Галка лимиты
void MainWindow::on_menu_experiment_limits_checkBox_toggled(bool checked)
{
    bool nMode = ui->menu_experiment_limitsNmax_radio->isChecked();
    //bool tMode = ui->menu_experiment_limitsTinterval_radio->isChecked();
    ui->menu_experiment_limitsNmax_radio->setEnabled(checked);
    ui->menu_experiment_limitsNmax_spin->setEnabled(checked && nMode);
    ui->menu_experiment_limitsTintervalT1_spin->setEnabled(checked && !nMode);
    ui->menu_experiment_limitsTintervalT2_spin->setEnabled(checked && !nMode);
    ui->menu_experiment_limitsTinterval_radio->setEnabled(checked);
}

//Установка драйвера IVI
void MainWindow::on_action_driverl_ivi_triggered()
{
    QDir::setCurrent(DATA_PATH + "/" + QString(DIR_DRIVERS));
    QProcess *iviproc = new QProcess(this);
    if (iviproc->startDetached(DRIVER_IVI))
        qDebug() << "Начато";
    else
        qDebug() << "Не начато";

}

//Установка жрайвера Agilent
void MainWindow::on_action_driver_agilent_triggered()
{
    QDir::setCurrent(DATA_PATH + "/" + QString(DIR_DRIVERS));
    QProcess *agilentproc = new QProcess(this);
    agilentproc->startDetached(DRIVER_AGILENT);
}

//Установкка драйвера FTDI
void MainWindow::on_action_driver_ftdi_triggered()
{
    QDir::setCurrent(DATA_PATH + "/" + QString(DIR_DRIVERS));
    QProcess *ftdiproc = new QProcess(this);
    ftdiproc->startDetached(DRIVER_FTDI);
}

//Обработка переключения режима лимитов - ограничение числа точек
void MainWindow::on_menu_experiment_limitsNmax_radio_toggled(bool checked)
{
    ui->menu_experiment_limitsTintervalT1_spin->setEnabled(!checked);
    ui->menu_experiment_limitsTintervalT2_spin->setEnabled(!checked);
    ui->menu_experiment_limitsNmax_spin->setEnabled(checked);
}

//Обработка переключения режима лимитов - установка временного интервала
void MainWindow::on_menu_experiment_limitsTinterval_radio_toggled(bool checked)
{
    ui->menu_experiment_limitsNmax_spin->setEnabled(!checked);
    ui->menu_experiment_limitsTintervalT1_spin->setEnabled(checked);
    ui->menu_experiment_limitsTintervalT2_spin->setEnabled(checked);
}

//Загрузка драйвера IVI
void MainWindow::on_action_downloadl_ivi_triggered()
{
    pushDownLoadMessage(QString(DRIVER_IVI), QString(DRIVER_URLIVI), QDesktopServices::openUrl(QUrl(DRIVER_URLIVI)));
}

//Загрузка драйвера Agilent
void MainWindow::on_action_download_agilent_triggered()
{
    pushDownLoadMessage(QString(DRIVER_AGILENT), QString(DRIVER_URLAGI), QDesktopServices::openUrl(QUrl(DRIVER_URLAGI)));
}

//Загрузка драйвера FTDI
void MainWindow::on_action_downloadr_ftdi_triggered()
{
    pushDownLoadMessage(QString(DRIVER_FTDI), QString(DRIVER_URLFTDI), QDesktopServices::openUrl(QUrl(DRIVER_URLFTDI)));
}

//Кнопка загрузки всех драйверов
void MainWindow::on_menu_device_driverManual_button_clicked()
{
    ui->action_downloadl_ivi->trigger();
    ui->action_download_agilent->trigger();
    ui->action_downloadr_ftdi->trigger();
}

//Сообзщение о начатой загрузке
void MainWindow::pushDownLoadMessage(QString name, QString link, bool status)
{
    QString tittle = "", message = "";
    if (status) {
        tittle = QString(DRIVER_DOWNTIT) + name + QString(DRIVER_DOWNTITYES);
        message = QString(DRIVER_DOWNMESYES) + name + QString(DRIVER_DOWNMESYESRES) + link;
        trayIcon->showMessage(tittle, message, QSystemTrayIcon::Information, TRAY_DELAY);
    }
    else {
        tittle = QString(DRIVER_DOWNTIT) + name + QString(DRIVER_DOWNTITNO);
        message = QString(DRIVER_DOWNMESNO) + link + QString(DRIVER_DOWNMESNOSELF) + link;
        trayIcon->showMessage(tittle, message, QSystemTrayIcon::Critical, TRAY_DELAY);
    }

}

//Кнопка автопоиска драйверов
void MainWindow::on_menu_device_autoSearch_button_clicked()
{
    usbprocessor;
}

void MainWindow::on_start_button_clicked()
{
    ui->graph->addGraph();
    ui->graph->graph()->setPen(QPen(Qt::blue));
    ui->graph->graph()->setBrush(QBrush(QColor(0, 0, 255, 20)));
    ui->graph->addGraph();
    ui->graph->graph()->setPen(QPen(Qt::red));
    QVector<double> x(500), y0(500), y1(500);
    for (int i=0; i<500; ++i)
    {
      x[i] = (i/499.0-0.5)*10;
      y0[i] = qExp(-x[i]*x[i]*0.25)*qSin(x[i]*5)*5;
      y1[i] = qExp(-x[i]*x[i]*0.25)*5;
    }
    ui->graph->graph(0)->setData(x, y0);
    ui->graph->graph(1)->setData(x, y1);
    ui->graph->axisRect()->setupFullAxesBox(true);
    ui->graph->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom);
}

void MainWindow::on_experiment_tabs_tabBarDoubleClicked(int index)
{
    if (index == 2) {
        ui->experiment_tabs->removeTab(index);
        for (int i = 0; i < ui->experiment_app_table->model()->rowCount(); i++)
            ui->experiment_app_table->model()->removeRow(0);
    }
}

void MainWindow::on_menu_other_data_table_button_clicked()
{
    ui->experiment_tabs->setCurrentIndex(1);
}

void MainWindow::on_menu_device_test_clicked()
{
    std::list<USBhidDevice> devices = USBManager::getDevicesList();
    qDebug() << "------------------------HID----------------------" << endl;
    qDebug() << "Amount of devices: " << devices.size() << endl;

    for (auto it = devices.begin(); it != devices.end(); ++it) {
        qDebug() << QString::fromStdWString(it->name);
        qDebug() << "\t" << QString::fromStdString(it->type);
        qDebug() << "\t" << QString::fromStdString(it->hidPID);
        qDebug() << "\t" << QString::fromStdString(it->hidVID);
        qDebug() << "**********";
    }

    qDebug() << "------------------------------------------------------------------------------" << endl << endl;
}

//Изменение порта в COM comboBox
void MainWindow::on_menu_device_port_comCombo_currentIndexChanged(const QString &arg1)
{
    QList<COMdevice> comsList = usbprocessor->getCOMDevicesList();
    foreach (auto device, comsList) {
        if (device.getPortName() == arg1) {
            ui->menu_device_port_pid_edit->setText(device.getPID());
            ui->menu_device_port_vid_edit->setText(device.getVID());
            ui->menu_device_port_name_edit->setText(device.getDescription());
            break;
        }
    }

    connectionStatus->setText(ui->menu_device_port_name_edit->text());
    portStatus->setText(ui->menu_device_port_com_combobox->currentText());
}

void MainWindow::on_menu_device_status_stack_currentChanged(int arg1)
{
    qDebug() << "Hi!";
}
