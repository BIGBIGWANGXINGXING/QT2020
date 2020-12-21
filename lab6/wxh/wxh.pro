#-------------------------------------------------
#
# Project created by QtCreator 2020-10-27T08:40:37
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = wxh
TEMPLATE = app


SOURCES += main.cpp\
        dialog.cpp

HEADERS  += dialog.h

FORMS    += dialog.ui

RC_ICONS = hello.ico

RESOURCES += \
    resource.qrc
