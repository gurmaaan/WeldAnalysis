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
#include "experiment.h"
#include <QTimer>

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

    trayIcon = new QSystemTrayIcon(this);
    trayIcon->setToolTip(APP_NAME);
    trayIcon->setIcon(QIcon(RES_APPICON));
    trayIcon->show();

    timer = new QTimer();
    connect(timer, SIGNAL(timeout()), this, SLOT(paintPoint()));
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
    ui->menu_file_open_button->installEventFilter(this);

    setTablesUI();
    setButtonsMenu();
    setStatusBarWidgets();
    loadComPortsInfo();
    setUpGraphic();
}

//Инициализация таблиц
void MainWindow::setTablesUI()
{
    //Создание моделей для установки в tableVie
    Settings *settings = new Settings();
    settings->loadEmpty();
    ui->settings_table->setModel(settings->getSetModel());

    Statistics *statistics = new Statistics();
    statistics->loadEmpty();
    ui->statistics_table->setModel(statistics->getStatModel());

    ui->settings_table->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Stretch);
    ui->statistics_table->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Stretch);

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

    //Кнопка открыть
    QMenu *menuOpen = new QMenu();
    menuOpen->addAction(ui->action_open_excel);
    menuOpen->addAction(ui->action_open_txt);
    ui->menu_file_open_button->setMenu(menuOpen);
}

