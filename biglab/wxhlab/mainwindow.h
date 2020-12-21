#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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
//    void on_pushButton_clicked();

//    void on_pushButton_2_clicked();

//    void on_pushButton_3_clicked();

    void on_brightnessButton_clicked();

    void on_binarizationButton_clicked();

    void on_asciiButton_clicked();

    void on_gaussButton_clicked();

    void on_gammaButton_clicked();

    void on_filtrerButton_clicked();

    void on_openfile_triggered();

    void on_openfiles_triggered();

    void on_actionAbout_IMAGEW_triggered();

    void on_action_N_triggered();

    void on_action_3_triggered();

    void on_action_4_triggered();

    void on_birghtness_valueChanged(int value);

    void on_contrast_valueChanged(int value);

    void on_grayButton_clicked();

    void on_action_7_triggered();

    void on_nSlider_valueChanged(int value);

    void on_action_9_triggered();

    void on_cannyButton_clicked();

    void on_action_Canny_triggered();

    void on_sobelButton_clicked();

    void on_action_Sobel_triggered();

    void on_action_triggered();

    void on_horizontalSlider_valueChanged(int value);

    void on_action_10_triggered();

    void on_spinBox_valueChanged(int arg1);

    void on_action_6_triggered();

    void on_borderButton_clicked();

    void on_action_8_triggered();

    void on_actionASCII_triggered();


    
    void on_action_ascii_triggered();

    void on_savafile_triggered();

    void on_action_S_triggered();

    void on_videoButton_clicked();


    void on_action_2_triggered();

    void on_action_5_triggered();

    void on_action_L_triggered();

    void on_actionSmooth_triggered();

    void on_actionMosaic_triggered();

    void on_actionBinarization_triggered();

    void on_actionEdge_Detection_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
