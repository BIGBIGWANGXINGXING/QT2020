#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QString>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);

    //输入的两个值
    double m_fNumber1 = 0;
    double m_fNumber2 = 0;
    double m_sum = 0;
    int m_istrle;
    int op[2];

    //保存的值
    QString m_str = "0";


    //总字符串
    QString data_line = "";

    //保存计算符号 +-*/=
    int m_iSign;

    //计算函数
    void SaveValue();
    void Calculator();


    //CFont m_oFont;

    ~MainWindow();

private slots:
    void on_num0_clicked();

    void on_num1_clicked();

    void on_num2_clicked();

    void on_num3_clicked();

    void on_num4_clicked();

    void on_num5_clicked();

    void on_num6_clicked();

    void on_num7_clicked();

    void on_num8_clicked();

    void on_num9_clicked();

    void on_add_clicked();

    void on_reduce_clicked();

    void on_multiply_clicked();

    void on_divice_clicked();

    void on_dot_clicked();

    void on_delete_2_clicked();

    void on_clear_clicked();

    void upDateTextEdit();

    void calculate();

    void on_equal_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
