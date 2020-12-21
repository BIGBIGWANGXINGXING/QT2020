#include "mainwindow.h"
#include "ui_mainwindow.h"


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
#include <Python.h>
#include <QDebug>
#include <QString>
#include <QTextCodec>
#include <qtextcodec.h>
#include <cwxh.h>
#include <QSlider>
#include <QTranslator>
using namespace std;

/*初始化函数要使用的变量*/
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
QMdiSubWindow *childmain;
QImage *imgcanny;
CWxh xh;
bool lan = true;







MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QTextCodec *codec = QTextCodec::codecForName("GBK");

    //    /*初始化菜单栏要使用的控件*/
    ui->brightdockWidget->hide();
    ui->gammadockWidget->hide();
    ui->filterdockWidget->hide();
    ui->asciidockWidget->hide();
    ui->braindockWidget->hide();



    //设置状态栏
    ui->statusbar->showMessage(tr("Welcome to the image editor"),2000);
    QLabel *permanent = new QLabel(this);
    permanent->setFrameStyle(QFrame::Box | QFrame::Sunken);
    permanent->setText(tr("wxh189051002"));
    ui->statusbar->addPermanentWidget(permanent);
}

MainWindow::~MainWindow()
{
    delete ui;
}


/**
 * @brief MainWindow::on_videoButton_clicked
 * 视频处理
 */
void MainWindow::on_videoButton_clicked()
{
    //进行初始化

    //如果初始化失败，返回
    if(!Py_IsInitialized())
    {
        qDebug()<<"python初始化失败";
        return;
    }
    //加载模块，模块名称为myModule，就是myModule.py文件
    PyObject *pModule = PyImport_ImportModule("video");
    //如果加载失败，则返回
    if(!pModule)
    {
        qDebug()<<"python模块初始化失败";
    }
    //加载函数greatFunc
    PyObject * pFuncHello = PyObject_GetAttrString(pModule, "greatFunc");
    //如果失败则返回
    if(!pFuncHello)
    {
        qDebug()<<"函数调用失败";
        return;
    }
    //调用函数
    PyObject_CallFunction(pFuncHello, NULL);

}
/**
 * @brief MainWindow::on_action_2_triggered
 * 本地视频
 */
void MainWindow::on_action_2_triggered()
{
    this->on_videoButton_clicked();
}

/**
 * @brief MainWindow::on_action_5_triggered
 * 摄像头
 */
void MainWindow::on_action_5_triggered()
{

    //如果初始化失败，返回
    if(!Py_IsInitialized())
    {
        qDebug()<<"python初始化失败";
        return;
    }
    //加载模块，模块名称为myModule，就是myModule.py文件
    PyObject *pModule = PyImport_ImportModule("video");
    //如果加载失败，则返回
    if(!pModule)
    {
        qDebug()<<"python模块初始化失败";
    }
    //加载函数greatFunc
    PyObject * pFuncHello = PyObject_GetAttrString(pModule, "greatTo");
    //如果失败则返回
    if(!pFuncHello)
    {
        qDebug()<<"函数调用失败";
        return;
    }
    //调用函数
    PyObject_CallFunction(pFuncHello, NULL);
}

/**
 * @brief MainWindow::on_actionSmooth_triggered
 * 视频平滑处理
 */
void MainWindow::on_actionSmooth_triggered()
{
    //如果初始化失败，返回
    if(!Py_IsInitialized())
    {
        qDebug()<<"python初始化失败";
        return;
    }
    //加载模块，模块名称为myModule，就是myModule.py文件
    PyObject *pModule = PyImport_ImportModule("video");
    //如果加载失败，则返回
    if(!pModule)
    {
        qDebug()<<"python模块初始化失败";
    }
    //加载函数greatFunc
    PyObject * pFuncHello = PyObject_GetAttrString(pModule, "smooth");
    //如果失败则返回
    if(!pFuncHello)
    {
        qDebug()<<"函数调用失败";
        return;
    }
    //调用函数
    PyObject_CallFunction(pFuncHello, NULL);
}

/**
 * @brief MainWindow::on_actionMosaic_triggered
 * 视频马赛克处理
 */
void MainWindow::on_actionMosaic_triggered()
{
    //如果初始化失败，返回
    if(!Py_IsInitialized())
    {
        qDebug()<<"python初始化失败";
        return;
    }
    //加载模块，模块名称为myModule，就是myModule.py文件
    PyObject *pModule = PyImport_ImportModule("video");
    //如果加载失败，则返回
    if(!pModule)
    {
        qDebug()<<"python模块初始化失败";
    }
    //加载函数greatFunc
    PyObject * pFuncHello = PyObject_GetAttrString(pModule, "mosaic");
    //如果失败则返回
    if(!pFuncHello)
    {
        qDebug()<<"函数调用失败";
        return;
    }
    //调用函数
    PyObject_CallFunction(pFuncHello, NULL);
}