//Обработчик всех нажатий ПКМ по кнопкам
bool MainWindow::eventFilter(QObject *watched, QEvent *event)
{
    //Обработка кнопки таблицы
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

    //Обработка кнопки фулскрин
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

    //Обработка кнопки открытия
    QToolButton *buttonOpen = ui->menu_file_open_button;
    if ( (watched == buttonOpen) && (event->type() == QEvent::MouseButtonPress) )
    {
        QMouseEvent *e = static_cast<QMouseEvent *>(event);
        if (e->button() == Qt::RightButton) {
            buttonOpen->menu()->popup(buttonOpen->mapToGlobal(e->pos()));
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

void MainWindow::paintPoint()
{
    static QTime time(QTime::currentTime());

    double key = time.elapsed()/1000.0; // time elapsed since start of demo, in seconds
    static double lastPointKey = 0;

    if (key-lastPointKey > 0.002) // at most add point every 2 ms
    {
      // add data to lines:
      usbprocessor->getValueFromDevice();
      ui->graph->graph(0)->addData(key, qSin(key)+qrand()/(double)RAND_MAX*1*qSin(key/0.3843));
      // rescale value (vertical) axis to fit the current data:
      ui->graph->graph(0)->rescaleValueAxis();
      //ui->customPlot->graph(1)->rescaleValueAxis(true);
      lastPointKey = key;
    }
    // make key axis range scroll with the data (at a constant range size of 8):
    ui->graph->xAxis->setRange(key, 8, Qt::AlignRight);
    ui->graph->replot();

    // calculate frames per second:
    static double lastFpsKey;
    static int frameCount;
    ++frameCount;
    if (key-lastFpsKey > 2) // average fps over 2 seconds
    {
      ui->statusBar->showMessage(
            QString("%1 FPS, Total Data points: %2")
            .arg(frameCount/(key-lastFpsKey), 0, 'f', 0)
            .arg(ui->graph->graph(0)->data()->size())
            , 0);
      lastFpsKey = key;
      frameCount = 0;
    }

}

//Выводит список ком портов в комбобокс
void MainWindow::loadComPortsInfo()
{
    usbprocessor = new USBProcessor();
    ui->menu_device_port_com_combo->addItems(usbprocessor->getCOMPortsList());

    COMdevice device = usbprocessor->getCOMDevicesList().first();
    ui->menu_device_port_pid_edit->setText(device.getPID());
    ui->menu_device_port_vid_edit->setText(device.getVID());
    ui->menu_device_port_name_edit->setText(device.getDescription());
}

void MainWindow::setUpGraphic()
{
    //Выбор цвета линии (сейчас синий)
    ui->graph->addGraph();
    ui->graph->graph(0)->setPen(QPen(QColor(40, 110, 255)));

    //Ось х - время
    QSharedPointer<QCPAxisTickerTime> timeTicker(new QCPAxisTickerTime);
    timeTicker->setTimeFormat("%m:%s");
    ui->graph->xAxis->setTicker(timeTicker);
    ui->graph->axisRect()->setupFullAxesBox();

 //TODO сюда засетапить пределы
    //Ось у - напряжени
    ui->graph->yAxis->setRange(-0.5, 0.5);

    // Синхронизация осей
    connect(ui->graph->xAxis, SIGNAL(rangeChanged(QCPRange)), ui->graph->xAxis2, SLOT(setRange(QCPRange)));
    connect(ui->graph->yAxis, SIGNAL(rangeChanged(QCPRange)), ui->graph->yAxis2, SLOT(setRange(QCPRange)));
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

//Кнопка отркрыть маткад
void MainWindow::on_menu_other_mathcad_open_button_clicked()
{
    QString mathCadPath =  apdr.programmFilesPath() + QString(MAT_PATH) + apps->getMathCadHeadVersion(ui->menu_other_mathcad_versionStatus->text());
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
        if ((app.getName() == QString(MAT_NAME14)) || (app.getName().contains(QString(MAT_NAME15))))
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

//Двойное нажатие по вкладке в таб виджете экспериментов
void MainWindow::on_experiment_tabs_tabBarDoubleClicked(int index)
{
    if (index == 2) {
        ui->experiment_tabs->removeTab(index);
        for (int i = 0; i < ui->experiment_app_table->model()->rowCount(); i++)
            ui->experiment_app_table->model()->removeRow(0);
    }
}

//Нажатие на кнопку таблица в разделе другое
void MainWindow::on_menu_other_data_table_button_clicked()
{
    ui->experiment_tabs->setCurrentIndex(1);
}

//Изменение порта в COM comboBox
void MainWindow::on_menu_device_port_com_combo_currentIndexChanged(const QString &arg1)
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
    portStatus->setText(ui->menu_device_port_com_combo->currentText());
}

//Нажатие кнопки поиска устройства
void MainWindow::on_menu_device_port_search_button_clicked()
{

}

//Кнопка диспетчер устройств
void MainWindow::on_menu_device_WinManager_button_clicked()
{
    QString deviceManagerpath = LINK_FILE + DATA_PATH + "/" + DIR_BAT +NAMS_DEVMAN;
    qDebug() << deviceManagerpath;
    QDesktopServices::openUrl(QUrl(deviceManagerpath, QUrl::TolerantMode));
}

void MainWindow::on_menu_device_set_box_clicked(bool checked)
{
    ui->menu_device_set_baud_combo->setEnabled(!checked);
    ui->menu_device_set_baud_label->setEnabled(!checked);
    ui->menu_device_set_byte_combo->setEnabled(!checked);
    ui->menu_device_set_byte_label->setEnabled(!checked);
    ui->menu_device_set_parity_combo->setEnabled(!checked);
    ui->menu_device_set_parity_label->setEnabled(!checked);
    ui->menu_device_set_xonxoff_combo->setEnabled(!checked);
    ui->menu_device_set_xonxoff_label->setEnabled(!checked);
}

void MainWindow::on_start_button_clicked(bool checked)
{
    ui->stop_button->setEnabled(checked);
    if (checked)
        ui->start_button->setText("Пауза");
    else
        ui->start_button->setText("Старт");
    usbprocessor->setUpDriver();

    timer->start();
}

void MainWindow::on_stop_button_clicked(bool checked)
{
    ui->stop_button->setEnabled(checked);
    ui->start_button->setText("Пауза");
    usbprocessor->closeConnection();
    timer->stop();
}
