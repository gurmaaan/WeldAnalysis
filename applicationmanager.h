#ifndef APPLICATIONMANAGER_H
#define APPLICATIONMANAGER_H
#include <QString>
#include <QStandardItemModel>

class Application
{
private:
    QString name;
    QString version;
    int headVersion;
public:
    Application(QString appName, QString appVer) {
        name = appName;
        version = appVer;
        headVersion = detectHeadVersion(appVer);
    }
    int detectHeadVersion(QString appVersion);
    QString getName();
    QString getVersion();
    int getHeadVersion();
};

class ApplicationManager
{
private:
    QList<Application> appList;
    bool MathCad_status = false;
    bool Version_status = false;
    int Version_head = 0;
    QString MathCad = "Null";
    QString Version = "Null";

public:
    ApplicationManager() {
        appList = getList();
        checkMathCad();

    }
    QList<Application> getList();
    void pushApp(QString name, QString vers);
    QStandardItemModel *getModel();
    bool checkMathCad();

    bool isMathCad();
    QString getMathCadName();
    QString getMathCadVersion();
    QString getMathCadHeadVersion();
    bool isVersion();
    void createList();
};

#endif // APPLICATIONMANAGER_H
