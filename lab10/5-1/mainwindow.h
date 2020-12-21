#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QLabel>
#include <QMenuBar>
#include <QSpinBox>
#include <QMainWindow>
#include <QToolButton>
#include <QColorDialog>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    void initMenuBar();
    void initToolBar();
    void initDocker();
    void initStatusBar();
    ~MainWindow();

private slots:
    void on_actionNew_N_triggered();

    void on_actionOpen_M_triggered();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_brightsld_valueChanged(int value);

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_action_triggered();

    void on_actionEnglish_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
