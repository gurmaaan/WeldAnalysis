#ifndef FILEMANAGER_H
#define FILEMANAGER_H
#include <QAxObject>

class ExcelDataManager
{
public:
    ExcelDataManager();
    QAxObject *openExcelFile(QString filePath);
    QAxObject *getDocumentSheet(QAxObject* excelFile, int sheetNumber);
    int getSheetRowsCount(QAxObject* excelSheet);
    int getSheetColumnsCount(QAxObject* excelSheet);
};

#endif // FILEMANAGER_H
