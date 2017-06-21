#include "experiment.h"

Experiment::Experiment()
{

}

QString Experiment::getPath() const
{
    return path;
}

void Experiment::setPath(const QString &value)
{
    path = value;
}

bool Experiment::getOpenStatus() const
{
    return openStatus;
}

void Experiment::setOpenStatus(bool value)
{
    openStatus = value;
}

//########### SettingItem ###########//

int SettingItem::getItemKey() const
{
    return itemSetKey;
}

void SettingItem::setItemKey(int value)
{
    itemSetKey = value;
}

QVariant SettingItem::getItemData() const
{
    return itemSetData;
}

void SettingItem::setItemData(const QVariant &value)
{
    itemSetData = value;
}

QString SettingItem::getItemString() const
{
    return itemSetString;
}

void SettingItem::setItemString(const QString &value)
{
    itemSetString = value;
}

QString SettingItem::getHeader() const
{
    return itemSetHeader;
}

QString SettingItem::getSetItemHeaderByKey(int key) const
{
    QString header;

    switch (key)
    {
        case 0:  header ="Название эксперимента";  break;
        case 1:  header ="Дата проведения";  break;
        case 2:  header ="Время начала";  break;
        case 3:  header ="Время конца";  break;
        case 4:  header ="Продолжительность (s)";  break;
        case 5:  header ="Номер канала";  break;
        case 6:  header ="Настройка сглаживания ";  break;
        case 7:  header ="Шаг дискретизации  Δt (ms)";  break;
        case 8:  header ="Наличие сетки";  break;
        case 9:  header ="Горизонтальный шаг сетки Δu (mV)";  break;
        case 10: header ="Вертикальный шаг сетки Δτ (ms)";  break;
        case 11: header ="Автоматические пределы осей";  break;
        case 12: header ="Минимум оси напряжения umax  (mV)";  break;
        case 13: header ="Максимум оси напряжения umin (mV)";  break;
        case 14: header ="Минимум оси времени τmax (ms)";  break;
        case 15: header ="Максимум оси времени τmin (ms)";  break;
        case 16: header ="Пределы заданы";  break;
        case 17: header ="Количество ограничено";  break;
        case 18: header ="Ограничение количества значений Nmax(шт)";  break;
        case 19: header ="Начальный и конечный моменты заданы";  break;
        case 20: header ="Начальный момент времени t1 (ms)";  break;
        case 21: header ="Конечный момент времени t2 (ms)";  break;

        default: header = ""; break;
    }

    return header;
}

//########### Settings ###########//

Settings::SettingCode operator++(Settings::SettingCode &code, int) {
    Settings::SettingCode old = code;
    code = static_cast<Settings::SettingCode>(static_cast<int>(code) + 1);
    return old;
}

void Settings::loadEmpty()
{
    for (SettingCode i = Name; i <= TimeLimitEnd ; i++)
    {
        SettingItem *item = new SettingItem(i, NULL, "");
        settings.append(*item);
    }
}

QStandardItemModel *Settings::getSetModel()
{
    QStandardItemModel *setModel = new QStandardItemModel();
    for (SettingCode i = Name; i <= TimeLimitEnd; i++)
    {
        QStandardItem *itemSetHeader = new QStandardItem(settings.at(i).getHeader());
        QStandardItem *itemSetData = new QStandardItem(settings.at(i).getItemString());
        setModel->setItem(i,0,itemSetHeader);
        setModel->setItem(i,1,itemSetData);
    }
    settingsModel = setModel;
    return settingsModel;
}

//########### StatisticItem ###########//

QString StatisticItem::getItemStatHeader() const
{
    return itemStatHeader;
}

void StatisticItem::setItemStatHeader(const QString &value)
{
    itemStatHeader = value;
}

QString StatisticItem::getItemStatString() const
{
    return itemStatString;
}

void StatisticItem::setItemStatString(const QString &value)
{
    itemStatString = value;
}

QString StatisticItem::getStatItemHeaderByKey(int key) const
{
    QString header;

    switch (key)
    {
    case 0:  header ="Количество точек";  break;
    case 1:  header ="Максимальное значение";  break;
        case 2:  header ="Минимальное значение";  break;
        case 3:  header ="Среднее";  break;

        default: header = ""; break;
}

    return header;
}

//########### Statistic ###########//

Statistics::StatisticCode operator++(Statistics::StatisticCode &code, int) {
    Statistics::StatisticCode old = code;
    code = static_cast<Statistics::StatisticCode>(static_cast<int>(code) + 1);
    return old;
}

void Statistics::loadEmpty()
{
    for (StatisticCode i = Amount; i <= Avaradge ; i++)
    {
        StatisticItem *item = new StatisticItem(i, NULL, "");
        statistics.append(*item);
    }
}

QStandardItemModel *Statistics::getStatModel()
{
    QStandardItemModel *statModel = new QStandardItemModel();
    for (StatisticCode i = Amount; i <= Avaradge; i++)
    {
        QStandardItem *itemStatHeader = new QStandardItem(statistics.at(i).getItemStatHeader());
        QStandardItem *itemStatData = new QStandardItem(statistics.at(i).getItemStatString());
        statModel->setItem(i,0,itemStatHeader);
        statModel->setItem(i,1,itemStatData);
    }
    statisticsModel = statModel;
    return statisticsModel;
}
