#ifndef STANDARDDIALOG_H
#define STANDARDDIALOG_H

#include <QMainWindow>

namespace Ui {
class StandardDialog;
}

class StandardDialog : public QMainWindow
{
    Q_OBJECT

public:
    explicit StandardDialog(QWidget *parent = 0);
    ~StandardDialog();

private:
    Ui::StandardDialog *ui;
private slots:
    void slotOpenFileDlg();
    void slotOpenColorDlg();
    void on_fontPushButton_clicked();

    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
};

#endif // STANDARDDIALOG_H
