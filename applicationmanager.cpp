#include "applicationmanager.h"
#include <QStringList>
#include <QStandardItemModel>
#include <QSettings>
#include "constants.h"
#include <QStandardItemModel>

int Application::detectHeadVersion(QString appVersion)
{
    QStringList versionParts = appVersion.split(".");
    bool convertationStatus = false;
    int verNum = versionParts.at(0).toInt(&convertationStatus, 10);
    if (convertationStatus)
        return verNum;
     else
         return 0;
}

QString Application::getName()
{
    return name;
}

QString Application::getVersion()
{
    return version;
}

int Application::getHeadVersion()
{
    return headVersion;
}

ApplicationManager::ApplicationManager() {
//TODO Избавление от констант
//    MCMAP.insert(MCKEYS::REG_PathToApps, "HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Uninstall");
//    MCMAP.insert(MCKEYS::REG_DisplayName, "DisplayName");
//    MCMAP.insert(MCKEYS::REG_DisplayVersion, "DisplayVersion");
//    MCMAP.insert(MCKEYS::ProgramFilesPath, "\\Mathcad\\Mathcad ");
//    MCMAP.insert(MCKEYS::NAME_14, "Mathcad 14");
//    MCMAP.insert(MCKEYS::NAME_15, "Mathcad 15");
//    MCMAP.insert(MCKEYS::NAME_EXE, "mathcad.exe");
//    MCMAP::insert()
}

QList<Application> ApplicationManager::getList()
{
    return appList;
}

void ApplicationManager::pushApp(QString name, QString vers)
{
    Application *newApp = new Application(name, vers);
    appList.append( *newApp);
}
QStandardItemModel *ApplicationManager::getModel()
{
    QStandardItemModel *model = new QStandardItemModel();
    QStringList headers;
    headers.append("Приложение");
    headers.append("Версия");
    model->setHorizontalHeaderLabels(headers);

    for (int row = 0; row < appList.length(); row++) {
        Application curAp = appList.at(row);
        QStandardItem *itemName = new QStandardItem(curAp.getName());
        QStandardItem *itemVer = new QStandardItem(curAp.getVersion());
        model->setItem(row, 0, itemName);
        model->setItem(row, 1, itemVer);
    }

    return model;
}

bool ApplicationManager::checkMathCad()
{
    foreach (auto app, appList) {
        if ( (app.getName() == MAT_NAME14) || (app.getName().contains(QString(MAT_NAME15))) ) {
           MathCad_status = true;
           MathCad = app.getName();
           Version = app.getVersion();

           if (app.getHeadVersion() >= 14 ) {
               Version_head = app.getHeadVersion();
               Version_status = true;
           }
           else
               Version_status = false;
           break;
        } else {
           MathCad_status = false;
           MathCad = "Null";
           Version = "Null";
           Version_status = false;
        }
    }
    return MathCad_status;
}

bool ApplicationManager::isMathCad()
{
    createList();
    checkMathCad();
    return MathCad_status;
}

QString ApplicationManager::getMathCadName()
{
    return MathCad;
}

QString ApplicationManager::getMathCadVersion()
{
    return Version;
}

QString ApplicationManager::getMathCadHeadVersion(QString ver)
{
    QStringList versionParts = ver.split(".");
    return versionParts.at(0);
}

bool ApplicationManager::isVersion()
{
    return Version_status;
}

void ApplicationManager::createList()
{
    QSettings settings(MAT_REGFOLDER, QSettings::NativeFormat);
    QStringList keyListDisplay = settings.allKeys().filter ( MAT_DISPLAYKEY );

    foreach ( QString key, keyListDisplay)
    {
        const QString currentName = settings.value(key).toString();

        QStringList keyAndFilter = key.split("/");
        QString vKey = keyAndFilter.at(0) + "/" + MAT_VERSIONKEY;
        const QString currentVersion = settings.value(vKey).toString();

        this->pushApp(currentName, currentVersion);
    }
}
