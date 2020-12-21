/********************************************************************************
** Form generated from reading UI file 'geometry.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GEOMETRY_H
#define UI_GEOMETRY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Geometry
{
public:
    QLabel *label;
    QLabel *y;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *xlabel;
    QLabel *ylabel;
    QLabel *poslabel;
    QLabel *frameGeolabel;
    QLabel *geolabel;
    QLabel *sizelabel;
    QLabel *widthlabel;
    QLabel *heightlabel;
    QLabel *rectlabel;

    void setupUi(QDialog *Geometry)
    {
        if (Geometry->objectName().isEmpty())
            Geometry->setObjectName(QStringLiteral("Geometry"));
        Geometry->resize(400, 325);
        label = new QLabel(Geometry);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 40, 54, 12));
        y = new QLabel(Geometry);
        y->setObjectName(QStringLiteral("y"));
        y->setGeometry(QRect(20, 70, 54, 12));
        label_3 = new QLabel(Geometry);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 100, 101, 16));
        label_4 = new QLabel(Geometry);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 130, 54, 12));
        label_5 = new QLabel(Geometry);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 160, 71, 16));
        label_6 = new QLabel(Geometry);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 190, 54, 12));
        label_7 = new QLabel(Geometry);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(20, 280, 54, 12));
        label_8 = new QLabel(Geometry);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(20, 250, 54, 12));
        label_9 = new QLabel(Geometry);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(20, 220, 61, 16));
        xlabel = new QLabel(Geometry);
        xlabel->setObjectName(QStringLiteral("xlabel"));
        xlabel->setGeometry(QRect(170, 40, 54, 12));
        ylabel = new QLabel(Geometry);
        ylabel->setObjectName(QStringLiteral("ylabel"));
        ylabel->setGeometry(QRect(170, 70, 54, 12));
        poslabel = new QLabel(Geometry);
        poslabel->setObjectName(QStringLiteral("poslabel"));
        poslabel->setGeometry(QRect(170, 130, 54, 12));
        frameGeolabel = new QLabel(Geometry);
        frameGeolabel->setObjectName(QStringLiteral("frameGeolabel"));
        frameGeolabel->setGeometry(QRect(170, 100, 111, 16));
        geolabel = new QLabel(Geometry);
        geolabel->setObjectName(QStringLiteral("geolabel"));
        geolabel->setGeometry(QRect(170, 160, 111, 16));
        sizelabel = new QLabel(Geometry);
        sizelabel->setObjectName(QStringLiteral("sizelabel"));
        sizelabel->setGeometry(QRect(170, 280, 101, 16));
        widthlabel = new QLabel(Geometry);
        widthlabel->setObjectName(QStringLiteral("widthlabel"));
        widthlabel->setGeometry(QRect(170, 190, 54, 12));
        heightlabel = new QLabel(Geometry);
        heightlabel->setObjectName(QStringLiteral("heightlabel"));
        heightlabel->setGeometry(QRect(170, 220, 54, 12));
        rectlabel = new QLabel(Geometry);
        rectlabel->setObjectName(QStringLiteral("rectlabel"));
        rectlabel->setGeometry(QRect(170, 250, 101, 16));

        retranslateUi(Geometry);

        QMetaObject::connectSlotsByName(Geometry);
    } // setupUi

    void retranslateUi(QDialog *Geometry)
    {
        Geometry->setWindowTitle(QApplication::translate("Geometry", "Dialog", 0));
        label->setText(QApplication::translate("Geometry", "x():", 0));
        y->setText(QApplication::translate("Geometry", "y():", 0));
        label_3->setText(QApplication::translate("Geometry", "frameGeometry():", 0));
        label_4->setText(QApplication::translate("Geometry", "pose():", 0));
        label_5->setText(QApplication::translate("Geometry", "geometry():", 0));
        label_6->setText(QApplication::translate("Geometry", "width():", 0));
        label_7->setText(QApplication::translate("Geometry", "size():", 0));
        label_8->setText(QApplication::translate("Geometry", "rect():", 0));
        label_9->setText(QApplication::translate("Geometry", "height():", 0));
        xlabel->setText(QString());
        ylabel->setText(QString());
        poslabel->setText(QString());
        frameGeolabel->setText(QString());
        geolabel->setText(QString());
        sizelabel->setText(QString());
        widthlabel->setText(QString());
        heightlabel->setText(QString());
        rectlabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Geometry: public Ui_Geometry {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GEOMETRY_H
