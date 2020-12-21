#-------------------------------------------------
#
# Project created by QtCreator 2020-10-13T10:24:57
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = wxh
TEMPLATE = app


SOURCES += main.cpp\
    MainWindow.cpp \
    LoginDialog.cpp \
    message.cpp

HEADERS  += \
    MainWindow.h \
    LoginDialog.h \
    message.h

FORMS    += \
    MainWindow.ui \
    LoginDialog.ui \
    message.ui

RESOURCES += \
    myresource.qrc
