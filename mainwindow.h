#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "advancedwindow.h"
#include "picturewindow.h"
#include "jsondatamanager.h"
#include "usbprocessor.h"
#include <QDir>
#include <QString>
#include <QLabel>
#include <QMouseEvent>
#include <QSystemTrayIcon>
#include "applicationmanager.h"

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
    void on_menu_experiment_gridU_spin_valueChanged(double arg1);
    void on_menu_experiment_gridU_slider_sliderMoved(int position);

    void on_menu_experiment_grid_checkbox_toggled(bool checked);

    void on_menu_experiment_minMax_checkbox_toggled(bool checked);

    void on_menu_experiment_gridT_slider_sliderMoved(int position);

    void on_menu_experiment_gridT_spin_valueChanged(int arg1);

    void on_menu_experiment_curveDT_slider_sliderMoved(int position);

    void on_menu_experiment_curveDT_spin_valueChanged(int arg1);

    void on_checkBox_toggled(bool checked);

    void on_action_driverl_ivi_triggered();
    
    void on_action_driver_agilent_triggered();
    
    void on_action_driver_ftdi_triggered();
    
    void on_menu_experiment_limitsNmax_radio_toggled(bool checked);

    void on_menu_experiment_limitsTinterval_radio_toggled(bool checked);

    void on_action_downloadl_ivi_triggered();

    void on_action_download_agilent_triggered();

    void on_action_downloadr_ftdi_triggered();

    void on_menu_device_driverManual_button_clicked();

    void on_menu_device_autoSearch_button_clicked();

    void on_start_button_clicked();

    void on_experiment_tabs_tabBarDoubleClicked(int index);

private:
    Ui::MainWindow *ui;
    AdvancedWindow advanced;
    PictureWindow picture;
    JsonDataManager jsonManager;
    ApplicationManager *apps;
    QLabel* portStatus;
    QLabel* connectionStatus;
    void setUIlogic();
    void setTablesUI();
    void setButtonsMenu();
    void setStatusBarWidgets();
    bool eventFilter(QObject *watched, QEvent *event);
    QSystemTrayIcon *trayIcon;
    QMenu *trayIconMenu;
    USBProcessor usbprocessor;
    void checkMathCad();
    void pushDownLoadMessage(QString name, QString link, bool status);
};

#endif // MAINWINDOW_H
