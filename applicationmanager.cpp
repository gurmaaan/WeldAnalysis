#include "applicationmanager.h"
#include "constants.h"

#include <QStringList>
#include <QStandardItemModel>
#include <QSettings>
#include <QStandardItemModel>
#include <QMessageBox>
#include <QStandardPaths>
#include <QDesktopServices>
#include <QProcess>
#include <QDebug>
#include <QFileDialog>
#include <QUrl>

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

//Возвращает путь к папке с данными
QString AppDir::dataDirPath()
{
    return QStandardPaths::writableLocation(QStandardPaths::DataLocation);
}

//Возвращает путь к програм файлс исходя из значения системной переменной.
QString AppDir::programmFilesPath()
{
    QStringList varibleList =(QProcess::systemEnvironment());
    foreach (QString varible, varibleList) {
        if (varible.contains(PROGRAMFILES, Qt::CaseInsensitive) && (varible.indexOf(PROGRAMFILES) == 0)) {
            QStringList varList = varible.split("=");
            return varList.at(1);
            break;
        }
    }
    return " ";
}

//Копирование программных файлов в системную папку приложения
void AppDir::copyFilesToAppData()
{
    QString appPath = QStandardPaths::writableLocation(QStandardPaths::DataLocation);\
    //Проверка пути на валидность создание при отсутствии
    QDir dir(appPath);
    if ( !dir.exists() )
    {
        if ( dir.mkpath(appPath) )
            qDebug() << MES_PATH << APP_NAME << MES_CREATEDF;
        else
            showCreateMessageBox(APP_NAME);
    }

//Копирование из ресурсов в корень директории
    //Руководство пользователя
    copyFile(&dir, NAM_MANUAL);

    //Создание папок и проверка отсутствия
    createDirectory(&dir, DIR_DEFAULTS);
    createDirectory(&dir, DIR_BAT);
    createDirectory(&dir, DIR_DRIVERS);

//Переход в директорию батников
    dir.cd(DIR_BAT);
    //Батник запуска девайс менеджера
    copyFile(&dir, NAM_DEVMAN);

}

//WARNING при первом разе копируется битый битник
//Функция копирования файла
void AppDir::copyFile(QDir *dir, QString name)
{
    QString abs = dir->path() + "/" + name;
    bool copied = false;
    if(QFile::copy(RES_MANUAL, abs))
    {
        qDebug() << MES_FILE << name << MES_COPIEDF;
        copied = true;
    }
    else if (copied)
        showCopyMessageBox(NAM_MANUAL, &abs);
}

//Функция создания папки приложения
void AppDir::createDirectory(QDir *dir, QString name)
{
    if (!dir->exists(name))
    {
        if(dir->mkdir(name))
            qDebug() << MES_DIRECTORY << name << MES_CREATEDD;
        else
            showCreateMessageBox(name);
    }
}

//Отображение окна ошибки при копировании файла
void AppDir::showCopyMessageBox(QString fileName, QString *filePath)
{
    QMessageBox mesBox;
    mesBox.setText(TIT_ERCOP);
    QString message = MES_FILE + fileName + MES_NOTCOPIEDF + MES_SELFBROWSE;
    mesBox.setInformativeText(message);

    mesBox.setStandardButtons(QMessageBox::Yes | QMessageBox::Ignore);
    mesBox.setIcon(QMessageBox::Warning);
    mesBox.setDefaultButton(QMessageBox::Yes);

    int answer = mesBox.exec();
    switch (answer)
    {
        case QMessageBox::Yes:
        {
            QFileInfo file = QFileDialog::getOpenFileName(0, TIT_BROWSE, QDir::homePath());
            *filePath = file.absoluteFilePath();
            break;
        }
        case QMessageBox::Ignore:
        {
            mesBox.close();
            break;
        }
        default:
            break;
    }
}

//Отображение окошка ошибки при создании папки
void AppDir::showCreateMessageBox(QString dirName)
{
    QMessageBox mesBox;
    mesBox.setText(TIT_ERCREATE);
    QString message = MES_DIRECTORY + dirName + MES_NOTCREATEDD + MES_SELFCREATE;
    mesBox.setInformativeText(message);

    mesBox.setStandardButtons(QMessageBox::Yes | QMessageBox::Ignore);
    mesBox.setIcon(QMessageBox::Warning);
    mesBox.setDefaultButton(QMessageBox::Yes);

    int answer = mesBox.exec();
    switch (answer) {
    case QMessageBox::Yes:
        QDesktopServices::openUrl(QUrl::fromLocalFile(QStandardPaths::writableLocation(QStandardPaths::DataLocation)));
        break;
    case QMessageBox::Ignore:
        mesBox.reject();
        break;
    default:
        break;
    }
}
