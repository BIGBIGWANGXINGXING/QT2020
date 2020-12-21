#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QImage>
#include <QPoint>
#include <QtDebug>
#include <QMediaPlayer>
#include <QVideoWidget>
#include "sqf.h"
#include <QTranslator>
#include<QApplication>
#include <QWhatsThis>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //ui->pushButton->setText(tr("翻译"));
   // ui->label->setText(tr("标签"));


//帮助文档
    QAction *action = QWhatsThis::createAction(this);
    ui->mainToolBar->addAction(action);

    QAction *help = new QAction("help",this);
    ui->mainToolBar->addAction(help);
    connect(help, &QAction::triggered, this, &MainWindow::startAssistant);

    // 创建Assistant对象
    assistant = new Assistant;


//视频播放
    player = new QMediaPlayer(this);
    videoWidget = new QVideoWidget(ui->videoWidget);
    videoWidget->resize(400, 300);

    player->setVideoOutput(videoWidget);
    player->setMedia(QUrl::fromLocalFile(videoSrcDir));//

    VideoSurface *videoSurface = new VideoSurface(ui->label_widget);

    P = new QMediaPlayer(this);
    P->setVideoOutput(videoSurface);
    P->setMedia(QUrl::fromLocalFile(videoSrcDir));


//视频取帧
    connect(videoSurface, SIGNAL(frameAvailable(QVideoFrame &)), this, SLOT(ProcessFrame(QVideoFrame &)));


    // 亮度
    ui->brightnessSlider->setValue(videoWidget->brightness());
    connect(ui->brightnessSlider, &QSlider::sliderMoved,
            videoWidget, &QVideoWidget::setBrightness);
    connect(videoWidget, &QVideoWidget::brightnessChanged,
            ui->brightnessSlider, &QSlider::setValue);
    // 对比度
    ui->contrastSlider->setValue(videoWidget->contrast());
    connect(ui->contrastSlider, &QSlider::sliderMoved,
            videoWidget, &QVideoWidget::setContrast);
    connect(videoWidget, &QVideoWidget::contrastChanged,
            ui->contrastSlider, &QSlider::setValue);
    // 色相
    ui->hueSlider->setValue(videoWidget->hue());
    connect(ui->hueSlider, &QSlider::sliderMoved,
            videoWidget, &QVideoWidget::setHue);
    connect(videoWidget, &QVideoWidget::hueChanged,
            ui->hueSlider, &QSlider::setValue);
    // 饱和度
    ui->saturationSlider->setValue(videoWidget->saturation());
    connect(ui->saturationSlider, &QSlider::sliderMoved,
            videoWidget, &QVideoWidget::setSaturation);
    connect(videoWidget, &QVideoWidget::saturationChanged,
            ui->saturationSlider, &QSlider::setValue);
    //进度条
    connect(player, &QMediaPlayer::positionChanged,
            this, &MainWindow::updatePosition);



 this-> setMouseTracking(true);



}

MainWindow::~MainWindow()
{
    delete ui;
    // 销毁assistant
    delete assistant;
}

//帮助文档

void MainWindow::startAssistant()
{
    // 按下“help”按钮，运行Qt Assistant，显示index.html页面
    assistant->showDocumentation("../task/html/about.html");
}


//图片处理


//图片居中显示,图片大小与label大小相适应
QImage MainWindow::ImageLabel(QImage  qimage,QLabel *qLabel)
{
    QImage image;
    QSize imageSize = qimage.size();
    QSize labelSize = qLabel->size();

    double dWidthRatio = 1.0*imageSize.width() / labelSize.width();
    double dHeightRatio = 1.0*imageSize.height() / labelSize.height();
            if (dWidthRatio>dHeightRatio)
            {
                image = qimage.scaledToWidth(labelSize.width());
            }
            else
            {
                image = qimage.scaledToHeight(labelSize.height());
            }
            return image;

    }

void MainWindow::mouseMoveEvent(QMouseEvent *event)
{



    QCursor *myCursorL =new QCursor(QPixmap("../task/TUBIAO.png"));
    QCursor *myCursorR =new QCursor(QPixmap("../task/TUBIAOR.png"));

        QPoint mousePos = event->pos();

        if(isImage&&mousePos.rx() >218&&mousePos.rx()<446&&mousePos.ry()>116&&mousePos.ry()<466){
            this->setCursor(*myCursorL);
        }else if (isImage&&mousePos.rx() >446&&mousePos.rx()<677&&mousePos.ry()>116&&mousePos.ry()<466) {
            this->setCursor(*myCursorR);
        }else {
             this->setCursor(Qt::ArrowCursor);
}

       /* int x =event->x();
        int y =event->y();
        qDebug("%d %d",x,y);*/
}


