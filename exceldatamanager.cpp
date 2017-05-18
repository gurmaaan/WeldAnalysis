#include "exceldatamanager.h"
#include <QAxObject>
#include <QDebug>
#include "constants.h"

ExcelDataManager::ExcelDataManager()
{

}

//Возвращает указатель Excel файла (Workbook) по абсолютного пути
QAxObject *ExcelDataManager::openExcelFile(QString filePath)
{
    QAxObject* excel = new QAxObject(EXCEL_APP, 0);
    QAxObject* workbooks = excel->querySubObject(EXCEL_WORKBOOKS);
    excel->dynamicCall(EXCEL_QUIT);
    QAxObject* curentFile = workbooks->querySubObject(EXCEL_OPEN, filePath);
    return curentFile;
}

//Возвращает указатель на лист (Sheet) в книге по указателю на книгу и номеру листа.
//Нумерация листов начинается с 1.
QAxObject *ExcelDataManager::getDocumentSheet(QAxObject* excelFile, int sheetNumber)
{
     QAxObject* sheets = excelFile->querySubObject(EXCEL_WORKSHEETS);
     QAxObject* sheet = sheets->querySubObject(EXCEL_ITEM, sheetNumber);
     return sheet;
}

//Возвращает количество непустых строк на листе по указателю на лист.
//Нумерация строк начинается с 1.
int ExcelDataManager::getSheetRowsCount(QAxObject *excelSheet)
{
    QAxObject* usedRange = excelSheet->querySubObject(EXCEL_USEDRANGE);
    QAxObject* rows = usedRange->querySubObject(EXCEL_ROWS);
    int countRows = rows->property(EXCEL_COUNT).toInt();
    return countRows;
}

//Возвращает количество непустых столбцов на листе по указателю на лист. Нумерация колонок начинается с 1.
int ExcelDataManager::getSheetColumnsCount(QAxObject *excelSheet)
{
    QAxObject* usedRange = excelSheet->querySubObject(EXCEL_USEDRANGE);
    QAxObject* columns = usedRange->querySubObject(EXCEL_COLUMNS);
    int countCols = columns->property(EXCEL_COUNT).toInt();
    return countCols;
}

//Ковертация статистики эксперимента в модель для таблицы правой панели
QStandardItemModel *ExcelDataManager::getStatisticsModel(QAxObject *excelFile)
{
    QStandardItemModel *model = new QStandardItemModel;
    QAxObject* sheet = getDocumentSheet(excelFile, EXCEL_SETSTATPAGE);

    model = setModelHeaders(sheet, model);

    for (int col = EXCEL_SETSTATCOLBEGIN; col <= EXCEL_SETSTATCOLEND; col ++)
    {
        for (int row = EXCEL_STATROWBEGIN; row <= EXCEL_STATROWEND; row++)
        {
            QAxObject* cell = sheet->querySubObject(EXCEL_CELL, row, col);
            QVariant value = cell->property(EXCEL_VALUE);
            QStandardItem* item = new QStandardItem(value.toString());
            model->setItem(row - EXCEL_STATROWBEGIN, col - EXCEL_SETSTATCOLBEGIN, item);
        }
    }
    excelFile->dynamicCall(EXCEL_CLOSE);
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
