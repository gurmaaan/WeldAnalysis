#-------------------------------------------------
#
# Project created by QtCreator 2017-05-08T15:05:06
#
#-------------------------------------------------

QT += core gui printsupport axcontainer serialport #printsupport - QCustomPlot, axcontainer - QAxObject, serialport - QSerialPort
CONFIG += c++11
QMAKE_CXXFLAGS += -std=c++11

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = WeldAnalysis
TEMPLATE = app

DEFINES += QT_DEPRECATED_WARNINGS

#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += main.cpp\
        mainwindow.cpp \
    exceldatamanager.cpp \
    jsondatamanager.cpp \
    picturewindow.cpp \
    advancedwindow.cpp \
    ExternalLibs/QCustomPlot/qcustomplot.cpp \
    usbprocessor.cpp \
    applicationmanager.cpp \
    libusbmodul.cpp \
    experiment.cpp

HEADERS  += mainwindow.h \
    exceldatamanager.h \
    jsondatamanager.h \
    usbhidmanager.hpp \
    constants.h \
    picturewindow.h \
    advancedwindow.h \
    ExternalLibs/QCustomPlot/qcustomplot.h \
    ExternalLibs/LibUSB/libusb.h \
    usbprocessor.h \
    applicationmanager.h \
    experiment.h

FORMS    += mainwindow.ui \
    picturewindow.ui \
    advancedwindow.ui

RESOURCES += \
    sources.qrc

#RC_FILE - needed for Application .exe icon
win32: RC_FILE = iconsource.rc

TRANSLATIONS +=ru.ts

#LibUSB
win32: LIBS += -L$$PWD/ExternalLibs/LibUSB/ -llibusb-1.0.dll
INCLUDEPATH += $$PWD/ExternalLibs/LibUSB
DEPENDPATH += $$PWD/ExternalLibs/LibUSB

#Agilent
win32: LIBS += -L$$PWD/'../../../../../Program Files (x86)/IVI Foundation/IVI/Lib/msc/' -lAg34401
INCLUDEPATH += $$PWD/'../../../../../Program Files (x86)/IVI Foundation/IVI/Include'
DEPENDPATH += $$PWD/'../../../../../Program Files (x86)/IVI Foundation/IVI/Include'

DISTFILES +=
