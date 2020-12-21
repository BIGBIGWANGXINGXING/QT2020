#include "mainwindow.h"

#include <QApplication>
#include <QTranslator>
#include <QDebug>
#include <QSplashScreen>
#include <QElapsedTimer>
#include <QTextCodec>
#include <Python.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    QTextCodec *codec = QTextCodec::codecForName("GBK");
    Py_Initialize();


    /* 设置启动画面 */
    //设置启动画面
    QSplashScreen *splash = new QSplashScreen;
    splash->setPixmap(QPixmap("../wxhlab/image/index.png"));
    splash->show();
    //给启动画面添加延时
    int delayTime = 3;
    QElapsedTimer timer;
    timer.start();
    while(timer.elapsed()<(delayTime*1000))
    {
        a.processEvents();
    }

    Qt::Alignment topRight = Qt::AlignRight | Qt::AlignTop;
    splash->showMessage(QObject::tr("Setting up the main window..."),
                        topRight, Qt::white);

    splash->showMessage(QObject::tr("Loading modules..."),
                        topRight, Qt::white);

    splash->showMessage(QObject::tr("Establishing connections..."),
                        topRight, Qt::white);



    splash->finish(&w);
    delete splash;
    w.setWindowTitle(codec->toUnicode("王星慧189051002"));
    w.showMaximized();

    return a.exec();
}
