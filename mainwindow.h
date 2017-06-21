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
#include "experiment.h"

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
    void on_action_fullScreen_maximize_triggered(bool checked);
    void on_menu_other_app_advanced_button_clicked();
    void on_menu_other_app_reference_button_clicked();
    void on_menu_other_data_picture_button_clicked();
    void on_menu_other_mathcad_open_button_clicked();
    void on_menu_other_data_table_button_clicked();
    void on_menu_other_app_fullScreen_button_clicked(bool checked);
    void on_menu_other_mathcad_check_clicked();

    void on_menu_device_port_com_combo_currentIndexChanged(const QString &arg1);
    void on_menu_device_port_search_button_clicked();

    void on_menu_file_restart_button_clicked();

    void on_menu_experiment_gridU_spin_valueChanged(double arg1);
    void on_menu_experiment_gridU_slider_sliderMoved(int position);
    void on_menu_experiment_grid_checkbox_toggled(bool checked);
    void on_menu_experiment_minMax_checkbox_toggled(bool checked);
    void on_menu_experiment_gridT_slider_sliderMoved(int position);
    void on_menu_experiment_gridT_spin_valueChanged(int arg1);
    void on_menu_experiment_curveDT_slider_sliderMoved(int position);
    void on_menu_experiment_curveDT_spin_valueChanged(int arg1);
    void on_menu_experiment_limits_checkBox_toggled(bool checked);
    void on_menu_experiment_limitsNmax_radio_toggled(bool checked);
    void on_menu_experiment_limitsTinterval_radio_toggled(bool checked);

    void on_experiment_tabs_tabBarDoubleClicked(int index);


    void on_menu_device_WinManager_button_clicked();

    void on_menu_device_set_box_clicked(bool checked);

    void on_start_button_clicked(bool checked);

private:
    //Окна и гуишные украшательства
    Ui::MainWindow *ui;
    AdvancedWindow advanced;
    PictureWindow picture;
    QSystemTrayIcon *trayIcon;

    //Функциональные модули
    JsonDataManager jsonManager;
    USBProcessor *usbprocessor;
    ApplicationManager *apps;
    Experiment *experiment = new Experiment();
    QTimer *timer;

    //Надписи в статусбаре
    QLabel* portStatus;
    QLabel* connectionStatus;

    //Инициализация гуя
    void setUIlogic();
    void setTablesUI();
    void setButtonsMenu();
    void setStatusBarWidgets();
    void loadComPortsInfo();
    void setUpGraphic();

    //Вспомогательные функции гуя
    bool eventFilter(QObject *watched, QEvent *event);
    void checkMathCad();
    void pushDownLoadMessage(QString name, QString link, bool status);

private slots:
    void paintPoint();
    void on_stop_button_clicked(bool checked);
};

#endif // MAINWINDOW_H
