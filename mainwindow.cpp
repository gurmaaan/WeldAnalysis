#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include "exceldatamanager.h"
#include <QFileDialog>
#include <QString>
#include <QFileInfo>
#include <QStandardItem>
#include <QStandardItemModel>

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
    setTablesColumnWidth();
}

void MainWindow::setTablesUI()
{
    //Создание моделей для установки в tableView
    QStandardItemModel *settingsModel = new QStandardItemModel;
    QStandardItemModel *realTimeModel = new QStandardItemModel;

    //Установка заголовков в обе таблицы
    QStringList headers;
    headers.append("Параметр");
    headers.append("Значение");
    settingsModel->setHorizontalHeaderLabels(headers);
    realTimeModel->setHorizontalHeaderLabels(headers);
}

void MainWindow::setTablesColumnWidth()
{
    int realTimeTableWidth = ui->realTime_table->width();
    ui->realTime_table->setColumnWidth(0, realTimeTableWidth/2);
    ui->realTime_table->setColumnWidth(1, realTimeTableWidth/2);

    int settingsTableWidth = ui->settings_table->width();
    ui->settings_table->setColumnWidth(0, settingsTableWidth/2);
    ui->settings_table->setColumnWidth(1, settingsTableWidth/2);
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
    QAxObject* sheet = testManager.getDocumentSheet(testManager.openExcelFile(excelFilePath), 1);
    QAxObject* usedRange = sheet->querySubObject("UsedRange");
    QAxObject* rows = usedRange->querySubObject("Rows");
    int countRows = rows->property("Count").toInt();
    qDebug() << "Количество строк 1-го листа книги: " << countRows;
}