/**
 * @brief MainWindow::on_actionBinarization_triggered
 * 视频二值化
 */
void MainWindow::on_actionBinarization_triggered()
{
    //如果初始化失败，返回
    if(!Py_IsInitialized())
    {
        qDebug()<<"python初始化失败";
        return;
    }
    //加载模块，模块名称为myModule，就是myModule.py文件
    PyObject *pModule = PyImport_ImportModule("video");
    //如果加载失败，则返回
    if(!pModule)
    {
        qDebug()<<"python模块初始化失败";
    }
    //加载函数greatFunc
    PyObject * pFuncHello = PyObject_GetAttrString(pModule, "binari");
    //如果失败则返回
    if(!pFuncHello)
    {
        qDebug()<<"函数调用失败";
        return;
    }
    //调用函数
    PyObject_CallFunction(pFuncHello, NULL);
}

/**
 * @brief MainWindow::on_actionEdge_Detection_triggered
 * 视频边缘提取
 */
void MainWindow::on_actionEdge_Detection_triggered()
{
    //如果初始化失败，返回
    if(!Py_IsInitialized())
    {
        qDebug()<<"python初始化失败";
        return;
    }
    //加载模块，模块名称为myModule，就是myModule.py文件
    PyObject *pModule = PyImport_ImportModule("video");
    //如果加载失败，则返回
    if(!pModule)
    {
        qDebug()<<"python模块初始化失败";
    }
    //加载函数greatFunc
    PyObject * pFuncHello = PyObject_GetAttrString(pModule, "edge");
    //如果失败则返回
    if(!pFuncHello)
    {
        qDebug()<<"函数调用失败";
        return;
    }
    //调用函数
    PyObject_CallFunction(pFuncHello, NULL);
}

/**
 * @brief MainWindow::on_brightnessButton_clicked
 * 亮度调节和对比度调节
 */
void MainWindow::on_brightnessButton_clicked()
{
    ui->brightdockWidget->show();
    int b = ui->birghtness->value();
    int c = ui->contrast->value();
    ui->labelb->setText(QString::number(b));
    ui->labelc->setText(QString::number(c));
}
void MainWindow::on_birghtness_valueChanged(int brightness)
{
    ui->labelb->setText(QString::number(brightness));
    if(imgLabel == NULL){
        QMessageBox::information(this,tr("Error Messaage"),tr("Please open a picture first"));
    }else{
        int constratnum = ui->contrast->value();
        float constrat = constratnum*0.01;
        QImage *img = xh.imgBritght(fpath,constrat,brightness);
        imgLabel->setPixmap(QPixmap::fromImage(*img));
    }

}
void MainWindow::on_contrast_valueChanged(int constratnum)
{
    ui->labelc->setText(QString::number(constratnum));
    if(imgLabel == NULL){
        QMessageBox::information(this,tr("Error Messaage"),tr("Please open a picture first"));
    }else{
        int brightness = ui->birghtness->value();
        float constrat = constratnum*0.01;
        QImage *img = xh.imgBritght(fpath,constrat,brightness);
        imgLabel->setPixmap(QPixmap::fromImage(*img));

    }
}
void MainWindow::on_action_4_triggered()
{
    this->on_brightnessButton_clicked();
}

/**
 * @brief MainWindow::on_grayButton_clicked
 * 灰度变化
 */
void MainWindow::on_grayButton_clicked()
{
    if(fpath != NULL){
        QImage *img = xh.changeToGray(fpath);
        imgLabel->setPixmap(QPixmap::fromImage(*img));
    }

}
void MainWindow::on_action_7_triggered()
{
    this->on_grayButton_clicked();
}


/**
 * @brief MainWindow::on_binarizationButton_clicked
 * 二值化调节
 */
void MainWindow::on_binarizationButton_clicked()
{
    int t = ui->nSlider->value();
    ui->labelt->setText(QString::number(t));
    ui->braindockWidget->show();
    if(fpath != ""){
        int n = ui->nSlider->value();
        QImage *img = new QImage(fpath);
        img = xh.imgErzhi(img,n);
        imgLabel->setPixmap(QPixmap::fromImage(*img));
    }
}
void MainWindow::on_nSlider_valueChanged(int value)
{
    ui->labelt->setText(QString::number(value));
    if(imgLabel == NULL){
        QMessageBox::information(this,tr("Error Messaage"),tr("Please open a picture first"));
    }else{
        QImage *img = new QImage(fpath);
        img = xh.imgErzhi(img,value);
        imgLabel->setPixmap(QPixmap::fromImage(*img));
    }
}
void MainWindow::on_action_9_triggered()
{
    this->on_binarizationButton_clicked();
}




