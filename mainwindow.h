#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "advancedmode.h"
#include "usbdeviceslistwindow.h"
#include <QDir>
#include <QString>

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

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    //TODO - исправить абсолютный путь на относительный, с относительным через файл ресурсов не работает
    QString defaultsSettingsFilePath = "C:/Users/Dima/YandexDisk/_Application/WeldAnalysis/Experiments/ExperimentDefaults.xlsx";
    QString DATA_PATH;

private slots:
    void on_menu_other_app_advanced_button_clicked();

    void on_menu_device_manualSearch_button_clicked();

    void on_menu_other_app_fullScreen_button_clicked();

    void on_menu_other_app_reference_button_clicked();

    void on_menu_device_winManager_button_clicked();

    void on_menu_file_restart_button_clicked();

private:
    Ui::MainWindow *ui;
    AdvancedMode advanced;
    UsbDevicesListWindow usbDeviceListWindow;

    void setUIlogic();
    void setTablesUI();
    void setTablesColumnWidth();

};

#endif // MAINWINDOW_H
