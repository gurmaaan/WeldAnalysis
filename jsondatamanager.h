#ifndef JSONDATAMANAGER_H
#define JSONDATAMANAGER_H
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QFile>
#include <QStandardItem>
#include <QStandardItemModel>

class JsonDataManager
{
public:
    JsonDataManager();
    QJsonArray getArrayFromFile(QFile *file, QString rootItem);
    QStandardItemModel *getModel(QJsonArray array, QString key, QString val);
    bool saveJsonFile(QAbstractItemModel *model);
};

#endif // JSONDATAMANAGER_H