void MainWindow::mousePressEvent(QMouseEvent *event)
{



    //左显示
//    if(isImage and event->x()<446 and event->x()>218 and event->y()<466 and event->y()>116){
//         index=qAbs(index+1);
//         int i = index%srcDirPathList.size();
//        // qDebug("%d",i);
//         QString srcDirPath = srcDirPathList.at(i);
//         QImage image(srcDirPath);
//         QImage Image=ImageLabel(image,ui->label);
//         ui->label->setPixmap(QPixmap::fromImage(Image));
//         ui->label->setAlignment(Qt::AlignCenter);

//         QString src1 = srcDirPathList.at((index+1)%srcDirPathList.size());
//         QImage image1(src1);
//         QImage Image1 = ImageLabel(image1,ui->label_1);
//         ui->label_1->setPixmap(QPixmap::fromImage(Image1));
//         ui->label_1->setAlignment(Qt::AlignCenter);

//         QString src2 = srcDirPathList.at((index+2)%srcDirPathList.size());
//         QImage image2(src2);
//         QImage Image2 = ImageLabel(image2,ui->label_2);
//         ui->label_2->setPixmap(QPixmap::fromImage(Image2));
//         ui->label_2->setAlignment(Qt::AlignCenter);

//         QString src3 = srcDirPathList.at((index+3)%srcDirPathList.size());
//         QImage image3(src3);
//         QImage Image3 = ImageLabel(image3,ui->label_3);
//         ui->label_3->setPixmap(QPixmap::fromImage(Image3));
//         ui->label_3->setAlignment(Qt::AlignCenter);

//         QString src4 = srcDirPathList.at((index+4)%srcDirPathList.size());
//         QImage image4(src4);
//         QImage Image4 = ImageLabel(image4,ui->label_4);
//         ui->label_4->setPixmap(QPixmap::fromImage(Image4));
//         ui->label_4->setAlignment(Qt::AlignCenter);

//         QString src5 = srcDirPathList.at((index+5)%srcDirPathList.size());
//         QImage image5(src1);
//         QImage Image5 = ImageLabel(image5,ui->label_5);
//         ui->label_5->setPixmap(QPixmap::fromImage(Image5));
//         ui->label_5->setAlignment(Qt::AlignCenter);





//     }
   //右显示
//    if(isImage and event->x()<677 and event->x()>446 and event->y()<466 and event->y()>116){

//        index=qAbs(index-1);
//        int i = index%srcDirPathList.size();
//        //qDebug("%d",i);
//        QString srcDirPath = srcDirPathList.at(i);
//        QImage image(srcDirPath);
//        QImage Image=ImageLabel(image,ui->label);
//        ui->label->setPixmap(QPixmap::fromImage(Image));
//        ui->label->setAlignment(Qt::AlignCenter);




//        QString src1 = srcDirPathList.at(qAbs(index-1)%srcDirPathList.size());
//        QImage image1(src1);
//        QImage Image1 = ImageLabel(image1,ui->label_1);
//        ui->label_1->setPixmap(QPixmap::fromImage(Image1));
//        ui->label_1->setAlignment(Qt::AlignCenter);

//        QString src2 = srcDirPathList.at(qAbs(index-2)%srcDirPathList.size());
//        QImage image2(src2);
//        QImage Image2 = ImageLabel(image2,ui->label_2);
//        ui->label_2->setPixmap(QPixmap::fromImage(Image2));
//        ui->label_2->setAlignment(Qt::AlignCenter);

//        QString src3 = srcDirPathList.at(qAbs(index-3)%srcDirPathList.size());
//        QImage image3(src3);
//        QImage Image3 = ImageLabel(image3,ui->label_3);
//        ui->label_3->setPixmap(QPixmap::fromImage(Image3));
//        ui->label_3->setAlignment(Qt::AlignCenter);

//        QString src4 = srcDirPathList.at(qAbs(index-4)%srcDirPathList.size());
//        QImage image4(src4);
//        QImage Image4 = ImageLabel(image4,ui->label_4);
//        ui->label_4->setPixmap(QPixmap::fromImage(Image4));
//        ui->label_4->setAlignment(Qt::AlignCenter);

//        QString src5 = srcDirPathList.at(qAbs(index-5)%srcDirPathList.size());
//        QImage image5(src1);
//        QImage Image5 = ImageLabel(image5,ui->label_5);
//        ui->label_5->setPixmap(QPixmap::fromImage(Image5));
//        ui->label_5->setAlignment(Qt::AlignCenter);




//     }

}

