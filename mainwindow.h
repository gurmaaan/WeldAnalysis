#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "advancedwindow.h"
#include "picturewindow.h"
#include "jsondatamanager.h"
#include <QDir>
#include <QString>
#include <QLabel>
#include <QMouseEvent>
#include <QSystemTrayIcon>

namespace Ui {
class MainWindow;
}

class AppDir {
public:
    bool isFirstRun();
    QString dataDirPath();
    QString programmFilesPath();
    void copyFilesToAppData();
private:
    void copyFile (QDir *dir, QString name);
    void copyExeFile(QDir *dir, QString name);
    void createDirectory (QDir *dir, QString name);
    void showCopyMessageBox (QString fileName, QString *filePath);
    void showCreateMessageBox (QString dirName);
};

//class ExternalApp
//{
//public:
//    bool isInstalled()
//};

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QString DATA_PATH;
    AppDir apdr;

public slots:
    void pushStatusBarMessage(QString message);
    void pushInformationNotification(QString message);
    void showSavedFile(QString path);

private slots:
    void on_menu_other_app_advanced_button_clicked();
    void on_menu_device_manualSearch_button_clicked();
    void on_menu_other_app_reference_button_clicked();
    void on_menu_device_winManager_button_clicked();
    void on_menu_file_restart_button_clicked();
    void on_menu_other_data_picture_button_clicked();
    void on_menu_other_mathcad_open_button_clicked();
    void on_menu_device_driverInfo_button_clicked();
    void on_menu_device_driverSetUp_button_clicked();
    void on_menu_other_app_fullScreen_button_clicked(bool checked);
    void on_menu_other_mathcad_check_clicked();
    void on_action_fullScreen_maximize_triggered(bool checked);

private:
    Ui::MainWindow *ui;
    AdvancedWindow advanced;
    PictureWindow picture;
    JsonDataManager jsonManager;
    QLabel* portStatus;
    QLabel* connectionStatus;
    void setUIlogic();
    void setTablesUI();
    void setButtonsMenu();
    void setStatusBarWidgets();
    bool eventFilter(QObject *watched, QEvent *event);
    QSystemTrayIcon *trayIcon;
    QMenu *trayIconMenu;
    void checkMathCad();
};

#endif // MAINWINDOW_H
