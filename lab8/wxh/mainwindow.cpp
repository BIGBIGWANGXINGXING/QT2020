#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "bmpimg.h"
#include "cwxh.h"
#include <QGridLayout>
#include <QTextEdit>
#include <QToolButton>
#include <QSpinBox>
#include <QMenu>
#include <QTextEdit>
#include <QMdiSubWindow>
#include <QLabel>
#include <QFileDialog>
#include <QMessageBox>
#include <iostream>
#include <QBuffer>
#include <QByteArray>
#include <QTextCodec>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>

using namespace std;


QString fpath;
QTextEdit *text;
QLabel *imgBright;
QLabel *imgLabel;
QLabel *imgCanny;
QLabel *imgErzhi;
QLabel *imgGam;
QMdiSubWindow *childBright;
QMdiSubWindow *childErzhi;
QMdiSubWindow *childGam;
QImage *imgcanny;
CWxh xh;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //添加颜色选择工具
    QToolButton * toolBtn = new QToolButton(this);
    toolBtn->setText(tr("颜色"));
    QMenu * colorMenu = new QMenu(this);
    colorMenu->addAction(tr("红色"));
    colorMenu->addAction(tr("绿色"));
    toolBtn->setMenu(colorMenu);
    toolBtn->setPopupMode(QToolButton::MenuButtonPopup);
    ui->mainToolBar->addWidget(toolBtn);

    //添加字体大小选择工具
    QSpinBox *spinBox = new QSpinBox(this);
    ui->mainToolBar->addWidget(spinBox);

    //给dock工具栏初始化
    ui->dockWidget_3->setWindowTitle("工具箱");
    //    ui->dockWidget_3->width(120);

    //设置状态栏
    ui->statusBar->showMessage(tr("欢迎使用多文档编辑器"),2000);
    QLabel *permanent = new QLabel(this);
    permanent->setFrameStyle(QFrame::Box | QFrame::Sunken);
    permanent->setText("www.qter.org");
    ui->statusBar->addPermanentWidget(permanent);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_filenew_triggered()
{
    QTextEdit *edit = new QTextEdit(this);
    QMdiSubWindow *child = ui->mdiArea->addSubWindow(edit);
    child->setWindowTitle("多文档编辑子窗口");
    child->show();
}


/**
 * @brief MainWindow::on_fileopen_triggered
 * 打开一张bmp格式的图片
 */
void MainWindow::on_fileopen_triggered()
{

    QString path = QFileDialog::getOpenFileName(this, tr("Open Image"), ".", tr("Image Files(*.*)"));
    fpath = path;
    QMessageBox::information(this, tr("Path"), fpath);
    if(path.length() == 0) {
        QMessageBox::information(this, tr("Path"), tr("你没有打开任何文件"));
    }else{
        imgLabel = new QLabel(this);
        imgLabel->setPixmap(QPixmap(path));
        QMdiSubWindow *child = ui->mdiArea->addSubWindow(imgLabel);
        child->setWindowTitle("原图");
        child->show();
    }

}

void MainWindow::on_pushButton_clicked()
{
    this->on_fileopen_triggered();
}



/**
 * @brief MainWindow::on_change_2_triggered
 * 将原图转化成ASCII字符图
 */
void MainWindow::on_change_2_triggered()
{

    if(fpath != ""){
        QString ascii_str = ui->lineEdit->text();
        int asci = ascii_str.toInt();
        if(asci<32||asci>126){
            QMessageBox::information(this,"Error Message","你输入的ASCII码不合理");
            return;
        }

        QString str = xh.change(fpath,asci);
        text = new QTextEdit(this);
        text->setText(str);
        text->setFont(QFont(tr("Consolas"), 1));
        QMdiSubWindow *child = ui->mdiArea->addSubWindow(text);
        child->setWindowTitle("生成ASCLL图像");
        child->show();
    }


}

void MainWindow::on_change_clicked()
{
    this->on_change_2_triggered();
}



/**
 * @brief MainWindow::on_filesave_triggered
 * 将转化好的ASCII字符图进行保存
 */
void MainWindow::on_filesave_triggered()
{
    QString fileName=QFileDialog::getSaveFileName(this,"Save File",QDir::currentPath());
    if(fileName.isEmpty())
    {
        QMessageBox::information(this,"Error Message","Plesase Select a Text File");
        return;
    }
    QMessageBox::information(this,"imformation",fileName);
    QFile *file=new QFile;
    file->setFileName(fileName);
    bool ok=file->open(QIODevice::WriteOnly);
    if(ok)
    {
        QTextStream out(file);
        out<<text->toPlainText();
        file->close();
        delete file;
    }
    else
    {
        QMessageBox::information(this,"Error Messaage","File Save Error"+file->errorString());
        return;
    }
}