/**
 * @brief MainWindow::on_asciiButton_clicked
 * ascii码调节
 */
void MainWindow::on_asciiButton_clicked()
{
    ui->asciidockWidget->show();
    QString ascii_str = ui->lineEdit->text();
    if(ascii_str != NULL){
        if(fpath != ""){

            int asci = ascii_str.toInt();
            if(asci<32||asci>126){
                QMessageBox::information(this,tr("Error Message"),tr("The ASCII code you entered is wrong"));
                return;
            }

            QString str = xh.change(fpath,asci);
            text = new QTextEdit(this);
            text->setText(str);
            text->setFont(QFont(tr("Consolas"), 1));
            QMdiSubWindow *child = ui->mdiArea->addSubWindow(text);
            child->setWindowTitle(tr("ASCLL Image"));
            child->show();
        }
    }

}
void MainWindow::on_actionASCII_triggered()
{
    this->on_asciiButton_clicked();
}


/**
 * @brief MainWindow::on_action_ascii_triggered
 * ASCII码文件保存
 */
void MainWindow::on_action_ascii_triggered()
{
    QString fileName=QFileDialog::getSaveFileName(this,tr("Save File"),QDir::currentPath());
    if(fileName.isEmpty())
    {
        QMessageBox::information(this,tr("Error Message"),tr("Plesase Select a Text File"));
        return;
    }
    QMessageBox::information(this,tr("imformation"),fileName);
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
        QMessageBox::information(this,tr("Error Messaage"),tr("File Save Error %1").arg(file->errorString()));
        return;
    }
}



/**
 * @brief MainWindow::on_cannyButton_clicked
 * canny边缘提取
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
        imgLabel->setPixmap(QPixmap::fromImage(*img_st));


    }
}
void MainWindow::on_action_Canny_triggered()
{
    this->on_cannyButton_clicked();
}


/**
 * @brief MainWindow::on_sobelButton_clicked
 * sobel处理
 */
void MainWindow::on_sobelButton_clicked()
{
    if(fpath != ""){
        QImage *img = xh.changeToGray(fpath);
        img = xh.imgGauss(img);
        img = xh.imgSobel(img);
        imgLabel->setPixmap(QPixmap::fromImage(*img));
    }
}
void MainWindow::on_action_Sobel_triggered()
{
    this->on_sobelButton_clicked();
}



/**
 * @brief MainWindow::on_gaussButton_clicked
 * 高斯滤波
 */
void MainWindow::on_gaussButton_clicked()
{
    if(fpath != ""){
        QImage *img = xh.changeToGray(fpath);
        img = xh.imgGauss(img);
        imgLabel->setPixmap(QPixmap::fromImage(*img));
    }
}
void MainWindow::on_action_triggered()
{
    this->on_gaussButton_clicked();
}




/**
 * @brief MainWindow::on_gammaButton_clicked
 * gamma调节
 */
void MainWindow::on_gammaButton_clicked()
{
    int h = ui->horizontalSlider->value();
    ui->labelt->setText(QString::number(h));
    ui->gammadockWidget->show();
}
void MainWindow::on_horizontalSlider_valueChanged(int value)
{
    ui->labelt->setText(QString::number(value));
    if(imgLabel == NULL){
        QMessageBox::information(this,tr("Error Messaage"),tr("Please open a picture first"));
    }else{
        QImage *img = new QImage(fpath);
        img = xh.imgGamma(img,value);
        imgLabel->setPixmap(QPixmap::fromImage(*img));
    }
}
void MainWindow::on_action_10_triggered()
{
    this->on_gammaButton_clicked();
}



/**
 * @brief MainWindow::on_filtrerButton_clicked
 * 均值滤波
 */
void MainWindow::on_filtrerButton_clicked()
{
    ui->filterdockWidget->show();
}
void MainWindow::on_spinBox_valueChanged(int arg1)
{
    if(imgLabel == NULL){
        QMessageBox::information(this,tr("Error Messaage"),tr("Please open a picture first"));
    }else{
        QImage *img = xh.changeTofilter(fpath,arg1);
        imgLabel->setPixmap(QPixmap::fromImage(*img));
    }
}
void MainWindow::on_action_6_triggered()
{
    this->on_filtrerButton_clicked();
}



/**
 * @brief MainWindow::on_borderButton_clicked
 * 边缘复合
 */
void MainWindow::on_borderButton_clicked()
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
        imgLabel->setPixmap(QPixmap::fromImage(*imgcanny));
    }
}
void MainWindow::on_action_8_triggered()
{
    this->on_borderButton_clicked();
}

