/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_6;
    QLabel *img;
    QPushButton *pushButton;
    QVBoxLayout *verticalLayout;
    QLabel *label_7;
    QTextEdit *textEdit_2;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QWidget *widget1;
    QFormLayout *formLayout_2;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_4;
    QComboBox *comboBox;
    QLabel *label_3;
    QTextEdit *textEdit;
    QLabel *label_5;
    QLineEdit *lineEdit_3;
    QLabel *label;
    QLabel *label_8;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(681, 455);
        Dialog->setAutoFillBackground(false);
        widget = new QWidget(Dialog);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(380, 20, 261, 411));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_6 = new QLabel(widget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMinimumSize(QSize(0, 0));
        label_6->setMaximumSize(QSize(40, 16777215));

        horizontalLayout_7->addWidget(label_6);

        img = new QLabel(widget);
        img->setObjectName(QStringLiteral("img"));
        img->setMaximumSize(QSize(50, 50));

        horizontalLayout_7->addWidget(img);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_7->addWidget(pushButton);


        verticalLayout_2->addLayout(horizontalLayout_7);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_7 = new QLabel(widget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setMinimumSize(QSize(0, 30));

        verticalLayout->addWidget(label_7);

        textEdit_2 = new QTextEdit(widget);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));

        verticalLayout->addWidget(textEdit_2);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_6->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout_6->addWidget(pushButton_3);


        verticalLayout_2->addLayout(horizontalLayout_6);

        widget1 = new QWidget(Dialog);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(20, 20, 301, 371));
        formLayout_2 = new QFormLayout(widget1);
        formLayout_2->setSpacing(6);
        formLayout_2->setContentsMargins(11, 11, 11, 11);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(widget1);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setMaximumSize(QSize(251, 16777215));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, lineEdit);

        label_2 = new QLabel(widget1);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_2);

        lineEdit_2 = new QLineEdit(widget1);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setMaximumSize(QSize(256, 16777215));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, lineEdit_2);

        label_4 = new QLabel(widget1);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_4);

        comboBox = new QComboBox(widget1);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setContextMenuPolicy(Qt::DefaultContextMenu);
        comboBox->setAutoFillBackground(true);

        formLayout_2->setWidget(4, QFormLayout::FieldRole, comboBox);

        label_3 = new QLabel(widget1);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout_2->setWidget(6, QFormLayout::LabelRole, label_3);

        textEdit = new QTextEdit(widget1);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setMaximumSize(QSize(263, 16777215));

        formLayout_2->setWidget(6, QFormLayout::FieldRole, textEdit);

        label_5 = new QLabel(widget1);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout_2->setWidget(8, QFormLayout::LabelRole, label_5);

        lineEdit_3 = new QLineEdit(widget1);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setMaximumSize(QSize(263, 16777215));

        formLayout_2->setWidget(8, QFormLayout::FieldRole, lineEdit_3);

        label = new QLabel(widget1);
        label->setObjectName(QStringLiteral("label"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label);

        label_8 = new QLabel(widget1);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setMinimumSize(QSize(0, 30));
        label_8->setFrameShape(QFrame::StyledPanel);
        label_8->setFrameShadow(QFrame::Plain);
        label_8->setTextFormat(Qt::AutoText);

        formLayout_2->setWidget(10, QFormLayout::SpanningRole, label_8);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(lineEdit);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(lineEdit, lineEdit_2);
        QWidget::setTabOrder(lineEdit_2, comboBox);
        QWidget::setTabOrder(comboBox, textEdit);
        QWidget::setTabOrder(textEdit, lineEdit_3);
        QWidget::setTabOrder(lineEdit_3, pushButton);
        QWidget::setTabOrder(pushButton, textEdit_2);
        QWidget::setTabOrder(textEdit_2, pushButton_2);
        QWidget::setTabOrder(pushButton_2, pushButton_3);

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0));
        label_6->setText(QApplication::translate("Dialog", "\345\244\264\345\203\217:", 0));
        img->setText(QString());
        pushButton->setText(QApplication::translate("Dialog", "\346\233\264\346\226\260", 0));
        label_7->setText(QApplication::translate("Dialog", "\344\270\252\344\272\272\350\257\264\346\230\216:", 0));
        pushButton_2->setText(QApplication::translate("Dialog", "\347\241\256\345\256\232", 0));
        pushButton_3->setText(QApplication::translate("Dialog", "\345\217\226\346\266\210", 0));
        label_2->setText(QApplication::translate("Dialog", "\345\247\223\345\220\215(N):", 0));
        label_4->setText(QApplication::translate("Dialog", "\346\200\247\345\210\253(S):", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("Dialog", "\345\245\263", 0)
         << QApplication::translate("Dialog", "\347\224\267", 0)
        );
        label_3->setText(QApplication::translate("Dialog", "\351\203\250\351\227\250(D):", 0));
        label_5->setText(QApplication::translate("Dialog", "\345\271\264\351\276\204(A):", 0));
        label->setText(QApplication::translate("Dialog", "\347\224\250\346\210\267\345\220\215(&I):", 0));
        label_8->setText(QApplication::translate("Dialog", "\345\244\207\346\263\250\357\274\232", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