//灰度显示
void MainWindow::on_toGray_clicked()
{

    if(isVideo){function = 1;}


   if(srcDirPathList.size()!=0){
   SQF s;
   index=qAbs(index);
   int i = index%srcDirPathList.size();
   QString filename = srcDirPathList[i];
   QImage image(filename);
   QImage change = s.toGray(image);
     change = ImageLabel(change,ui->label);
   ui->label->setPixmap(QPixmap::fromImage(change));
   ui->label->setAlignment(Qt::AlignCenter);
    }
}
//二值化

void MainWindow::on_toBlack_clicked()
{
    if(isVideo){function = 2;}
    if(srcDirPathList.size()!=0){
    SQF s;
    index=qAbs(index);
    int i = index%srcDirPathList.size();
    QString filename = srcDirPathList[i];
    QImage image(filename);
    QImage change = s.toBlack(image,100);
      change = ImageLabel(change,ui->label);
    ui->label->setPixmap(QPixmap::fromImage(change));
    ui->label->setAlignment(Qt::AlignCenter);
    }
}
//均值化

void MainWindow::on_toAvg_clicked()
{
   if(isVideo){function = 3;}
  if(srcDirPathList.size()!=0){
    SQF s;
    index=qAbs(index);
    int i = index%srcDirPathList.size();
    QString filename = srcDirPathList[i];
    QImage image(filename);
    QImage change = s.toAvg(image,3);
      change = ImageLabel(change,ui->label);
    ui->label->setPixmap(QPixmap::fromImage(change));
    ui->label->setAlignment(Qt::AlignCenter);
  }
}
//伽马




//二级阈值调节
void MainWindow::on_horizontalSlider_valueChanged(int value)
{
    if(isVideo){
        two_Value = value;
    }//视频阈值调节


    if(srcDirPathList.size()!=0){
    SQF s;
    index=qAbs(index);
    int i = index%srcDirPathList.size();
    QString filename = srcDirPathList[i];
    QImage image(filename);
    QImage change = s.toBlack(image,value);
      change = ImageLabel(change,ui->label);
    ui->label->setPixmap(QPixmap::fromImage(change));
    ui->label->setAlignment(Qt::AlignCenter);
    }
}

//均值变换
void MainWindow::on_spinBox_valueChanged(int arg1)
{
    if(isVideo){
      Avg = arg1;
    }//视频滤波调节

    if(srcDirPathList.size()!=0){
      SQF s;
      index=qAbs(index);
      int i = index%srcDirPathList.size();
      QString filename = srcDirPathList[i];
      QImage image(filename);
      QImage change = s.toAvg(image,arg1);
        change = ImageLabel(change,ui->label);
      ui->label->setPixmap(QPixmap::fromImage(change));
      ui->label->setAlignment(Qt::AlignCenter);
    }
}



//图片gamma
void MainWindow::on_toGamma_clicked()
{
    if(isVideo){function = 4;}
    if(srcDirPathList.size()!=0){
    SQF s;
    index=qAbs(index);
    int i = index%srcDirPathList.size();
    QString filename = srcDirPathList[i];
    QImage image(filename);
    QImage change = s.toGamma(image,1.2);
      change = ImageLabel(change,ui->label);
    ui->label->setPixmap(QPixmap::fromImage(change));
    ui->label->setAlignment(Qt::AlignCenter);
    }
}

