#include "jsondatamanager.h"
#include <QDebug>
#include <QAbstractItemModel>

JsonDataManager::JsonDataManager()
{

}

QJsonArray JsonDataManager::getArrayFromFile(QFile *file, QString rootItem)
{
    QJsonDocument doc = QJsonDocument().fromJson(file->readAll());
    QJsonObject obj = doc.object();
    QJsonArray arr = obj[rootItem].toArray();
    file->flush();
    file->close();
    return arr;
}

QStandardItemModel *JsonDataManager::getModel(QJsonArray array, QString key, QString val)
{
    QStandardItemModel *model = new QStandardItemModel();
    int row = 0;

    foreach (const QJsonValue &value, array) {
        QJsonObject itemObj = value.toObject();
        QStandardItem *itemName = new QStandardItem(itemObj.value(key).toString());
        model->setItem(row, 0, itemName);
        QStandardItem *itemPath = new QStandardItem(itemObj.value(val).toString());
        model->setItem(row, 1, itemPath);
        row++;
    }

    return model;
}

bool JsonDataManager::saveJsonFile(QAbstractItemModel *model)
{
    QFile saveFile("%HOMEPATH%/YandexDisk/_Application/WeldAnalysis/PathList.json");

    if (!saveFile.open(QIODevice::ReadWrite | QIODevice::Text)) {
        qWarning("Couldn't open save file.");
        return false;
    }
    else {
        QJsonObject json;
        QJsonArray items;

        int rowCount = model->rowCount();

        for (int row = 0; row < rowCount; row++) {
            QJsonObject rowItem;
            rowItem["Name"] = QJsonValue(model->index(row, 0).data().toString());
            rowItem["Path"] = QJsonValue(model->index(row, 1).data().toString());
            items.append(rowItem);
        }

        json["Items"] = items;

        QJsonDocument saveDoc(json);
        saveFile.write(saveDoc.toJson());
    }
    return true;
}
