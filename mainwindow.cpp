#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include "exceldatamanager.h"
#include <QFileDialog>
#include <QString>
#include <QFileInfo>

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
    QFileInfo filePath = QFileDialog::getOpenFileName(
                this,
                tr("Chose Excel workbook"),
                QDir::rootPath(),
                tr("Workbooks (*.xlsx)")
            );
    QString excelFilePath = filePath.absoluteFilePath();
    ExcelDataManager testManager;

    //Нумерация книг в Excel начинается с 1
    QAxObject* sheet = testManager.getDocumentSheet(testManager.openExcelFile(excelFilePath), 2);
    QAxObject* usedRange = sheet->querySubObject("UsedRange");
    QAxObject* rows = usedRange->querySubObject("Rows");
    int countRows = rows->property("Count").toInt();
    qDebug() << "Количество строк 1-го листа книги: " << countRows;
}
