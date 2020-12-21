#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLabel>
#include <QPushButton>
#include <QFile>
#include <QLineEdit>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("扫雷");

    //这是在Qt的资源下的文件,可以不用在资源下
    QFile file("E:/QTProject/lab6/calculator/pushButonStyle.qss");
    //只读方式打开文件
    file.open(QFile::ReadOnly);
    //读取文件的所有内容，并转换成QString类型
    QString styleSheet = tr(file.readAll());
    //设置样式表
    this->setStyleSheet(styleSheet);
    file.close();

    //设置客户区大小
//    this->resize(400, 400);

    //设置背景颜色
    QPalette palette = this->palette();  //获取调色板
    palette.setColor(QPalette::Window, QColor(255, 255, 255));  //设置为白色
    this->setPalette(palette);  //重新设置调色板

    ui->gridLayout_3->setHorizontalSpacing(0);
    ui->gridLayout_3->setVerticalSpacing(0);
    ui->gridLayout_3->setContentsMargins(0, 0, 0, 0);
    ui->gridLayout_3->setGeometry(QRect(0,0,200,200));


    this->MakeMine();

    //添加QLabel控件
    QLabel *label_time = new QLabel(this);  //创建QLabel控件
    ui->gridLayout_3->addWidget(label_time,4,40);
    label_time->setText(tr("时间："));  //设置控件文本
    label_time->setMargin(5);


    QLineEdit *line_time = new QLineEdit(this);
    ui->gridLayout_3->addWidget(line_time,5,40);
    line_time->setEnabled(false);
    line_time->setText("0");
    line_time->setAlignment(Qt::AlignCenter);

    QLabel *label_num = new QLabel(this);  //创建QLabel控件
    ui->gridLayout_3->addWidget(label_num,9,40);
    label_num->setText(tr("剩余雷数："));  //设置控件文本
    label_num->setMargin(5);

    QLineEdit *line_num = new QLineEdit(this);
    ui->gridLayout_3->addWidget(line_num,10,40);
    line_num->setEnabled(false);
    line_num->setText("99");
    line_num->setAlignment(Qt::AlignCenter);

//    label_time->setAlignment(Qt::AlignBottom);  //文本水平和垂直都居中

}

//自动生成扫雷按钮面板
void MainWindow::MakeMine()
{
    for(int i = 0; i < 16; i++){
        for(int j = 0;j <30 ;j++){
            QPushButton *bt=new QPushButton(QString::asprintf("Button%d", i+1));
            bt->setMaximumSize(22,22);
            bt->setText("");
            ui->gridLayout_3->addWidget(bt,i,j);
        }
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}
