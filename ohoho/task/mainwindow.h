#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QLabel>
#include <QImage>
#include <QMouseEvent>
#include "sqf.h"
#include <QTranslator>
#include <QAbstractVideoSurface>   //QMediaPlayer + QAbstractVideoSurface 提取视频帧
#include "videosurface.h"
#include "assistant.h"
//视频类前置声明
class QMediaPlayer;
class QVideoWidget;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    //void on_openimage_clicked();
    QImage ImageLabel(QImage  qimage,QLabel *qLabel);
    void mouseMoveEvent(QMouseEvent *event);
    void mousePressEvent(QMouseEvent *event);
    void on_toGray_clicked();

    void on_toBlack_clicked();

    void on_toAvg_clicked();

    void on_horizontalSlider_valueChanged(int value);

    void on_spinBox_valueChanged(int arg1);

    void on_toGamma_clicked();

    void on_horizontalSlider_2_valueChanged(int value);

    void on_horizontalSlider_R_valueChanged(int value);

    void on_horizontalSlider_G_valueChanged(int value);

    void on_horizontalSlider_B_valueChanged(int value);

    void on_save_clicked();

    void on_Border_clicked();

    void on_action_O_triggered();

    void on_action_V_triggered();

    void on_VideohorizontalSlider_sliderMoved(int position);

    void updatePosition(qint64 position);

    void on_action_G_triggered();

    void on_action_T_triggered();

    void on_action_L_triggered();

    void on_action_Y_triggered();

    void on_action_B_triggered();

    void on_pause_btn_clicked();

    void on_play_btn_clicked();

    void on_action_E_triggered();

    void ProcessFrame(QVideoFrame &frame);
    void on_test_clicked();

    void on_twoValue_clicked();

    void on_video_Avg_clicked();

    void on_video_gamma_clicked();

    void on_video_RGB_clicked();

    void startAssistant();

    void on_return_btn_clicked();

    void on_cut_clicked();

private:
    Ui::MainWindow *ui;
    bool Translator = true;


    QTranslator translator;

    int function = 0;
    bool isVideo = false; //切换到视频模式

    bool isImage = false;
    QStringList srcDirPathList;//图片地址组
    int index =0;//地址游标
    double R =0; //gamma R
    double G =0; //gamma G
    double B =0; //gamma B
    int two_Value = 0;//二值化阈值
    int  Avg = 3;//均值滤波值
    double gamma_value = 0.5;//视频伽马调节
    double r=0;//视频r;
    double g=0;//视频g;
    double b=0;//视频b;
    bool C = false;//打开截图功能
    QString videoSrcDir = "../task/video.wmv";
    QMediaPlayer *player;
    QMediaPlayer *P;
    QVideoWidget *videoWidget;
    Assistant *assistant;

};

#endif // MAINWINDOW_H