/**
 * @brief MainWindow::on_changeToGray_clicked
 * 将一张彩色图片转化成灰度图
 */
void MainWindow::on_changeToGray_clicked()
{
    CWxh xh ;
    QImage *img = xh.changeToGray(fpath);
    QLabel *imgGray = new QLabel(this);
    imgGray->setPixmap(QPixmap::fromImage(*img));
    QMdiSubWindow *child = ui->mdiArea->addSubWindow(imgGray);
    child->setWindowTitle("灰度图");
    child->show();
}


/**
 * @brief MainWindow::on_changeFilter_clicked
 * 均值滤波处理
 */
void MainWindow::on_changeFilter_clicked()
{
    if(fpath != ""){
        int filter_int = ui->spinBox->value();

        QImage *img = xh.changeTofilter(fpath,filter_int);
        QLabel *imgFilter = new QLabel(this);
        imgFilter->setPixmap(QPixmap::fromImage(*img));
        QMdiSubWindow *child = ui->mdiArea->addSubWindow(imgFilter);
        child->setWindowTitle("均值滤波处理");
        child->show();
    }
}


/**
 * @brief MainWindow::on_brightButton_clicked
 * 亮度生成
 */
void MainWindow::on_brightButton_clicked()
{
    if(fpath != ""){
        int brightness = ui->birghtness->value();
        int constratnum = ui->contrast->value();
        float constrat = constratnum*0.01;
        QImage *img = xh.imgBritght(fpath,constrat,brightness);
        imgBright = new QLabel(this);
        imgBright->setPixmap(QPixmap::fromImage(*img));
        childBright = ui->mdiArea->addSubWindow(imgBright);
        childBright->setWindowTitle("图片亮度调节");
        childBright->show();

    }

}

void MainWindow::on_birghtness_valueChanged(int brightness)
{
    if(imgBright == NULL){
        QMessageBox::information(this,"Error Messaage","请先生成一张图片");
    }else{
        int constratnum = ui->contrast->value();
        float constrat = constratnum*0.01;
        QImage *img = xh.imgBritght(fpath,constrat,brightness);
        imgBright->setPixmap(QPixmap::fromImage(*img));
        childBright->update();
    }


}

void MainWindow::on_contrast_valueChanged(int constratnum)
{
    if(imgBright == NULL){
        QMessageBox::information(this,"Error Messaage","请先生成一张图片");
    }else{
        int brightness = ui->birghtness->value();
        float constrat = constratnum*0.01;
        QImage *img = xh.imgBritght(fpath,constrat,brightness);
        imgBright->setPixmap(QPixmap::fromImage(*img));
        childBright->update();
    }

}



/**
 * @brief MainWindow::on_gaussButton_clicked
 * 高斯处理
 */
void MainWindow::on_gaussButton_clicked()
{
    if(fpath != ""){
        QImage *img = xh.changeToGray(fpath);
        img = xh.imgGauss(img);
        QLabel *imgGauss = new QLabel(this);
        imgGauss->setPixmap(QPixmap::fromImage(*img));
        QMdiSubWindow *child = ui->mdiArea->addSubWindow(imgGauss);
        child->setWindowTitle("高斯模糊");
        child->show();

    }
}


/**
 * @brief MainWindow::on_sobelButton_clicked
 * Sobel处理
 */
void MainWindow::on_sobelButton_clicked()
{
    if(fpath != ""){
        QImage *img = xh.changeToGray(fpath);
        img = xh.imgGauss(img);
        img = xh.imgSobel(img);
        QLabel *imgSobel = new QLabel(this);
        imgSobel->setPixmap(QPixmap::fromImage(*img));
        QMdiSubWindow *child = ui->mdiArea->addSubWindow(imgSobel);
        child->setWindowTitle("Sobel处理");
        child->show();

    }
}


/**
 * @brief MainWindow::on_cannyButton_clicked
 * Canny处理
 */
void MainWindow::on_cannyButton_clicked()
{
    if(fpath != ""){


        QImage img = imgLabel->pixmap()->toImage();

        QImage *img_gray = xh.changeToGray(fpath);
        QImage* img_guass = xh.imgGauss(img_gray);
        xh.calculate(img,img_gray);
        QImage *img_nms = xh.nms(img_guass);
        QImage* img_dt = xh.dt(img,img_nms);
        QImage* img_st = xh.st(img_dt);

        xh.init();

        QLabel *imgSobel = new QLabel(this);
        imgSobel->setPixmap(QPixmap::fromImage(*img_st));
        QMdiSubWindow *child = ui->mdiArea->addSubWindow(imgSobel);
        child->setWindowTitle("Canny处理");
        child->show();

    }
}


/**
 * @brief MainWindow::on_overButton_clicked
 * 复合运算
 */
