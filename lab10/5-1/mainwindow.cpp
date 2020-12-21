#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QToolButton>
#include <QSpinBox>
#include<QTextEdit>
#include<QMdiSubWindow>
#include<string>
#include "bmp2ac.h"
#include "stdio.h"
#include <QFileDialog>
#include <QDebug>
#include <QScreen>
#include "qpainter.h"
#include <QDesktopWidget>
#include <QTranslator>

using namespace std;

QTextEdit *edit;
bmp2ac *imageDeal = new bmp2ac();
QImage originImg;

int originValue = 5;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    initMenuBar();
    initToolBar();
    initDocker();
    initStatusBar();
    QDesktopWidget *desktop = QApplication::desktop();
    move((desktop->width()-this->width())/2,(desktop->height()-this->height())/2);

}

void MainWindow::initStatusBar() {
    QLabel *lbl = new QLabel(tr("李恩惠189050616"), this);
    ui->statusBar->addPermanentWidget(lbl);
}

void MainWindow::initDocker() {
//    ui->dockWidget_2->setWindowTitle(tr("工具箱"));
//    ui->comboBox->addItem(tr("中文"));
//    ui->comboBox->addItem(tr("y英文"));

}

void MainWindow::initToolBar()
{
//    QToolButton *toolBtn = new QToolButton(this);
//    toolBtn->setText(tr("颜色"));
//    QMenu *colorMenu = new QMenu(this);
//    colorMenu->addAction(tr("红色"));
//    colorMenu->addAction(tr("绿色"));
//    toolBtn->setMenu(colorMenu);
//    toolBtn->setPopupMode(QToolButton::MenuButtonPopup);
//    ui->mainToolBar->addWidget(toolBtn);
//    QSpinBox *spinBox = new QSpinBox(this);
//    ui->mainToolBar->addWidget(spinBox);
}

void MainWindow::initMenuBar()
{
//    QMenu *addMenu = ui->menuBar->addMenu(tr("新增(&N)"));
//    QMenu *editMenu = ui->menuBar->addMenu(tr("编辑(&E)"));

//    QAction *edit_action_Open = editMenu->addAction(
//    QIcon(":/image/images/filesave.png"),tr("保存(&S)"));
//    ui->mainToolBar->addAction(edit_action_Open);

}

MainWindow::~MainWindow()
{
    delete ui;
    delete edit;
    delete imageDeal;
}

void MainWindow::on_actionNew_N_triggered()
{
//    edit = new QTextEdit(this);
//    QMdiSubWindow *child = ui->mdiArea->addSubWindow(edit);
//    child->setWindowTitle(tr("多文档编辑器子窗口"));
//    child->show();




    QString filename1 = QFileDialog::getSaveFileName(this,tr("Save Image"),"",tr("Images (*.png *.bmp *.jpg)")); //选择路径
    QScreen *screen = QGuiApplication::primaryScreen();
    screen->grabWindow(ui->label->winId()).save(filename1);
    ui->label->pixmap()->toImage();




}

void MainWindow::on_actionOpen_M_triggered()
{
//    string str = "AA A\nB";
//    QString qstr = QString::fromStdString(str);



//    QString filePath = QFileDialog::getOpenFileName(this,"open file dialog", "/","bmp图像(*.bmp)");
//    if(!filePath.isEmpty()&& !filePath.isNull())
//    {

//        std::string filePathStr = filePath.toStdString();
//        const char *mvFileName = filePathStr.c_str();
//        qDebug()<< filePath;
//        bmp2ac *b = new bmp2ac();
//        QString qstr = "";
//        if(b->OpenBitmap(mvFileName))
//        {
//            qstr = b->OutputAscii();
//        }

//        edit->setText(qstr);
//        delete b;
//    }else
//    {
//        qDebug("Cancel");
//    }

    QString currentPath = QFileDialog::getOpenFileName(this,"open file dialog", "/","png图像(*.png)");
    unsigned char *grayData;                                // 定义字符型指针数组grayData用于存储灰度数据
    QImage img;
    img.load (currentPath);
    QPixmap pixmap(QPixmap::fromImage (img));

        ui->label->setFixedSize(img.size());
        ui->label->setPixmap(pixmap);


}

void MainWindow::on_pushButton_clicked()
{
//    QString filePath = QFileDialog::getOpenFileName(this,"open file dialog", "/","bmp图像(*.bmp)");
//    if(!filePath.isEmpty()&& !filePath.isNull())
//    {
//        std::string filePathStr = filePath.toStdString();
//        const char *mvFileName = filePathStr.c_str();

//        qDebug()<< filePath;
//        bmp2ac *c = new bmp2ac();
//        QString qstr = "";
//        if(c->OpenBitmap(mvFileName))
//        {
//            qstr = c->OutputAscii();
//        }

//        edit->setText(qstr);
//        delete c;
//    }else
//    {
//        qDebug("Cancel");
//    }



//    QString currentPath = QFileDialog::getOpenFileName(this,"open file dialog", "/","png图像(*.bmp)");

    QImage image = ui->label->pixmap()->toImage();
//    image.load (currentPath);
    QImage* newImage = new QImage(image.width(),image.height(),QImage::Format_ARGB32);
        int kernel [3][3] = {
        {1,1,1},
        {1,1,1},
        {1,1,1}};
        int sizeKernel = 3;
        int sumKernel = 9;
        QColor color;
         for(int x = 0;x<image.width() ;x++)
        {
           for(int y= 0;y<image.height() ;y++)
            {
               int r = 0;
               int g = 0;
               int b = 0;
               if(x < (sizeKernel/2) || x >= (image.width() - sizeKernel/2) || y < (sizeKernel/2) || y >= (image.height() - sizeKernel/2))
               {
                   color = QColor(image.pixel(x,y));
                   r = color.red();
                   g = color.green();
                   b = color.blue();

               }else
               {
                   for(int i = -sizeKernel/2;i<=sizeKernel/2;i++)
                   {
                      for(int j = -sizeKernel/2;j<=sizeKernel/2;j++)
                       {
                        color = QColor(image.pixel(x+i,y+j));
                        r+=color.red()*kernel[sizeKernel/2+i][sizeKernel/2+j];
                        g+=color.green()*kernel[sizeKernel/2+i][sizeKernel/2+j];
                        b+=color.blue()*kernel[sizeKernel/2+i][sizeKernel/2+j];
                       }
                   }
                   r = qBound(0,r/sumKernel,255);
                   g = qBound(0,g/sumKernel,255);
                   b = qBound(0,b/sumKernel,255);
               }


                newImage->setPixel(x,y,qRgb( r,g,b));
            }
        }


         ui->label->setFixedSize(image.size());
         ui->label->setPixmap(QPixmap::fromImage(*newImage));


}

