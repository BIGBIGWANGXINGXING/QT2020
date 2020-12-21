#ifndef MBOXDIALOG_H
#define MBOXDIALOG_H

#include <QDialog>

namespace Ui {
class MBoxDialog;
}

class MBoxDialog : public QDialog
{
    Q_OBJECT

public:
    explicit MBoxDialog(QWidget *parent = 0);
    ~MBoxDialog();

private slots:
    void on_QuestionBtn_clicked();

    void on_InformationBtn_clicked();

    void on_WarningBtn_clicked();

    void on_CriticalBtn_clicked();

    void on_AboutQTBtn_clicked();

    void on_AboutBtn_clicked();

    void on_CustomBtn_clicked();

private:
    Ui::MBoxDialog *ui;
};

#endif // MBOXDIALOG_H