//伽马值整体调节
void MainWindow::on_horizontalSlider_2_valueChanged(int value)
{
    if(isVideo){
     gamma_value = 0.5+value/50.0;
    }
    if(srcDirPathList.size()!=0){
    SQF s;
    index=qAbs(index);
    int i = index%srcDirPathList.size();
    QString filename = srcDirPathList[i];
    double v=0.5;
    double a = value/50.0;
    QImage image(filename);
    QImage change = s.toGamma(image,v+a);
      change = ImageLabel(change,ui->label);
    ui->label->setPixmap(QPixmap::fromImage(change));
    ui->label->setAlignment(Qt::AlignCenter);
    }
}
//伽马值R(红值)
void MainWindow::on_horizontalSlider_R_valueChanged(int value)
{
    if(isVideo){
      r = value/50.0;
    }
    if(srcDirPathList.size()!=0){
    SQF s;
    index=qAbs(index);
    int i = index%srcDirPathList.size();
    QString filename = srcDirPathList[i];
    double a = value/50.0;
    R = a;
    QImage image(filename);
    QImage change = s.toGammA(image,R,G,B);
      change = ImageLabel(change,ui->label);
    ui->label->setPixmap(QPixmap::fromImage(change));
    ui->label->setAlignment(Qt::AlignCenter);
    }
}
//伽马值G(绿值)
void MainWindow::on_horizontalSlider_G_valueChanged(int value)
{
    if(isVideo){
      g = value/50.0;
    }
    if(srcDirPathList.size()!=0){
    SQF s;
    index=qAbs(index);
    int i = index%srcDirPathList.size();
    QString filename = srcDirPathList[i];
    double v=0.5;
    double a = value/50.0;
    G = a;
    QImage image(filename);
    QImage change = s.toGammA(image,R,G,B);
      change = ImageLabel(change,ui->label);
    ui->label->setPixmap(QPixmap::fromImage(change));
    ui->label->setAlignment(Qt::AlignCenter);
    }
}
//伽马值B(蓝值)
void MainWindow::on_horizontalSlider_B_valueChanged(int value)
{
    if(isVideo){
      b = value/50.0;
    }
    if(srcDirPathList.size()!=0){
    SQF s;
    index=qAbs(index);
    int i = index%srcDirPathList.size();
    QString filename = srcDirPathList[i];
    double v=0.5;
    double a = value/50.0;
    B = a;
    QImage image(filename);
    QImage change = s.toGammA(image,R,G,B);
      change = ImageLabel(change,ui->label);
    ui->label->setPixmap(QPixmap::fromImage(change));
    ui->label->setAlignment(Qt::AlignCenter);
    }
}

//保存图片
void MainWindow::on_save_clicked()
{
    QImage image = ui->label->pixmap()->toImage();
    QString filename = QFileDialog::getSaveFileName(this,tr("Save Image"),"",tr("Images (*.png *.bmp *.jpg)"));
    image.save(filename);
}

//图片边缘检测
void MainWindow::on_Border_clicked()
{
    if(isVideo){
        function =5;
    }
    if(srcDirPathList.size()!=0){
    SQF s;
    index=qAbs(index);
    int i = index%srcDirPathList.size();
    QString filename = srcDirPathList[i];
    QImage image(filename);
    QImage change = s.sobelEdgeDect(image);
      change = ImageLabel(change,ui->label);
    ui->label->setPixmap(QPixmap::fromImage(change));
    ui->label->setAlignment(Qt::AlignCenter);
    }
}

