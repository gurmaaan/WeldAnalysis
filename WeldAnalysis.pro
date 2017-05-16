#-------------------------------------------------
#
# Project created by QtCreator 2017-05-08T15:05:06
#
#-------------------------------------------------

QT       += core gui printsupport

#QT += axcontainer - needed for Excel document Read/Write
QT += axcontainer
#QT+=printer support -needed for QCustomPlot library
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport

TARGET = WeldAnalysis
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += main.cpp\
        mainwindow.cpp \
    qcustomplot/qcustomplot.cpp \
    exceldatamanager.cpp \
    advancedmode.cpp \
    jsondatamanager.cpp \
    usbdeviceslistwindow.cpp \
    usbcommanager.cpp

HEADERS  += mainwindow.h \
    qcustomplot/qcustomplot.h \
    exceldatamanager.h \
    advancedmode.h \
    jsondatamanager.h \
    usbdeviceslistwindow.h \
    usbhidmanager.hpp \
    usbcommanager.h \
    constants.h

FORMS    += mainwindow.ui \
    advancedmode.ui \
    usbdeviceslistwindow.ui

RESOURCES += \
    sources.qrc

DISTFILES +=

#RC_FILE - needed for Application .exe icon
win32:RC_FILE = iconsource.rc
