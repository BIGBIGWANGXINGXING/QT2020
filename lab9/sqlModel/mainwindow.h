#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class QSqlTableModel;
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
    void on_putChangeButton_clicked();

    void on_cancleChangeButton_clicked();

    void on_selectButton_clicked();

    void on_showAllButton_clicked();

    void on_upbyidButton_clicked();

    void on_downbyidButton_clicked();

    void on_deleteButton_clicked();

    void on_insertButton_clicked();

private:
    Ui::MainWindow *ui;
    QSqlTableModel *model;
};

#endif // MAINWINDOW_H
