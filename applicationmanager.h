#ifndef APPLICATIONMANAGER_H
#define APPLICATIONMANAGER_H
#include <QString>
#include <QStandardItemModel>
#include <QMap>

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
    ApplicationManager();
    QList<Application> getList();
    void pushApp(QString name, QString vers);
    QStandardItemModel *getModel();
    bool checkMathCad();

    bool isMathCad();
    QString getMathCadName();
    QString getMathCadVersion();
    QString getMathCadHeadVersion(QString ver);
    bool isVersion();
    void createList();

//TODO Перегнать константы в это перечисление
//    enum MCKEYS{
//        REG_PathToApps,
//        REG_DisplayName,
//        REG_DisplayVersion,
//        ProgramFilesPath,
//        NAME_14,
//        NAME_15,
//        NAME_EXE,
//        TIT_ApplicationInList,
//        TIT_VersionInList,
//        TIT_Error,
//        TIT_Success,
//        INF_Success,
//    };

    //QMap<ApplicationManager::MCKEYS, QString> MCMAP;
};

#endif // APPLICATIONMANAGER_H