//打开文件
void MainWindow::on_action_O_triggered()
{

    //将播放器停止
   player->stop();
   P->stop();
   isVideo=false;//关闭视频调节
   function = 0;//方法值归零
   ui->stackedWidget->setCurrentIndex(0);

   QStringList srcDirPathListS = QFileDialog::getOpenFileNames(this,tr("选择图像"),"",tr("Images (*.png *.bmp *.jpg)"));
     //for(int i=0;i<srcDirPathList.size();i++){

    if(srcDirPathListS.size()!=0){
        srcDirPathList =srcDirPathListS;
        srcDirPathListS.clear();
         index =0;
         QString srcDirPath = srcDirPathList.at(index);
         QImage image(srcDirPath);
         QImage Image=ImageLabel(image,ui->label);
         ui->label->setPixmap(QPixmap::fromImage(Image));
         ui->label->setAlignment(Qt::AlignCenter);
         //有图片触发事件
         isImage=true;



             QString src1 = srcDirPathList.at((index+1)%srcDirPathList.size());
             QImage image1(src1);
             QImage Image1 = ImageLabel(image1,ui->label_1);
             ui->label_1->setPixmap(QPixmap::fromImage(Image1));
             ui->label_1->setAlignment(Qt::AlignCenter);
qDebug("%d",qAbs((index+1)%srcDirPath.size()));
             QString src2 = srcDirPathList.at((index+2)%srcDirPathList.size());
             QImage image2(src2);
             QImage Image2 = ImageLabel(image2,ui->label_2);
             ui->label_2->setPixmap(QPixmap::fromImage(Image2));
             ui->label_2->setAlignment(Qt::AlignCenter);
qDebug("%d",qAbs((index+2)%srcDirPath.size()));
             QString src3 = srcDirPathList.at((index+3)%srcDirPathList.size());
             QImage image3(src3);
             QImage Image3 = ImageLabel(image3,ui->label_3);
             ui->label_3->setPixmap(QPixmap::fromImage(Image3));
             ui->label_3->setAlignment(Qt::AlignCenter);
qDebug("%d",qAbs((index+3)%srcDirPath.size()));
             QString src4 = srcDirPathList.at((index+4)%srcDirPathList.size());
             QImage image4(src4);
             QImage Image4 = ImageLabel(image4,ui->label_4);
             ui->label_4->setPixmap(QPixmap::fromImage(Image4));
             ui->label_4->setAlignment(Qt::AlignCenter);
qDebug("%d",qAbs((index+4)%srcDirPath.size()));
             QString src5 = srcDirPathList.at((index+5)%srcDirPathList.size());
             QImage image5(src1);
             QImage Image5 = ImageLabel(image5,ui->label_5);
             ui->label_5->setPixmap(QPixmap::fromImage(Image5));
             ui->label_5->setAlignment(Qt::AlignCenter);
qDebug("%d",qAbs((index+5)%(srcDirPath.size()-1)));
    }

}

//打开视频文件
void MainWindow::on_action_V_triggered()
{
      P->stop();
     isImage = false;//图片操作关掉
     QString srcVideoPath = QFileDialog::getOpenFileName(this,tr("选择视频"),"",tr("Video (*.WMV *.mp4 *.rmvb)"));
     ui->stackedWidget->setCurrentIndex(1);
     if(srcVideoPath!=""){
         videoSrcDir = srcVideoPath;
         player->setMedia(QUrl::fromLocalFile(videoSrcDir));
         player->play();

     }
}

void MainWindow::on_VideohorizontalSlider_sliderMoved(int position)
{
    // 设置播放进度
       player->setPosition(position * 1000);
}

void MainWindow::updatePosition(qint64 position){
    ui->VideohorizontalSlider->setMaximum(player->duration() / 1000);
    ui->VideohorizontalSlider->setValue(position / 1000);
}



//工具栏黑白
void MainWindow::on_action_G_triggered()
{
    if(isVideo){function = 1;}
    if(srcDirPathList.size()!=0){
   SQF s;
   index=qAbs(index);
   int i = index%srcDirPathList.size();
   QString filename = srcDirPathList[i];
   QImage image(filename);
   QImage change = s.toGray(image);
     change = ImageLabel(change,ui->label);
   ui->label->setPixmap(QPixmap::fromImage(change));
   ui->label->setAlignment(Qt::AlignCenter);
    }
}
//工具栏二值化
void MainWindow::on_action_T_triggered()
{
    if(isVideo){function = 2;}
    if(srcDirPathList.size()!=0){
    SQF s;
    index=qAbs(index);
    int i = index%srcDirPathList.size();
    QString filename = srcDirPathList[i];
    QImage image(filename);
    QImage change = s.toBlack(image,100);
      change = ImageLabel(change,ui->label);
    ui->label->setPixmap(QPixmap::fromImage(change));
    ui->label->setAlignment(Qt::AlignCenter);
    }
}
//工具栏滤波
void MainWindow::on_action_L_triggered()
{
    if(isVideo){function = 3;}
    if(srcDirPathList.size()!=0){
      SQF s;
      index=qAbs(index);
      int i = index%srcDirPathList.size();
      QString filename = srcDirPathList[i];
      QImage image(filename);
      QImage change = s.toAvg(image,3);
        change = ImageLabel(change,ui->label);
      ui->label->setPixmap(QPixmap::fromImage(change));
      ui->label->setAlignment(Qt::AlignCenter);
    }
}
//工具栏gamma
void MainWindow::on_action_Y_triggered()
{
    if(isVideo){function = 4;}
    if(srcDirPathList.size()!=0){
    SQF s;
    index=qAbs(index);
    int i = index%srcDirPathList.size();
    QString filename = srcDirPathList[i];
    QImage image(filename);
    QImage change = s.toGamma(image,1.2);
      change = ImageLabel(change,ui->label);
    ui->label->setPixmap(QPixmap::fromImage(change));
    ui->label->setAlignment(Qt::AlignCenter);
    }

}
//工具栏边缘检测
void MainWindow::on_action_B_triggered()
{
    if(isVideo){function = 5;}
    if(srcDirPathList.size()!=0){
    SQF s;
    index=qAbs(index);
    int i = index%srcDirPathList.size();
    QString filename = srcDirPathList[i];
    QImage image(filename);
    QImage change = s.sobelEdgeDect(image);
      change = ImageLabel(change,ui->label);
    ui->label->setPixmap(QPixmap::fromImage(change));
    ui->label->setAlignment(Qt::AlignCenter);
    }
}


