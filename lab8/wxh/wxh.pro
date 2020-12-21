#-------------------------------------------------
#
# Project created by QtCreator 2020-11-10T10:18:28
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = wxh
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    cwxh.cpp

HEADERS  += mainwindow.h \
    cwxh.h

FORMS    += mainwindow.ui

RC_ICONS = hello.ico


#INCLUDEPATH += -I D:\python\include
#LIBS += -L D:\python\libs -lpython27


INCLUDEPATH += -I E:\openCV\opencv\install\include

LIBS += -LE:\openCV\opencv\lib\libopencv_*.a




