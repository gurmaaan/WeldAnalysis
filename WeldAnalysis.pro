#-------------------------------------------------
#
# Project created by QtCreator 2017-05-08T15:05:06
#
#-------------------------------------------------

QT       += core gui printsupport axcontainer serialport
CONFIG += c++11
QMAKE_CXXFLAGS += -std=c++11
#QT += axcontainer - needed for Excel document Read/Write
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

#LIBS += C:/libusb/lib/gcc/libusb.a
#INCLUDEPATH +=  C:/libusb/include/
#DEPENDPATH += C:/libusb/include/
#PRE_TARGETDEPS += C:/libusb/lib/gcc/libusb.a

LIBS += -lusb-1.0

SOURCES += main.cpp\
        mainwindow.cpp \
    exceldatamanager.cpp \
    jsondatamanager.cpp \
    picturewindow.cpp \
    advancedwindow.cpp \
    ExternalLibs/QCustomPlot/qcustomplot.cpp

HEADERS  += mainwindow.h \
    exceldatamanager.h \
    jsondatamanager.h \
    usbhidmanager.hpp \
    constants.h \
    picturewindow.h \
    advancedwindow.h \
    ExternalLibs/QCustomPlot/qcustomplot.h \
    ExternalLibs/LibUSB/libusb.h

FORMS    += mainwindow.ui \
    picturewindow.ui \
    advancedwindow.ui

RESOURCES += \
    sources.qrc
#RC_FILE - needed for Application .exe icon
win32:RC_FILE = iconsource.rc

TRANSLATIONS +=ru.ts

STATECHARTS +=
