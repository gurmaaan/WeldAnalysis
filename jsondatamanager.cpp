#include "jsondatamanager.h"
#include <QDebug>
#include <QAbstractItemModel>

JsonDataManager::JsonDataManager()
{

}

QJsonArray JsonDataManager::getArrayFromFile(QFile *file)
{
    QJsonDocument doc = QJsonDocument().fromJson(file->readAll());
    QJsonObject obj = doc.object();
    QJsonArray arr = obj["Items"].toArray();
    file->flush();
    file->close();
    return arr;
}

QStandardItemModel *JsonDataManager::getListModel(QJsonArray array)
{
    QStandardItemModel *model = new QStandardItemModel();
    int row = 0;

    foreach (const QJsonValue &value, array) {
        QJsonObject itemObj = value.toObject();
        QStandardItem *itemName = new QStandardItem(itemObj["Name"].toString());
        model->setItem(row, 0, itemName);
        QStandardItem *itemPath = new QStandardItem(itemObj["Path"].toString());
        model->setItem(row, 1, itemPath);
        row++;
    }

    return model;
}

bool JsonDataManager::saveJsonFile(QAbstractItemModel *model)
{
    QFile saveFile("C:/Users/Dima/YandexDisk/_Application/WeldAnalysis/PathList.json");

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
