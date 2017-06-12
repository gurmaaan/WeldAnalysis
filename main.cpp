#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setApplicationName("WeldAnalysis"); //Имя папка в AppData
    MainWindow w;
    w.show();

    return a.exec();
}