//播放暂停
void MainWindow::on_pause_btn_clicked()
{
   player-> pause();
}
//播放开始
void MainWindow::on_play_btn_clicked()
{
    player->play();
}

//中英文切换
void MainWindow::on_action_E_triggered()
{

    if(Translator){
        translator.load("../task/TRANSLATIONS.qm");
        qApp->installTranslator(&translator);
        ui->retranslateUi(this);
        Translator=!Translator;
    }else {
        //qApp->removeTranslator(&translator);
        translator.load("../task/English.qm");
        qApp->installTranslator(&translator);
        ui->retranslateUi(this);
        Translator=!Translator;
}

}
//视频处理

void MainWindow::ProcessFrame(QVideoFrame &frame)
{

    frame.map(QAbstractVideoBuffer::ReadOnly);
    QImage recvImage(frame.bits(), frame.width(), frame.height(), QVideoFrame::imageFormatFromPixelFormat(frame.pixelFormat()));
      SQF s;

      if(function==1){
        recvImage = s.toGray(recvImage);
      }else if(function ==2) {
        recvImage = s.toBlack(recvImage,100);
      }else if (function==3) {
        recvImage = s.toAvg(recvImage,3);
      }else if (function==4) {
       recvImage = s.toGamma(recvImage,1.2);
      }else if (function==5) {
       recvImage = s.sobelEdgeDect(recvImage);
      }else if (function==6) {
       recvImage = s.toBlack(recvImage,two_Value); //开启阈值调节
      }else if (function==7) {
       recvImage=s.toAvg(recvImage,Avg);
      }else if (function==8) {
       recvImage = s.toGamma(recvImage,gamma_value);
      }else if (function==9) {
       recvImage = s.toGammA(recvImage,r,g,b);
      }else if (function==0) {
       //recvImage = recvImage;
}
   recvImage = ImageLabel(recvImage,ui->label);

   if(C){
      QString filename = QFileDialog::getSaveFileName(this,tr("Save Image"),"",tr("Images (*.png *.bmp *.jpg)"));
     QImage change1 = ImageLabel(recvImage,ui->show_cut);
     ui->show_cut->setPixmap(QPixmap::fromImage(change1));
     ui->show_cut->setAlignment(Qt::AlignCenter);
     change1.save(filename);
     C = false;
   }
    ui->label->setPixmap(QPixmap::fromImage(recvImage));   //图片大小自适应
    ui->label->setAlignment(Qt::AlignCenter);
    ui->label_VideoWidget->setPixmap(QPixmap::fromImage(recvImage));

    frame.unmap();
}

//视频修改开始
void MainWindow::on_test_clicked()
{
    player->stop();
    isVideo = true; //打开视频调节
    ui->stackedWidget->setCurrentIndex(2);
    P->setMedia(QUrl::fromLocalFile(videoSrcDir));
    P->play();//——————————————————————————————————
}

//开启阈值调节
void MainWindow::on_twoValue_clicked()
{
    if(isVideo){
      function = 6;
    }
}
//视频滤波调节 很卡
void MainWindow::on_video_Avg_clicked()
{
    if(isVideo){
        function = 7;
    }
}
//视频伽马
void MainWindow::on_video_gamma_clicked()
{
    if(isVideo){
        function = 8;
    }
}
//视频RGB调节
void MainWindow::on_video_RGB_clicked()
{
    if(isVideo){
        function = 9;
    }
}

void MainWindow::on_return_btn_clicked()
{
    if(isVideo){
        function = 9;
    }
}

//截图功能
void MainWindow::on_cut_clicked()
{
    if(isVideo){
        C = true;
    }
}
