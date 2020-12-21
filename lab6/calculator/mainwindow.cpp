#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    //    QPushButton push;
    ui->setupUi(this);



    ui->textEdit->setText("<p style='height:30px;text-align: right;font-size: 50px;'>0</p>");


    //这是在Qt的资源下的文件,可以不用在资源下
    QFile file("E:/QTProject/lab6/calculator/pushButonStyle.qss");
    //只读方式打开文件
    file.open(QFile::ReadOnly);
    //读取文件的所有内容，并转换成QString类型
    QString styleSheet = tr(file.readAll());
    //设置样式表
    this->setStyleSheet(styleSheet);
    file.close();

    //初始化部分数值
    this->op[0] = 1;
    this->op[1] = 0;

}

MainWindow::~MainWindow()
{

    delete ui;
}
//视图更新
void MainWindow::upDateTextEdit()
{
//    QMessageBox::critical(NULL,  "调试小数点",  QString::number(this->m_str.indexOf(".")), QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);

    if(this->m_str.indexOf(".")!=-1){
        if(this->m_str.indexOf(".") == this->m_str.length()-1){
//            QMessageBox::critical(NULL,  "进来",  this->m_str, QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);

            int inum = this->m_str.left(this->m_str.length()-1).toInt();
            this->m_str = (QString::number(inum,10))+".";
//            QMessageBox::critical(NULL,  "出来", this->m_str, QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);

        }else{
            double inum = this->m_str.toDouble();
            this->m_str = QString::number(inum);
        }

    }else{
        double dnum = this->m_str.toDouble();
        this->m_str = QString::number(dnum);
    }
    ui->textEdit->setText("<p style='height:20px;text-align: right;font-size: 20px;'>"+this->data_line+"</p>"
                          "<p style='height:30px;text-align: right;font-size: 35px;'>"+this->m_str+"</p>");
//    QMessageBox::critical(NULL,  "出来", this->data_line, QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);

}
//计算函数+-*/对应1234
void MainWindow::calculate()
{
//                QMessageBox::critical(NULL,  "出来", this->data_line, QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);

    this->m_fNumber2 = this->m_str.toDouble();
    this->data_line += this->m_str;
    switch (this->m_iSign) {
    case 1:
        this->m_sum = this->m_fNumber1 + this->m_fNumber2;
        this->data_line += "+";
        //        QMessageBox::critical(NULL,  "调试加",  QString::number(this->m_sum)+","+QString::number(this->m_fNumber1)+","+QString::number(this->m_fNumber2), QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
        break;
    case 2:
        this->m_sum = this->m_fNumber1 - this->m_fNumber2;
        this->data_line += "-";
        //        QMessageBox::critical(NULL,  "调试减",  QString::number(this->m_sum)+","+QString::number(this->m_fNumber1)+","+QString::number(this->m_fNumber2), QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);

        break;
    case 3:
        this->m_sum = this->m_fNumber1 * this->m_fNumber2;
        this->data_line += "*";
        break;
    case 4:
        this->m_sum = this->m_fNumber1 / this->m_fNumber2;
        this->data_line += "/";
        break;
    default:
        break;
    }
    this->m_fNumber1 = this->m_sum;
    this->m_str = "";
    this->op[0] = this->op[1];
    //输出
    QString q_sum = QString::number(this->m_sum);
    ui->textEdit->setText("<p style='height:20px;text-align: right;font-size: 20px;'>"+this->data_line+"</p>"
                          "<p style='height:30px;text-align: right;font-size: 35px;'>"+q_sum+"</p>");

    //    QMessageBox::critical(NULL,  "调试总",  QString::number(this->m_sum)+","+QString::number(this->m_fNumber1)+","+QString::number(this->m_fNumber2), QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);


}

//数字面板按钮注册
void MainWindow::on_num0_clicked()
{
    this->m_str += '0';

    this->upDateTextEdit();
}

void MainWindow::on_num1_clicked()
{
    this->m_str += '1';

    this->upDateTextEdit();
}

void MainWindow::on_num2_clicked()
{
    this->m_str += '2';

    this->upDateTextEdit();
}

void MainWindow::on_num3_clicked()
{
    this->m_str += '3';

    this->upDateTextEdit();
}

void MainWindow::on_num4_clicked()
{
    this->m_str += '4';

    this->upDateTextEdit();
}

void MainWindow::on_num5_clicked()
{
    this->m_str += '5';

    this->upDateTextEdit();
}

void MainWindow::on_num6_clicked()
{
    this->m_str += '6';

    this->upDateTextEdit();
}

void MainWindow::on_num7_clicked()
{
    this->m_str += '7';

    this->upDateTextEdit();
}

void MainWindow::on_num8_clicked()
{
    this->m_str += '8';

    this->upDateTextEdit();
}

void MainWindow::on_num9_clicked()
{
    this->m_str += '9';

    this->upDateTextEdit();
}


//小数点
void MainWindow::on_dot_clicked()
{
    this->m_str += '.';

    this->upDateTextEdit();
}


//运算面板注册
void MainWindow::on_add_clicked()
{
    this->op[1] = 1;

    this->m_iSign = this->op[0];
    this->calculate();
}

void MainWindow::on_reduce_clicked()
{
    this->op[1] = 2;

    this->m_iSign = this->op[0];
    this->calculate();

}

void MainWindow::on_multiply_clicked()
{
    this->op[1] = 3;

    this->m_iSign = this->op[0];
    this->calculate();

}

void MainWindow::on_divice_clicked()
{
    this->op[1] = 4;

    this->m_iSign = this->op[0];
    this->calculate();

}

void MainWindow::on_equal_clicked()
{
    this->data_line = "";
    this->m_iSign = this->op[0];
    this->calculate();
    this->data_line = "";
    QString q_sum = QString::number(this->m_sum);
    ui->textEdit->setText("<p style='height:20px;text-align: right;font-size: 20px;'>"+this->data_line+"</p>"
                          "<p style='height:30px;text-align: right;font-size: 35px;'>"+q_sum+"</p>");
    this->m_fNumber1 = 0;
    this->m_fNumber2 = 0;
    this->m_str = QString::number(this->m_sum);
    this->op[0] = 1;



}

//删除按钮
void MainWindow::on_delete_2_clicked()
{
    if(!this->m_str.isEmpty()){
        this->m_str = this->m_str.right(this->m_str.length()-1);
    }
    this->upDateTextEdit();

}


//清空按钮
void MainWindow::on_clear_clicked()
{
    this->m_str = "";
    this->data_line = "";
    this->m_iSign = 0;
    this->m_fNumber1 = 0;
    this->m_fNumber2 = 0;
    this->m_sum = 0;
    this->upDateTextEdit();
}


