#include "MainWindow.h"
#include "ui_MainWindow.h"
#include "message.h"
#include <iostream>
#include <sstream>
using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_2_clicked()
{
    this->x += 1;
    ostringstream s;
    s << this->x;
    cout <<s.str() << endl;
}

void MainWindow::on_pushButton_clicked()
{
    message *mes = new message();
    mes->setModal(true);
    mes->show();
}
