#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QDesktopServices>
#include "exceldatamanager.h"
#include "usbmanager.hpp"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
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
    std::list<USBDevice> devices = USBManager::getDevicesList();

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
        this->showFullScreen();
    else
        this->showNormal();
}


void MainWindow::on_menu_other_app_reference_button_clicked()
{
    QDesktopServices::openUrl(QUrl("file:///C:/Users/Dima/YandexDisk/_Application/WeldAnalysis/UserManual.pdf", QUrl::TolerantMode));
}
