#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "constants.h"
#include "applicationmanager.h"
#include "exceldatamanager.h"
#include "jsondatamanager.h"
#include "usbhidmanager.hpp"
#include "experiment.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    DATA_PATH = apdr.dataDirPath();
    apdr.copyFilesToAppData();

    experiment = new Experiment();

    connect(&picture, &PictureWindow::savedFileName, this, &MainWindow::pushStatusBarMessage);
    connect(&picture, &PictureWindow::savedFileName, this, &MainWindow::pushInformationNotification);
    connect(&picture, &PictureWindow::savedFilePath, this, &MainWindow::showSavedFile);
    connect(experiment, &Experiment::enableGUI, this, &MainWindow::guiUpdater);

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

//###########################################################################_____File__________//
//----------------------------------------------------------------_____Создание_____//
//Кнопка "Новый" эксперимент
void MainWindow::on_menu_file_new_button_clicked()
{
    experiment->createNew(true);
    //Разморозить все гуи
    //Обновить модель название + дата и время
    //Отобразить на графике пипиську
    //Создать темп файл
    //Проверить подключение устройства -> разморозить или заморозить кнопку старт
}
//Кнопка "Открыть" эксперимент
void MainWindow::on_menu_file_open_button_clicked()
{
}
//Действие "Открыть как Excel" = открыть
void MainWindow::on_action_open_excel_triggered()
{
}
//Действие "Открыть как TXT"
void MainWindow::on_action_open_txt_triggered()
{
}
//Кнопка "Закрыть" эксперимент
void MainWindow::on_menu_file_close_button_clicked()
{
}

//----------------------------------------------------------------_____Сохранение___//
//Кнопка "Сохранить" эксперимент
void MainWindow::on_menu_file_save_button_clicked(bool checked)
{
}
//Действие "Сохранить как Excel" = открыть
void MainWindow::on_action_saveas_excel_triggered()
{
}
//Действие "Открыть как TXT"
void MainWindow::on_action_saveas_txt_triggered()
{
}

//----------------------------------------------------------------_____Программа____//
//Кнопка "Перезагрузка"
void MainWindow::on_menu_file_restart_button_clicked()
{
    qApp->quit();
    QProcess::startDetached(qApp->arguments()[0], qApp->arguments());
}


