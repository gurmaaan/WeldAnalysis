#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "advancedwindow.h"
#include "picturewindow.h"
#include "jsondatamanager.h"
#include <QDir>
#include <QString>
#include <QMouseEvent>

namespace Ui {
class MainWindow;
}

class AppDir {
public:
    bool isFirstRun();
    QString dataDirPath();
    void copyFilesToAppData();
private:
    void copyFile (QDir *dir, QString name);
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

private slots:
    void on_menu_other_app_advanced_button_clicked();
    void on_menu_device_manualSearch_button_clicked();
    void on_menu_other_app_fullScreen_button_clicked();
    void on_menu_other_app_reference_button_clicked();
    void on_menu_device_winManager_button_clicked();
    void on_menu_file_restart_button_clicked();
    void maximizeButtonAction();
    void on_menu_other_data_picture_button_clicked();

private:
    Ui::MainWindow *ui;
    AdvancedWindow advanced;
    PictureWindow picture;
    JsonDataManager jsonManager;
    void setUIlogic();
    void setTablesUI();
    void setFullScreenButtonMenu();
    bool eventFilter(QObject *watched, QEvent *event);
    void resizeEvent(QResizeEvent *event);

};

#endif // MAINWINDOW_H
