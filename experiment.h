#ifndef EXPERIMENT_H
#define EXPERIMENT_H

#include <QString>
#include <QVariant>
#include <QStandardItemModel>
#include <QStandardItem>

class SettingItem
{
public:
    SettingItem(int key, QVariant data, QString dataString) {
        itemSetKey = key;
        itemSetHeader = getSetItemHeaderByKey(key);
        itemSetData = data;
        itemSetString = dataString;
    }

    int getItemKey() const;
    void setItemKey(int value);

    void setItemHeader(const QString &value);

    QVariant getItemData() const;
    void setItemData(const QVariant &value);

    QString getItemString() const;
    void setItemString(const QString &value);
    QString getHeader() const;

private:
    int itemSetKey;
    QString itemSetHeader;
    QVariant itemSetData;
    QString itemSetString;

    QString getSetItemHeaderByKey(int key) const;
};

class Settings
{
public:
    Settings() {}
    QList<SettingItem> settings;
    QStandardItemModel *settingsModel;

    enum SettingCode {
        Name            = 0, //Название эксперимента
        Date            = 1,
        TimeStart       = 2,
        TimeEnd         = 3,
        Duration        = 4,
        Chanel          = 5,
        Curve           = 6,
        Sampling        = 7,
        GridTrue        = 8,
        HorizontalStap  = 9,
        VerticalStep    = 10,
        MinMax          = 11,
        Umax            = 12,
        Umin            = 13,
        Tmax            = 14,
        Tmin            = 15,
        LimitsTrue      = 16,
        AmountLimitTrue = 17,
        AmountLimit     = 18,
        TimeLimitsTrue  = 19,
        TimeLimitStart  = 20,
        TimeLimitEnd     = 21
    };

    QStandardItemModel *getSetModel();
    void loadEmpty();
    void changeByKey(SettingCode key);
};

class StatisticItem
{
public:
    StatisticItem(int key, QVariant data, QString dataString)
    {
        itemStatKey = key;
        itemStatHeader = getStatItemHeaderByKey(key);
        itemStatData = data;
        itemStatString = dataString;
    }
    QString getItemStatHeader() const;
    void setItemStatHeader(const QString &value);

    QString getItemStatString() const;
    void setItemStatString(const QString &value);

private:
    int itemStatKey;
    QString itemStatHeader;
    QVariant itemStatData;
    QString itemStatString;

    QString getStatItemHeaderByKey(int key) const;
};

class Statistics
{
public:
    Statistics() {}
    QList<StatisticItem> statistics;
    QStandardItemModel *statisticsModel;
    void loadEmpty();
    enum StatisticCode {
        Amount   = 0,
        MaxValue = 1,
        MinValue = 2,
        Avaradge = 3
    };
    QStandardItemModel *getStatModel();
};

class Data
{
public:
    Data() {}
    QVector<double> n, t, u;
};

class Experiment : public QObject
{
    Q_OBJECT //NOTE Без этого макроса не работает сигнало-слотовой механизм
    bool ex_exist;

public:
    Experiment()
    {
        set = new Settings();
        stat = new Statistics();
        set->loadEmpty();
        stat->loadEmpty();
    }
    ~Experiment() {}

    void createNew(bool created);
    void openTxt(QString filepath, bool opened);
    void openExcel(QString filePath, bool opened);
    void saveExcel();
    void saveTxt();
    void startMeasurement();
    void pauseMeasureMent();
    void stopMeasurement();

    QStandardItemModel *updateSetModel();
    QStandardItemModel *updateStatModel();

    bool getOpenStatus() const;
    void setOpenStatus(bool value);
    QString getPath() const;
    void setPath(const QString &value);

signals: 
    void enableGUI(bool status);

private:
    Settings *set;
    Statistics *stat;
    Data *dataArray;
    QString path;
    bool openStatus = false;

};

#endif // EXPERIMENT_H
