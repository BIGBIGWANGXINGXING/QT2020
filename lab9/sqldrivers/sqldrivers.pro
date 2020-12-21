QT += core
QT -= gui

CONFIG += c++11

TARGET = sqldrivers
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp
QT += sql
