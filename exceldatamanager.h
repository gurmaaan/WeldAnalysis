#ifndef FILEMANAGER_H
#define FILEMANAGER_H
#include <QAxObject>
#include <QStandardItem>
#include <QStandardItemModel>

class ExcelDataManager
{
private:
    bool isInstalled();
public:
    ExcelDataManager();
    QAxObject *openExcelFile(QString filePath);
    QAxObject *getDocumentSheet(QAxObject* excelFile, int sheetNumber);
    int getSheetRowsCount(QAxObject* excelSheet);
    int getSheetColumnsCount(QAxObject* excelSheet);

    QStandardItemModel *getRealTimeModel(QAxObject* excelFile);
    QStandardItemModel *getSettingsModel(QAxObject* excelFile);
    QStandardItemModel *setModelHeaders(QAxObject* excelSheet, QStandardItemModel* model);
};

#endif // FILEMANAGER_H