//###########################################################################_____Device________//
//----------------------------------------------------------------_____Порт___________//
//Кнопка "Поиск" устройства
void MainWindow::on_menu_device_port_search_button_clicked()
{
}
//Комбобокс "COM порты"
void MainWindow::on_menu_device_port_com_combo_currentIndexChanged(const QString &arg1)
{
    QList<COMdevice> comsList = usbprocessor->getCOMDevicesList();
    foreach(auto device, comsList) {
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
//Кнопка "Все порты"
void MainWindow::on_menu_device_port_all_button_clicked()
{

}

//----------------------------------------------------------------_____Настройки______//
//Чекбокс "Ручная настройка параметров порта"
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
//Комбобокс "Бит в секунду"
void MainWindow::on_menu_device_set_baud_combo_currentIndexChanged(const QString &arg1)
{

}
//Комбобокс "Четность"
void MainWindow::on_menu_device_set_parity_combo_currentIndexChanged(const QString &arg1)
{

}
//Комбобокс "Бит данных"
void MainWindow::on_menu_device_set_byte_combo_currentIndexChanged(const QString &arg1)
{

}
//Комбобокс "Управление потоком"
void MainWindow::on_menu_device_set_xonxoff_combo_currentIndexChanged(const QString &arg1)
{

}

//----------------------------------------------------------------_____Статус_________//
//Кнопка "Тестовый запрос"
void MainWindow::on_menu_device_test_button_clicked()
{

}
//Кнопка "Диспетчер устройств"
void MainWindow::on_menu_device_WinManager_button_clicked()
{
    QString deviceManagerpath = LINK_FILE + DATA_PATH + "/" + DIR_BAT + NAMS_DEVMAN;

    qDebug() << deviceManagerpath;
    QDesktopServices::openUrl(QUrl(deviceManagerpath, QUrl::TolerantMode));
}
//TODO единая функция смены текста интерфейса


//###########################################################################_____Experiment____//
//----------------------------------------------------------------_____Канал______________//
//Комбобокс "Номер канала"
void MainWindow::on_menu_experiment_channel_combo_currentIndexChanged(int index)
{

}

//----------------------------------------------------------------_____Сетка______________//
//Чекбокс "Сетка"
void MainWindow::on_menu_experiment_grid_box_clicked(bool checked)
{
    ui->menu_experiment_grid_U_slider->setEnabled(checked);
    ui->menu_experiment_grid_U_spin->setEnabled(checked);
    ui->menu_experiment_grid_T_slider->setEnabled(checked);
    ui->menu_experiment_grid_T_spin->setEnabled(checked);
}
//Слайдер "Шаг напряжения" сетки
void MainWindow::on_menu_experiment_grid_U_slider_sliderMoved(int position)
{
    ui->menu_experiment_grid_U_spin->setValue(position * 0.1);
}
//Спин "Шаг напряжения " сетки
void MainWindow::on_menu_experiment_grid_U_spin_valueChanged(double arg1)
{
    ui->menu_experiment_grid_U_slider->setValue(static_cast<int>(arg1 * 10));
}
//Слайдер "Шаг времени" сетки
void MainWindow::on_menu_experiment_grid_T_slider_sliderMoved(int position)
{
    ui->menu_experiment_grid_T_spin->setValue(position);
}
//Спин "Шаг времени" сетки
void MainWindow::on_menu_experiment_grid_T_spin_valueChanged(int arg1)
{
    ui->menu_experiment_grid_T_slider->setValue(arg1);
}

//----------------------------------------------------------------_____Пределы____________//
//Чекбокс "Пределы"
void MainWindow::on_menu_experiment_minMax_box_clicked(bool checked)
{
    ui->menu_experiment_minMax_Tmax_spin->setEnabled(!checked);
    ui->menu_experiment_minMax_Tmin_spin->setEnabled(!checked);
    ui->menu_experiment_minMax_Umax_spin->setEnabled(!checked);
    ui->menu_experiment_minMax_Umin_spin->setEnabled(!checked);
}
//Спин "Минимум напряжения" пределов
void MainWindow::on_menu_experiment_minMax_Umin_spin_valueChanged(double arg1)
{

}
//Спин "Максимум напряжения" пределов
void MainWindow::on_menu_experiment_minMax_Umax_spin_valueChanged(double arg1)
{

}
//Спин "Минимум времени" пределов
void MainWindow::on_menu_experiment_minMax_Tmin_spin_valueChanged(int arg1)
{

}
//Спин "Максимум времени" пределов
void MainWindow::on_menu_experiment_minMax_Tmax_spin_valueChanged(int arg1)
{

}

//----------------------------------------------------------------_____Кривая_____________//
//Комбобокс "Соединение точек"
void MainWindow::on_menu_experiment_curveLine_combo_currentIndexChanged(const QString &arg1)
{

}
//Слайдер "Шаг дискретизации"
void MainWindow::on_menu_experiment_curveDT_slider_sliderMoved(int position)
{
    ui->menu_experiment_curveDT_spin->setValue(position);
}
//Спин "Шаг дискретизации"
void MainWindow::on_menu_experiment_curveDT_spin_valueChanged(int arg1)
{
    ui->menu_experiment_curveDT_slider->setValue(arg1);
}

//----------------------------------------------------------------_____Лимиты_____________//
//Чекбокс "Лимиты"
void MainWindow::on_menu_experiment_limits_box_clicked(bool checked)
{
    bool nMode = ui->menu_experiment_limits_N_radio->isChecked();

    //bool tMode = ui->menu_experiment_limits_T_radio->isChecked();
    ui->menu_experiment_limits_N_radio->setEnabled(checked);
    ui->menu_experiment_limits_N_spin->setEnabled(checked && nMode);
    ui->menu_experiment_limits_T1_spin->setEnabled(checked && !nMode);
    ui->menu_experiment_limits_T2_spin->setEnabled(checked && !nMode);
    ui->menu_experiment_limits_T_radio->setEnabled(checked);
}
//Радио "Число точек" в лимитах
void MainWindow::on_menu_experiment_limits_N_radio_clicked(bool checked)
{
    ui->menu_experiment_limits_T1_spin->setEnabled(!checked);
    ui->menu_experiment_limits_T2_spin->setEnabled(!checked);
    ui->menu_experiment_limits_N_spin->setEnabled(checked);
}
//Спин "Число точек" в лимитах
void MainWindow::on_menu_experiment_limits_N_spin_valueChanged(int arg1)
{

}
//Радио "Временной интервал" в лимитах
void MainWindow::on_menu_experiment_limits_T_radio_clicked(bool checked)
{
    ui->menu_experiment_limits_N_spin->setEnabled(!checked);
    ui->menu_experiment_limits_T1_spin->setEnabled(checked);
    ui->menu_experiment_limits_T2_spin->setEnabled(checked);
}
//Спин "Начало интервала" в лимитах
void MainWindow::on_menu_experiment_limits_T1_spin_valueChanged(int arg1)
{

}
//Спин "Конец интервала" в лимитах
void MainWindow::on_menu_experiment_limits_T2_spin_valueChanged(int arg1)
{

}

//----------------------------------------------------------------_____Сброс______________//
//Кнопка "Сброс настроек эксперимента"
void MainWindow::on_menu_experiment_reset_button_clicked()
{

}


//###########################################################################_____Other_________//
//----------------------------------------------------------------_____Данные________//
//TODO Фото всей область графика
//Кнопка "Сохранить картинку"
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
//Нажатие на кнопку таблица в разделе другое
void MainWindow::on_menu_other_data_table_button_clicked()
{
    ui->experiment_tabs->setCurrentIndex(1);
}
//Действие "Открыть таблицу внутри программы"
void MainWindow::on_action_table_internal_triggered()
{

}
//Действие "Открыть таблицу Excel"
void MainWindow::on_action_table_excel_triggered()
{

}
//Действие "Открыть таблицу в блокноте"
void MainWindow::on_action_table_notepad_triggered()
{

}

//----------------------------------------------------------------_____MathCad_______//
//Кнопка "Проверить" MathCad
void MainWindow::on_menu_other_mathcad_check_button_clicked()
{
    checkMathCad();
    apps->createList();
    QStandardItemModel *model = apps->getModel();
    ui->experiment_app_table->setModel(model);
    ui->experiment_tabs->addTab(ui->experiment_app_tab, tr("Приложения"));
    ui->experiment_tabs->setCurrentIndex(2);

    int rowC = 0;
    QList<Application> applications = apps->getList();
    foreach(Application app, applications) {
        rowC++;
        if ((app.getName() == QString(MAT_NAME14)) || (app.getName().contains(QString(MAT_NAME15))))
            break;
    }

    ui->experiment_app_table->selectRow(rowC - 1);
    ui->experiment_app_table->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Stretch);
    bool ok = ui->menu_other_mathcad_check->isChecked() && ui->menu_other_mathcad_version_check->isChecked();
    if (ok) {
        QString tittle = QString(MAT_SUCCESSTIT);
        QString message = QString(MAT_SUCCESSTIT) + ui->menu_other_mathcad_version_edit->text() + QString(MAT_SUCCESSVERENB);
        trayIcon->showMessage(tittle, message, QSystemTrayIcon::Information, TRAY_DELAY / 4);
        statusBar()->showMessage(message);
        ui->menu_other_mathcad_open_button->setEnabled(true);
    }
}
//Проверка установленной версии Маткада
void MainWindow::checkMathCad()
{
    QCheckBox *exCheck = ui->menu_other_mathcad_check;
    QLineEdit *verEdit = ui->menu_other_mathcad_version_edit;
    QCheckBox *verCheck = ui->menu_other_mathcad_version_check;

    apps = new ApplicationManager();
    exCheck->setChecked(apps->isMathCad());
    verEdit->setText(apps->getMathCadVersion());
    verCheck->setChecked(apps->isVersion());

    if (exCheck->isChecked()) {
        exCheck->setStyleSheet(MAT_SUCCESSCOLOR);
        exCheck->setText(MAT_SUCCESSINF);
    } else {
        trayIcon->showMessage(MAT_ERRORTIT, MAT_ERRORMES, QSystemTrayIcon::Critical, TRAY_DELAY / 4);
//        statusBar()->showMessage(MAT_ERRORTIT, TRAY_DELAY);
        exCheck->setText(MAT_ERRORINF);
        exCheck->setStyleSheet(MAT_ERRORCOLOR);
    }

    if (verCheck->isChecked()) {
        verCheck->setStyleSheet(MAT_SUCCESSCOLOR);
        verCheck->setText(MAT_SUCCESSVERINF);
    } else {
        if (exCheck->isChecked())
            trayIcon->showMessage(MAT_ERRORVERTIT, MAT_ERRORVERMES, QSystemTrayIcon::Critical, TRAY_DELAY / 4);
//            statusBar()->showMessage(MAT_ERRORVERTIT, TRAY_DELAY);
        verCheck->setStyleSheet(MAT_ERRORCOLOR);
        verCheck->setText(MAT_ERRORVERINF);
    }

    ui->menu_other_mathcad_open_button->setEnabled(verCheck->isChecked() && exCheck->isChecked());
}
//Кнопка отркрыть маткад
void MainWindow::on_menu_other_mathcad_open_button_clicked()
{
    QString mathCadPath = apdr.programmFilesPath() + QString(MAT_PATH) + apps->getMathCadHeadVersion(ui->menu_other_mathcad_version_edit->text());

    QDir::setCurrent(mathCadPath);
    QProcess *mcproc = new QProcess();
    if (mcproc->startDetached(MAT_EXENAM))
        trayIcon->showMessage(MAT_SUCCPROC, " ", QSystemTrayIcon::Information, TRAY_DELAY / 4);
    else
        trayIcon->showMessage(MAT_ERRPROC, QString(MES_SELFBROWSE) + mathCadPath, QSystemTrayIcon::Critical, TRAY_DELAY / 4);
}

//----------------------------------------------------------------_____Программа_____//
//Кнопка "Открыть Справку"
//TODO создать само руководство + руководство в формате chm
void MainWindow::on_menu_other_app_reference_button_clicked()
{
    QString userManualPath = LINK_FILE + DATA_PATH + NAMS_MANUAL;
    QDesktopServices::openUrl(QUrl(userManualPath, QUrl::TolerantMode));
}
//Кнопка "Полный экран"
void MainWindow::on_menu_other_app_screen_button_clicked(bool checked)
{
    if (ui->action_screen_maximize->isChecked())
        ui->action_screen_maximize->setChecked(false);
    if (checked)
        showFullScreen();
    else
        showNormal();
}
//Действие "Растянуть"
void MainWindow::on_action_screen_maximize_triggered(bool checked)
{
    if (ui->menu_other_app_screen_button->isChecked())
        ui->menu_other_app_screen_button->setChecked(false);
    if (checked)
        this->showMaximized();
    else
        this->showNormal();
}
//Кнопка "Продвинутый режим"
void MainWindow::on_menu_other_app_advanced_button_clicked()
{
    advanced.showDirPath(DATA_PATH);
    advanced.show();
}


//###########################################################################_____Internal______//
//----------------------------------------------------------------_____Интерфейс________//
//Включение/выключение всех соответсвующих элементов интерфейса (слот) при создании/открытии эксперимента
void MainWindow::guiUpdater(bool status)
{
    ui->menu_file_close_button->setEnabled(status);
    ui->menu_file_saveAs_button->setEnabled(status);
    ui->menu_file_save_button->setEnabled(status);
}
//Установка всех предварительных действий в интерфейсе
void MainWindow::setUIlogic()
{
    ui->menu_other_app_screen_button->installEventFilter(this);
    ui->menu_other_data_table_button->installEventFilter(this);
    ui->menu_file_open_button->installEventFilter(this);

    setTablesUI();
    setStatusBarWidgets();
    setButtonsMenu();
    loadComPortsInfo();
    setUpGraphic();
}
//Инициализация таблиц (загрузка пустых значений)
void MainWindow::setTablesUI()
{
    //Создание моделей для установки в tableVie

    ui->settings_table->setModel(experiment->updateSetModel());
    ui->statistics_table->setModel(experiment->updateStatModel());

    ui->settings_table->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Stretch);
    ui->statistics_table->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Stretch);

    ui->experiment_tabs->removeTab(2);
    ui->experiment_tabs->removeTab(2);
}
//Создание и добавление виджетов в статус бар
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
//Установка фильтра нажатия ПКМ на все кнопки
bool MainWindow::eventFilter(QObject *watched, QEvent *event)
{
    //Обработка кнопки таблицы
    QToolButton *buttonTable = ui->menu_other_data_table_button;

    if ((watched == buttonTable) && (event->type() == QEvent::MouseButtonPress)) {
        QMouseEvent *e = static_cast<QMouseEvent *>(event);
        if (e->button() == Qt::RightButton) {
            buttonTable->menu()->popup(buttonTable->mapToGlobal(e->pos()));
            return true;
        } else {
            return false;
        }
    }

    //Обработка кнопки фулскрин
    QToolButton *buttonFullScreen = ui->menu_other_app_screen_button;
    if ((watched == buttonFullScreen) && (event->type() == QEvent::MouseButtonPress)) {
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
    if ((watched == buttonOpen) && (event->type() == QEvent::MouseButtonPress)) {
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
//Добавление контекстного меню во все кнопки
void MainWindow::setButtonsMenu()
{
    //Кнопка полного экрана
    QMenu *menuFullScreen = new QMenu();

    menuFullScreen->addAction(ui->action_screen_maximize);
    ui->menu_other_app_screen_button->setMenu(menuFullScreen);

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

//----------------------------------------------------------------_____Картинка_________//
//Вывод сообщения в статус бар (слот) при сохранении картинки графика
void MainWindow::pushStatusBarMessage(QString message)
{
    statusBar()->showMessage(message, 5000);
}
//Вывод сообщения в нотификейшн центр (слот) при сохранении картинки графика
void MainWindow::pushInformationNotification(QString message)
{
    QString title = QString(MES_IMG) + QString(TIT_SAVED),
            messageText = message + QString(MES_IMG) + QString(MES_SUCSAVE);
    trayIcon->showMessage(title, messageText, QSystemTrayIcon::Information, TRAY_DELAY);
}
//Открытие проводника после сохранения изображения (слот)
void MainWindow::showSavedFile(QString path)
{
    showMinimized();
    QApplication::alert(this, 0);
    QDir savedDir(path);
    QDesktopServices::openUrl(QUrl::fromLocalFile(savedDir.absolutePath()));
}

//----------------------------------------------------------------_____График___________//
//Добавление точки на график + рассчет зависимости времени для теста
void MainWindow::paintPoint()
{
    static QTime time(QTime::currentTime());

    double key = time.elapsed() / 1000.0; // time elapsed since start of demo, in seconds
    static double lastPointKey = 0;

    if (key - lastPointKey > 0.002) { // at most add point every 2 ms
        // add data to lines:
        usbprocessor->getValueFromDevice();
        ui->graph->graph(0)->addData(key, qSin(key) + qrand() / (double)RAND_MAX * 1 * qSin(key / 0.3843));
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
    if (key - lastFpsKey > 2) { // average fps over 2 seconds
        ui->statusBar->showMessage(
            QString("%1 FPS, Total Data points: %2")
            .arg(frameCount / (key - lastFpsKey), 0, 'f', 0)
            .arg(ui->graph->graph(0)->data()->size())
            , 0);
        lastFpsKey = key;
        frameCount = 0;
    }
}
//Предварительная настройка графика (цвета, пределы и тд)
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

//----------------------------------------------------------------_____Управление_______//
//Двойное нажатие по вкладке для ее закрытия
void MainWindow::on_experiment_tabs_tabBarDoubleClicked(int index)
{
    if (index == 2) {
        ui->experiment_tabs->removeTab(index);
        for (int i = 0; i < ui->experiment_app_table->model()->rowCount(); i++)
            ui->experiment_app_table->model()->removeRow(0);
    }
}
//Кнопка старт эксперимент
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
//Нажатие кнопки "Стоп эксперимент"
void MainWindow::on_stop_button_clicked(bool checked)
{
    ui->stop_button->setEnabled(checked);
    ui->start_button->setText("Пауза");
    usbprocessor->closeConnection();
    timer->stop();
}
