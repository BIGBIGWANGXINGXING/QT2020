#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include "bmpimg.h"



namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_2_clicked();

private slots:
    void on_filenew_triggered();

    void on_fileopen_triggered();

    void on_pushButton_clicked();

    void on_change_2_triggered();



    void on_change_clicked();

    void on_filesave_triggered();

    void on_changeToGray_clicked();

    void on_changeFilter_clicked();

    void on_brightButton_clicked();

    void on_birghtness_valueChanged(int value);

    void on_contrast_valueChanged(int value);

    void on_gaussButton_clicked();

    void on_sobelButton_clicked();

    void on_cannyButton_clicked();

    void on_overButton_clicked();

    void on_signButton_clicked();

    void on_saveimgButton_clicked();

    void on_erButton_clicked();

    void on_nSlider_valueChanged(int value);

    void on_gammaButton_clicked();

    void on_horizontalSlider_valueChanged(int value);

    void on_openVideoButton_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
