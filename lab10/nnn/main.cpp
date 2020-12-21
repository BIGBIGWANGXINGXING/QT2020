#include "mainwindow.h"
#include <iostream>
#include <QApplication>
#include <QDebug>
#include <QCoreApplication>
#include <Python.h>

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
//    w.setWindowTitle(tr("王星慧189051002"));

    w.show();
    return a.exec();
}
