#-------------------------------------------------
#
# Project created by QtCreator 2020-11-09T22:37:26
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = 5-1
TEMPLATE = app
RC_ICONS = favicon.ico

SOURCES += main.cpp\
        mainwindow.cpp \
    bmp2ac.cpp

HEADERS  += mainwindow.h \
    bmp2ac.h

FORMS    += mainwindow.ui

RESOURCES += \
    myimages.qrc

TRANSLATIONS += guojihua3_zh_CN.ts\
                guojihua3_zh_EN.ts
