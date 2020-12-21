#include "mainwindow.h"
#include <QApplication>
#include <QSplashScreen>
#include <QElapsedTimer>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    
    //设置启动画面
    QSplashScreen *splash = new QSplashScreen;
    splash->setPixmap(QPixmap("E:/QTProject/lab8/wxh/image/logo.png"));
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

    
    w.show();
    splash->finish(&w);
    delete splash;
    w.setWindowTitle("王星慧189051002");
    return a.exec();
}