void MainWindow::on_pushButton_3_clicked()
{
    QPixmap p1 = QPixmap::fromImage(ui->label->pixmap()->toImage());
    QPixmap orgin = p1;
    QPixmap p2("C:/Users/75222/Desktop/2.png");
    QPainter painter(&p1);
    painter.drawPixmap(p1.width()-p2.width(),p1.height()-p2.height(),p2.width(),p2.height(), p2);
    ui->label->setPixmap(p1);
}

void MainWindow::on_pushButton_2_clicked()
{
    QImage img = ui->label->pixmap()->toImage();
    originImg = img;
    QImage* img_gray = imageDeal->img2gray(img);
    QImage* img_guass = imageDeal->img2guess(img_gray);
    imageDeal->calculate(img,img_gray);
    QImage* img_nms = imageDeal->nms(img_guass);
    QImage* img_dt = imageDeal->dt(img,img_nms);
    QImage* img_st = imageDeal->st(img_dt);

    imageDeal->init();

    ui->label->setPixmap(QPixmap::fromImage(*img_st));
}

void MainWindow::on_brightsld_valueChanged(int value)
{
    int t = value;
    value = value - originValue;
    originValue = t;

    QImage image = ui->label->pixmap()->toImage();

    QImage result = imageDeal->changeBright(image,value*3);

    ui->label->setPixmap(QPixmap::fromImage(result));
}

void MainWindow::on_pushButton_4_clicked()
{
//    QString currentPath = QFileDialog::getOpenFileName(this,"open file dialog", "/","png图像(*.png)");
    unsigned char *grayData;                                // 定义字符型指针数组grayData用于存储灰度数据
    QImage img = ui->label->pixmap()->toImage();
//    img.load (currentPath);
    QPixmap pixmap(QPixmap::fromImage (img));
    unsigned char *data = img.bits ();                      // 指向当前图像第一个像素
    int width = img.width ();                               // 图像宽度
        int height = img.height ();                             // 图像高度
        int bytePerLine = img.bytesPerLine();                   // 图像每行字节数
        grayData = new unsigned char [bytePerLine * height];
        unsigned char red = 0;                                  // 红色分量
        unsigned char green = 0;                                // 绿色分量
        unsigned char blue = 0;                                 // 蓝色分量
        for (int i = 0; i < height; i++)                        // 遍历每一行
        {
            for ( int j = 0; j < width; j++ )                   // 遍历每一列
            {
                red = *(data + 2);                              // 获取当前像素点红色分量
                green = *(data + 1);                            // 获取当前像素点绿色分量
                blue = *(data);                                 // 获取当前像素点蓝色分量
                grayData[i * bytePerLine + j * 3] = (red + green+ blue) / 3;
                grayData[i * bytePerLine + j * 3+1]=(red + green+ blue) / 3;
                grayData[i * bytePerLine + j * 3+2]=(red + green+ blue) / 3;
                data += 4;
            }
        }
        QImage *grayImg=new QImage(grayData,width,height,bytePerLine,QImage::Format_RGB888);
        ui->label->setFixedSize(img.size());
        ui->label->setPixmap(QPixmap::fromImage(*grayImg));
}

void MainWindow::on_pushButton_5_clicked()
{
    QImage nowImage = ui->label->pixmap()->toImage();
    double oWeight = 0.7;
    double nWeight = 0.2;


    QImage *newImage = imageDeal->complex(originImg,nowImage,oWeight,nWeight);
    ui->label->setPixmap(QPixmap::fromImage(*newImage));
}



void MainWindow::on_action_triggered()
{
    QString qmFilename;
    static QTranslator* translator;
    if (translator != NULL)
    {
        qApp->removeTranslator(translator);
        delete translator;
        translator = NULL;
    }
    translator = new QTranslator;
    qmFilename = "E:/studySoftware/qtProject/5-1/guojihua3_zh_EN.qm";
    if (translator->load(qmFilename))
    {
        qApp->installTranslator(translator);
    }
    ui->retranslateUi(this);
}

void MainWindow::on_actionEnglish_triggered()
{
    QString qmFilename;
    static QTranslator* translator;
    if (translator != NULL)
    {
        qApp->removeTranslator(translator);
        delete translator;
        translator = NULL;
    }
    translator = new QTranslator;
    qmFilename = "E:/studySoftware/qtProject/5-1/guojihua3_zh_CN.qm";
    if (translator->load(qmFilename))
    {
        qApp->installTranslator(translator);
    }
    ui->retranslateUi(this);
}