/**
 * @brief MainWindow::on_openfile_triggered
 * 打开单文件
 */
void MainWindow::on_openfile_triggered()
{

    QString path = QFileDialog::getOpenFileName(this,tr("open image"),"",tr("Images (*.png *.bmp *.jpg)"));
    fpath = path;

    qDebug()<<path;
    if(path.length() == 0) {
        QMessageBox::information(this, tr("Path"), tr("You didn't open any files"));
    }else{
        QImage image;
        image.load(path);
        imgLabel = new QLabel(this);

        QFileInfo file = QFileInfo(path);
        QString file_name = file.fileName();

        QMdiSubWindow *childmain = ui->mdiArea->addSubWindow(imgLabel);
        childmain->resize(ui->mdiArea->width(),ui->mdiArea->height());
        childmain->setWindowTitle(file_name);

        imgLabel->resize(childmain->width(),childmain->height());
        imgLabel->setAlignment(Qt::AlignCenter);
        QImage resultImg = image.scaled(imgLabel->size(),Qt::KeepAspectRatio,Qt::SmoothTransformation);
        imgLabel->setPixmap(QPixmap::fromImage(resultImg));
        childmain->setWindowIcon(QPixmap("../wxhlab/logo.ico"));
        childmain->show();
    }
}
void MainWindow::on_action_N_triggered()
{
    this->on_openfile_triggered();
}



/**
 * @brief MainWindow::on_openfiles_triggered
 * 打开多文件
 */
void MainWindow::on_openfiles_triggered()
{
    QString strs;
    QStringList file_list, output_name;
    QStringList str_path_list = QFileDialog::getOpenFileNames(this, tr("open Image"),"", tr("Images (*.png *.bmp *.jpg)"));
    QImage image;
    for (int i = 0; i < str_path_list.size(); i++){

        QLabel *label = new QLabel(QString::asprintf("imageLebel%d", i+1),this);


        QString str_path = str_path_list[i];
        //单个文件路径
        qDebug() << "path=" << str_path;
        QFileInfo file = QFileInfo(str_path);

        image.load(str_path);
        label = new QLabel(this);

        QFileInfo filestr = QFileInfo(str_path);
        QString file_name = filestr.fileName();

        QMdiSubWindow *child = ui->mdiArea->addSubWindow(label);
        child->resize(ui->mdiArea->width(),ui->mdiArea->height());
        child->setWindowTitle(file_name);

        label->resize(child->width(),child->height());
        label->setAlignment(Qt::AlignCenter);
        QImage resultImg = image.scaled(label->size(),Qt::KeepAspectRatio,Qt::SmoothTransformation);
        label->setPixmap(QPixmap::fromImage(resultImg));
        child->show();

        file_list.append(str_path);
        output_name.append(file_name);
        strs.append(file_name);
        strs += "\n";
    }
}
void MainWindow::on_action_3_triggered()
{
    this->on_openfiles_triggered();
}


/**
 * @brief MainWindow::on_savafile_triggered
 * 保存文件
 */
void MainWindow::on_savafile_triggered()
{
    QString path = "../testpicture3.bmp";
    QImage imgSign;
    imgSign.load(path);
    QImage img = imgLabel->pixmap()->toImage();
    QString fileName=QFileDialog::getSaveFileName(this,tr("Save File"),QDir::currentPath(),tr("Images (*.png *.bmp *.jpg)"));
    img = xh.sign(imgSign,img);
    img.save(fileName);
}
void MainWindow::on_action_S_triggered()
{
    this->on_savafile_triggered();
}



/**
 * @brief MainWindow::on_actionAbout_IMAGEW_triggered
 * 关于本软件
 */
void MainWindow::on_actionAbout_IMAGEW_triggered()
{

    QMessageBox msg(QMessageBox::NoIcon,  tr("About Imagew1.0.0"), tr("\n\n\nThe software supports image and video processing, including gray, mean filtering, Gaussian filtering, edge extraction, edge compounding and so on.") );  //对话框设置父组件

    msg.setIconPixmap(QPixmap( "../wxhlab/logo.ico"));

    msg.setStandardButtons(QMessageBox:: Cancel);//对话框上包含的按钮

    msg.exec();
}


/**
 * @brief MainWindow::on_action_L_triggered
 * 中英文切换
 */
void MainWindow::on_action_L_triggered()
{
    if(lan == true){
        QTranslator translator;
        translator.load("../wxhlab/wxhlab_zn_CN.qm");

        if(translator.isEmpty()){
            qDebug()<<"file has not opened";
        }
        qApp->installTranslator(&translator);
        ui->retranslateUi(this);
        lan = false;
    }else{
        qApp->installTranslator(NULL);
        ui->retranslateUi(this);
        lan = true;
    }

}







