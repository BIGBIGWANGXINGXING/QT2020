#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>


class QSqlTableModel;
namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void on_sellBtn_clicked();

    void on_buyBtn_clicked();

    void on_addBtn_clicked();

    void on_queryBtn_clicked();

    void on_passwordBtn_clicked();


    void on_sellTypeComboBox_currentIndexChanged(QString type);

    void on_goodsTypeComboBox_currentIndexChanged(QString type);

    void on_newTypeComboBox_currentIndexChanged(QString type);

    void on_queryTypeComboBox_currentIndexChanged(const QString type);


    void on_sellBrandComboBox_currentIndexChanged(QString brand);

    void on_goodsBrandComboBox_currentIndexChanged(QString brand);

    void on_newBrandLineEdit_textChanged(QString str);


    void on_sellNumSpinBox_valueChanged(int value);

    void on_goodsNumSpinBox_valueChanged(int value);

    void on_newNumSpinBox_valueChanged(int value);

    void on_newPriceSpinBox_valueChanged(int value);



    void on_sellOkBtn_clicked();

    void on_goodsOkBtn_clicked();

    void on_newOkBtn_clicked();

    void on_sellCancelBtn_clicked();

    void on_goodsCancelBtn_clicked();

    void on_newCancelBtn_clicked();

    void on_queryPushButton_clicked();

    void on_changePwdBtn_clicked();







private:
    Ui::Widget *ui;
    QSqlTableModel *model;
};

#endif // WIDGET_H
