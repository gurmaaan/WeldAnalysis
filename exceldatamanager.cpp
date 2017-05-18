#include "exceldatamanager.h"
#include <QAxObject>
#include <QDebug>

ExcelDataManager::ExcelDataManager()
{

}

//Возвращает указатель Excel файла (Workbook) по абсолютного пути
QAxObject *ExcelDataManager::openExcelFile(QString filePath)
{
    QAxObject* excel = new QAxObject("Excel.Application", 0);
    QAxObject* workbooks = excel->querySubObject("Workbooks");
    excel->dynamicCall("Quit()");
    QAxObject* curentFile = workbooks->querySubObject("Open(const QString&)", filePath);
    return curentFile;
}

//Возвращает указатель на лист (Sheet) в книге по указателю на книгу и номеру листа. Нумерация листов начинается с 1.
QAxObject *ExcelDataManager::getDocumentSheet(QAxObject* excelFile, int sheetNumber)
{
     QAxObject* sheets = excelFile->querySubObject("Worksheets");
     QAxObject* sheet = sheets->querySubObject("Item(int)", sheetNumber);
     return sheet;
}

//Возвращает количество непустых строк на листе по указателю на лист. Нумерация строк начинается с 1.
int ExcelDataManager::getSheetRowsCount(QAxObject *excelSheet)
{
    QAxObject* usedRange = excelSheet->querySubObject("UsedRange");
    QAxObject* rows = usedRange->querySubObject("Rows");
    int countRows = rows->property("Count").toInt();
    return countRows;
}

//Возвращает количество непустых столбцов на листе по указателю на лист. Нумерация колонок начинается с 1.
int ExcelDataManager::getSheetColumnsCount(QAxObject *excelSheet)
{
    QAxObject* usedRange = excelSheet->querySubObject("UsedRange");
    QAxObject* columns = usedRange->querySubObject("Columns");
    int countCols = columns->property("Count").toInt();
    return countCols;
}

//Ковертация статистики эксперимента в модель для таблицы правой панели
QStandardItemModel *ExcelDataManager::getStatisticsModel(QAxObject *excelFile)
{
    QStandardItemModel *model = new QStandardItemModel;
    QAxObject* sheet = getDocumentSheet(excelFile, 2);

    model = setModelHeaders(sheet, model);

    //TODO переделывание формата (номера строк)
    for (int col = 1; col <= 2; col ++) {
        for (int row = 7; row <= 10; row++) {
            //Cell(row, col)
            QAxObject* cell = sheet->querySubObject("Cells(int,int)", row, col);
            QVariant value = cell->property("Value");
            QStandardItem* item = new QStandardItem(value.toString());
            model->setItem(row - 7, col - 1, item);
        }
    }
    excelFile->dynamicCall("Close()");
    return model;
}

//Ковертация настроек эксперимента в модель для таблицы правой панели
QStandardItemModel *ExcelDataManager::getSettingsModel(QAxObject *excelFile)
{
    QStandardItemModel *model = new QStandardItemModel;
    QAxObject* sheet = getDocumentSheet(excelFile, 2);

    model = setModelHeaders(sheet, model);
//Первая часть до статистики
    for (int col = 1; col <= 2; col ++) {
        for (int row = 2; row <= 6; row++) {
            //Cell(row, col)
            QAxObject* cell = sheet->querySubObject("Cells(int,int)", row, col);
            QVariant value = cell->property("Value");
            QStandardItem* item = new QStandardItem(value.toString());
            model->setItem(row - 2, col - 1, item);
        }
    }
//Вторая часть после статистики
    for (int col = 1; col <= 2; col ++) {
        for (int row = 11; row <= 28; row++) {
            //Cell(row, col)
            QAxObject* cell = sheet->querySubObject("Cells(int,int)", row, col);
            QVariant value = cell->property("Value");
            QStandardItem* item = new QStandardItem(value.toString());
            model->setItem(row - 6, col - 1, item);
        }
    }
    return model;
}

//Установка заголовков моделей
QStandardItemModel *ExcelDataManager::setModelHeaders(QAxObject *excelSheet, QStandardItemModel *model)
{
    QStringList headers;
    for (int colH = 0; colH < 2; colH++) {
        QAxObject* cellH = excelSheet->querySubObject("Cells(int,int)", 1, colH + 1);
        QVariant cellHValue = cellH->property("Value");
        headers.append(cellHValue.toString());
    }
    model->setHorizontalHeaderLabels(headers);
    return model;
}
