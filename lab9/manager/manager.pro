#-------------------------------------------------
#
# Project created by QtCreator 2020-11-24T11:22:44
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = manager
TEMPLATE = app


SOURCES +=\
        widget.cpp \
    logindialog.cpp \
    main.cpp

HEADERS  += widget.h \
    connection.h \
    logindialog.h

FORMS    += widget.ui \
    logindialog.ui
QT += sql
