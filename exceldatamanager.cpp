#include "exceldatamanager.h"
#include <QAxObject>
#include <QDebug>

ExcelDataManager::ExcelDataManager()
{

}

//Возвращает указатель Excel файл (Workbook) по абсолютного пути
QAxObject *ExcelDataManager::openExcelFile(QString filePath)
{
    QAxObject* excel = new QAxObject("Excel.Application", 0);
    QAxObject* workbooks = excel->querySubObject("Workbooks");
    QAxObject* curentFile = workbooks->querySubObject("Open(const QString&)", filePath);
    return curentFile;
}

//Возвращает указатель на лист (Sheet) в книге по указателю на книгу и номеру листа. Нумерация листов начинается с 1.
QAxObject *ExcelDataManager::getDocumentSheet(QAxObject* excelFile, int sheetNumber)
{
     QAxObject* sheets = excelFile->querySubObject("Worksheets");
     qDebug() << "Число листов в документе: " << sheets->property("Count").toInt();
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
