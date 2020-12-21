#include "standarddialog.h"
#include "ui_standarddialog.h"
#include <QFileDialog>
#include <QColorDialog>
#include <QFontDialog>

StandardDialog::StandardDialog(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::StandardDialog)
{
    ui->setupUi(this);
}

StandardDialog::~StandardDialog()
{
    delete ui;
}

void StandardDialog::slotOpenFileDlg()
{
     QString s=QFileDialog::getOpenFileName(this,"open file dialog", "/","C++files(*.cpp);;C files(*.c);;Head files(*.h)");
     ui->fileLineEdit->setText(s.toLatin1());
}

void StandardDialog::slotOpenColorDlg()
{
  QColor color = QColorDialog::getColor(Qt::blue);
  if(color.isValid())
    {
      ui->colorFrame->setPalette(QPalette(color));
    }
}

void StandardDialog::on_fontPushButton_clicked()
{
    bool ok;
    QFont font = QFontDialog::getFont(&ok);
    if(ok)
      {
        ui->fontLineEdit->setFont(font);
      }
}


void StandardDialog::on_pushButton_clicked()
{
    this->slotOpenFileDlg();
}

void StandardDialog::on_pushButton_2_clicked()
{

    this->slotOpenColorDlg();
}

void StandardDialog::on_pushButton_3_clicked()
{
    this->on_fontPushButton_clicked();
}
