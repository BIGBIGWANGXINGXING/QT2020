#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QFileDialog>
#include <QTextCodec>
#include <Python.h>
//#include <opencv2/core.hpp>
//#include <opencv2/highgui.hpp>
//#include <opencv2/imgproc.hpp>
#include <iostream>
using namespace std;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
      ui(new Ui::MainWindow)
{
    ui->setupUi(this);


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_trydemoBtn_clicked()
{
    //进行初始化

        Py_Initialize();



        //如果初始化失败，返回

        if(!Py_IsInitialized())

        {
            qDebug()<<"11111111111111111111";

            return;

    }



    //加载模块，模块名称为myModule，就是myModule.py文件

    PyObject *pModule = PyImport_ImportModule("wyh");



    //如果加载失败，则返回

        if(!pModule)

        {
            qDebug()<<"2222222222222222";

            return;

        }



       //加载函数greatFunc

        PyObject * pFuncHello = PyObject_GetAttrString(pModule, "greatFunc");



    //如果失败则返回

        if(!pFuncHello)

        {
            qDebug()<<"3333333333333333333333";

            return;

    }



    //调用函数

    PyObject_CallFunction(pFuncHello, NULL);



    //退出

        Py_Finalize();
}


