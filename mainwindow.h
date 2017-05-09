#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    //TODO - исправить абсолютный путь на относительный, с относительным через файл ресурсов не работает
    QString defaultsSettingsFilePath = "C:/Users/Dima/YandexDisk/_Application/WeldAnalysis/ExperimentDefaults.xlsx";

private slots:
    void on_menu_other_app_advanced_button_clicked();

private:
    Ui::MainWindow *ui;
    void setUIlogic();
    void setTablesUI();
    void setTablesColumnWidth();
};

#endif // MAINWINDOW_H
