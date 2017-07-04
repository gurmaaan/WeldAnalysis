#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDir>
#include <QString>
#include <QLabel>
#include <QSystemTrayIcon>
#include <QMouseEvent>
#include "advancedwindow.h"
#include "picturewindow.h"
#include "jsondatamanager.h"
#include "usbprocessor.h"
#include "applicationmanager.h"
#include "experiment.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QString DATA_PATH;
    AppDir apdr;

private slots:
//###########################################################################_____File__________//
    void on_menu_file_new_button_clicked();
    void on_menu_file_open_button_clicked();
    void on_action_open_excel_triggered();
    void on_action_open_txt_triggered();
    void on_menu_file_close_button_clicked();
    void on_menu_file_save_button_clicked(bool checked);
    void on_action_saveas_excel_triggered();
    void on_action_saveas_txt_triggered();
    void on_menu_file_restart_button_clicked();

//###########################################################################_____Device________//
    void on_menu_device_port_search_button_clicked();
    void on_menu_device_port_com_combo_currentIndexChanged(const QString &arg1);
    void on_menu_device_port_all_button_clicked();
    void on_menu_device_set_box_clicked(bool checked);
    void on_menu_device_set_baud_combo_currentIndexChanged(const QString &arg1);
    void on_menu_device_set_parity_combo_currentIndexChanged(const QString &arg1);
    void on_menu_device_set_byte_combo_currentIndexChanged(const QString &arg1);
    void on_menu_device_set_xonxoff_combo_currentIndexChanged(const QString &arg1);
    void on_menu_device_test_button_clicked();
    void on_menu_device_WinManager_button_clicked();

//###########################################################################_____Experiment____//
    void on_menu_experiment_channel_combo_currentIndexChanged(int index);
    void on_menu_experiment_grid_box_clicked(bool checked);
    void on_menu_experiment_grid_U_slider_sliderMoved(int position);
    void on_menu_experiment_grid_U_spin_valueChanged(double arg1);
    void on_menu_experiment_grid_T_slider_sliderMoved(int position);
    void on_menu_experiment_grid_T_spin_valueChanged(int arg1);
    void on_menu_experiment_minMax_box_clicked(bool checked);
    void on_menu_experiment_minMax_Umin_spin_valueChanged(double arg1);
    void on_menu_experiment_minMax_Umax_spin_valueChanged(double arg1);
    void on_menu_experiment_minMax_Tmin_spin_valueChanged(int arg1);
    void on_menu_experiment_minMax_Tmax_spin_valueChanged(int arg1);
    void on_menu_experiment_curveLine_combo_currentIndexChanged(const QString &arg1);
    void on_menu_experiment_curveDT_slider_sliderMoved(int position);
    void on_menu_experiment_curveDT_spin_valueChanged(int arg1);
    void on_menu_experiment_limits_box_clicked(bool checked);
    void on_menu_experiment_limits_N_radio_clicked(bool checked);
    void on_menu_experiment_limits_N_spin_valueChanged(int arg1);
    void on_menu_experiment_limits_T_radio_clicked(bool checked);
    void on_menu_experiment_limits_T1_spin_valueChanged(int arg1);
    void on_menu_experiment_limits_T2_spin_valueChanged(int arg1);
    void on_menu_experiment_reset_button_clicked();

//###########################################################################_____Other_________//
    void on_menu_other_data_picture_button_clicked();
    void on_menu_other_data_table_button_clicked();
    void on_action_table_internal_triggered();
    void on_action_table_excel_triggered();
    void on_action_table_notepad_triggered();
    void on_menu_other_mathcad_check_button_clicked();
    void on_menu_other_mathcad_open_button_clicked();
    void on_menu_other_app_prntscrn_button_clicked();
    void on_menu_other_app_reference_button_clicked();
    void on_menu_other_app_screen_button_clicked(bool checked);
    void on_action_screen_maximize_triggered(bool checked);
    void on_menu_other_app_advanced_button_clicked();

//###########################################################################_____Internal______//
    void on_experiment_tabs_tabBarDoubleClicked(int index);
    void on_start_button_clicked(bool checked);
    void on_stop_button_clicked(bool checked);
    void paintPoint();

public slots:
    void pushStatusBarMessage(QString message);
    void pushInformationNotification(QString message);
    void showSavedFile(QString path);
    void guiEnablier(bool status);

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
    Experiment *experiment;
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

    void enAll(bool st);
    void enFileTab(bool st);
    void enDeviceTab(bool st);
    void enExperimentTab(bool st);
    void enOtherTab(bool st);



};

#endif // MAINWINDOW_H