void MainWindow::on_overButton_clicked()
{
    if(fpath != ""){
        QImage img = imgLabel->pixmap()->toImage();
        QImage *img_gray = xh.changeToGray(fpath);
        QImage* img_guass = xh.imgGauss(img_gray);
        xh.calculate(img,img_gray);
        QImage *img_nms = xh.nms(img_guass);
        QImage* img_dt = xh.dt(img,img_nms);
        QImage* img_st = xh.st(img_dt);
        imgcanny = xh.overLap(img_st,fpath);
        xh.init();

        imgCanny = new QLabel(this);
        imgCanny->setPixmap(QPixmap::fromImage(*imgcanny));
        QMdiSubWindow *child = ui->mdiArea->addSubWindow(imgCanny);
        child->setWindowTitle("复合运算");
        child->show();

    }
}


/**
 * @brief MainWindow::on_signButton_clicked
 * 数字签名
 */
void MainWindow::on_signButton_clicked()
{
    QString path = "E:/QTProject/lab8/build-wxh-Desktop_Qt_5_6_1_MinGW_32bit-Release/name.bmp";
    QImage imgSign;
    imgSign.load(path);
    QImage *imgnews = xh.sign(imgSign,imgcanny);

    QLabel *labelSign = new QLabel(this);
    labelSign->setPixmap(QPixmap::fromImage(*imgnews));
    QMdiSubWindow *child = ui->mdiArea->addSubWindow(labelSign);
    child->setWindowTitle("数字签名");
    child->show();
}


/**
 * @brief MainWindow::on_saveimgButton_clicked
 * 保存图片
 */
void MainWindow::on_saveimgButton_clicked()
{
    //    QImage im =
    //    im.load(fpath);
    //    QImage pMyImage(im);
    //    pMyImage.save("c:\p.jpg");

}


/**
 * @brief MainWindow::on_erButton_clicked
 * 图像二值化输出 阈值可调
 *
 */
void MainWindow::on_erButton_clicked()
{
    if(fpath != ""){
        int n = ui->nSlider->value();
        QImage *img = new QImage(fpath);
        img = xh.imgErzhi(img,n);
        imgErzhi = new QLabel(this);
        imgErzhi->setPixmap(QPixmap::fromImage(*img));
        childErzhi = ui->mdiArea->addSubWindow(imgErzhi);
        childErzhi->setWindowTitle("二值");
        childErzhi->show();

    }
}

void MainWindow::on_nSlider_valueChanged(int value)
{
    if(imgErzhi == NULL){
        QMessageBox::information(this,"Error Messaage","请先生成一张二值图片");
    }else{
        QImage *img = new QImage(fpath);
        img = xh.imgErzhi(img,value);
        imgErzhi->setPixmap(QPixmap::fromImage(*img));
        childErzhi->update();
    }
}


/**
 * @brief MainWindow::on_gammaButton_clicked
 * 伽马变换
 *
 */
void MainWindow::on_gammaButton_clicked()
{
    if(fpath != ""){
        int n = ui->horizontalSlider->value();
        QImage *img = new QImage(fpath);
        img = xh.imgGamma(img,n);
        imgGam = new QLabel(this);
        imgGam->setPixmap(QPixmap::fromImage(*img));
        childGam = ui->mdiArea->addSubWindow(imgGam);
        childGam->setWindowTitle("伽马变换");
        childGam->show();

    }
}

void MainWindow::on_horizontalSlider_valueChanged(int value)
{
    if(imgGam == NULL){
        QMessageBox::information(this,"Error Messaage","请先生成一张二值图片");
    }else{
        QImage *img = new QImage(fpath);
        img = xh.imgGamma(img,value);
        imgGam->setPixmap(QPixmap::fromImage(*img));
        childGam->update();
    }
}

void MainWindow::on_openVideoButton_clicked()
{
//        QString filename = QFileDialog::getOpenFileName(this,tr("Open Image"),"",tr("Image File(*.bmp *.jpg *.jpeg *.png)"));
//        QTextCodec *code = QTextCodec::codecForName("gb18030");
//        std::string name = code->fromUnicode(filename).data();
//        Mat image;
//        const char *pa= "E:/QTProject/lab8/build-wxh-Desktop_Qt_5_6_1_MinGW_32bit-Release/name.bmp";
//        image = cv::imread(pa);
//        QImage img = QImage((const unsigned char*)(image.data),image.cols,image.rows, image.step,  QImage::Format_RGB888);


    //    QLabel *labelVideo = new QLabel(this);
    //    labelVideo->setPixmap(QPixmap::fromImage(img));
    //    QMdiSubWindow *child = ui->mdiArea->addSubWindow(labelVideo);
    //    child->setWindowTitle("打开视频");
    //    child->show();



}

void MainWindow::on_pushButton_2_clicked()
{
    this->on_fileopen_triggered();
}
