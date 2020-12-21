#-------------------------------------------------
#
# Project created by QtCreator 2020-10-20T08:41:23
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = wxh
TEMPLATE = app


SOURCES += main.cpp\
        standarddialog.cpp \
    geometry.cpp \
    mboxdialog.cpp \
    drawer.cpp

HEADERS  += standarddialog.h \
    geometry.h \
    mboxdialog.h \
    drawer.h

FORMS    += standarddialog.ui \
    geometry.ui \
    mboxdialog.ui \
    drawer.ui
