/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_T;
    QAction *action_S;
    QAction *action_P;
    QAction *action_A;
    QAction *action_Y;
    QAction *action_I;
    QAction *action_B;
    QAction *action_U;
    QAction *action_D;
    QAction *action_V;
    QAction *action_A_2;
    QAction *action_C;
    QAction *action_V_2;
    QAction *action_I_2;
    QAction *action_E;
    QAction *action_N;
    QAction *action_L;
    QAction *action_M;
    QAction *action_V_3;
    QAction *action_mpg_F;
    QAction *action_1_100_km_U;
    QWidget *centralWidget;
    QTextEdit *textEdit;
    QWidget *widget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *delete_2;
    QPushButton *clear;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QPushButton *pushButton_15;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *num7;
    QPushButton *num8;
    QPushButton *num9;
    QPushButton *divice;
    QPushButton *pushButton_30;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *num4;
    QPushButton *num5;
    QPushButton *num6;
    QPushButton *multiply;
    QPushButton *pushButton_20;
    QPushButton *equal;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *num0;
    QPushButton *dot;
    QPushButton *add;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *num1;
    QPushButton *num2;
    QPushButton *num3;
    QPushButton *reduce;
    QMenuBar *menuBar;
    QMenu *menu_V;
    QMenu *menu_W;
    QMenu *menu_E;
    QMenu *menu_H_2;
    QMenu *menu_H;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(380, 450);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(380, 450));
        MainWindow->setMaximumSize(QSize(380, 450));
        QFont font;
        font.setFamily(QStringLiteral("Adobe Arabic"));
        font.setPointSize(6);
        MainWindow->setFont(font);
        MainWindow->setStyleSheet(QStringLiteral(""));
        action_T = new QAction(MainWindow);
        action_T->setObjectName(QStringLiteral("action_T"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/img/img/selected.png"), QSize(), QIcon::Selected, QIcon::On);
        action_T->setIcon(icon);
        action_S = new QAction(MainWindow);
        action_S->setObjectName(QStringLiteral("action_S"));
        action_P = new QAction(MainWindow);
        action_P->setObjectName(QStringLiteral("action_P"));
        action_A = new QAction(MainWindow);
        action_A->setObjectName(QStringLiteral("action_A"));
        action_Y = new QAction(MainWindow);
        action_Y->setObjectName(QStringLiteral("action_Y"));
        action_I = new QAction(MainWindow);
        action_I->setObjectName(QStringLiteral("action_I"));
        action_B = new QAction(MainWindow);
        action_B->setObjectName(QStringLiteral("action_B"));
        action_B->setIcon(icon);
        action_U = new QAction(MainWindow);
        action_U->setObjectName(QStringLiteral("action_U"));
        action_D = new QAction(MainWindow);
        action_D->setObjectName(QStringLiteral("action_D"));
        action_V = new QAction(MainWindow);
        action_V->setObjectName(QStringLiteral("action_V"));
        action_A_2 = new QAction(MainWindow);
        action_A_2->setObjectName(QStringLiteral("action_A_2"));
        action_C = new QAction(MainWindow);
        action_C->setObjectName(QStringLiteral("action_C"));
        action_C->setEnabled(true);
        action_V_2 = new QAction(MainWindow);
        action_V_2->setObjectName(QStringLiteral("action_V_2"));
        action_I_2 = new QAction(MainWindow);
        action_I_2->setObjectName(QStringLiteral("action_I_2"));
        action_I_2->setEnabled(false);
        action_E = new QAction(MainWindow);
        action_E->setObjectName(QStringLiteral("action_E"));
        action_E->setEnabled(false);
        action_N = new QAction(MainWindow);
        action_N->setObjectName(QStringLiteral("action_N"));
        action_N->setEnabled(false);
        action_L = new QAction(MainWindow);
        action_L->setObjectName(QStringLiteral("action_L"));
        action_L->setEnabled(false);
        action_M = new QAction(MainWindow);
        action_M->setObjectName(QStringLiteral("action_M"));
        action_V_3 = new QAction(MainWindow);
        action_V_3->setObjectName(QStringLiteral("action_V_3"));
        action_mpg_F = new QAction(MainWindow);
        action_mpg_F->setObjectName(QStringLiteral("action_mpg_F"));
        action_1_100_km_U = new QAction(MainWindow);
        action_1_100_km_U->setObjectName(QStringLiteral("action_1_100_km_U"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setEnabled(true);
        centralWidget->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(239, 244, 255, 255), stop:0.136364 rgba(223, 233, 255, 255), stop:1 rgba(216, 226, 239, 255));"));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(20, 10, 341, 81));
        QFont font1;
        font1.setFamily(QStringLiteral("Consolas"));
        font1.setPointSize(22);
        font1.setBold(false);
        font1.setWeight(50);
        textEdit->setFont(font1);
        textEdit->setLayoutDirection(Qt::LeftToRight);
        textEdit->setAutoFillBackground(true);
        textEdit->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(207, 230, 255, 230), stop:1 rgba(255, 255, 255, 255));"));
        textEdit->setFrameShape(QFrame::StyledPanel);
        textEdit->setFrameShadow(QFrame::Sunken);
        textEdit->setLineWidth(1);
        textEdit->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit->setLineWrapMode(QTextEdit::NoWrap);
        textEdit->setReadOnly(true);
        textEdit->setTextInteractionFlags(Qt::NoTextInteraction);
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setEnabled(true);
        widget->setGeometry(QRect(21, 111, 341, 201));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_6 = new QPushButton(widget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy1);
        QFont font2;
        font2.setFamily(QStringLiteral("Adobe Arabic"));
        font2.setPointSize(18);
        font2.setBold(true);
        font2.setWeight(75);
        pushButton_6->setFont(font2);
        pushButton_6->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0, stop:0 rgba(227, 227, 227, 189), stop:0.142045 rgba(183, 192, 255, 255), stop:0.853107 rgba(209, 219, 255, 255), stop:1 rgba(255, 255, 255, 221));\n"
""));

        horizontalLayout->addWidget(pushButton_6);

        pushButton_7 = new QPushButton(widget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setEnabled(true);
        sizePolicy1.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy1);
        pushButton_7->setFont(font2);
        pushButton_7->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0, stop:0 rgba(227, 227, 227, 189), stop:0.142045 rgba(183, 192, 255, 255), stop:0.853107 rgba(209, 219, 255, 255), stop:1 rgba(255, 255, 255, 221));\n"
""));

        horizontalLayout->addWidget(pushButton_7);

        pushButton_8 = new QPushButton(widget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setEnabled(true);
        sizePolicy1.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy1);
        pushButton_8->setFont(font2);
        pushButton_8->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0, stop:0 rgba(227, 227, 227, 189), stop:0.142045 rgba(183, 192, 255, 255), stop:0.853107 rgba(209, 219, 255, 255), stop:1 rgba(255, 255, 255, 221));\n"
""));

        horizontalLayout->addWidget(pushButton_8);

        pushButton_9 = new QPushButton(widget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setEnabled(true);
        sizePolicy1.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy1);
        pushButton_9->setFont(font2);
        pushButton_9->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0, stop:0 rgba(227, 227, 227, 189), stop:0.142045 rgba(183, 192, 255, 255), stop:0.853107 rgba(209, 219, 255, 255), stop:1 rgba(255, 255, 255, 221));\n"
""));

        horizontalLayout->addWidget(pushButton_9);

        pushButton_10 = new QPushButton(widget);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setEnabled(true);
        sizePolicy1.setHeightForWidth(pushButton_10->sizePolicy().hasHeightForWidth());
        pushButton_10->setSizePolicy(sizePolicy1);
        pushButton_10->setFont(font2);
        pushButton_10->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0, stop:0 rgba(227, 227, 227, 189), stop:0.142045 rgba(183, 192, 255, 255), stop:0.853107 rgba(209, 219, 255, 255), stop:1 rgba(255, 255, 255, 221));\n"
""));

        horizontalLayout->addWidget(pushButton_10);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        delete_2 = new QPushButton(widget);
        delete_2->setObjectName(QStringLiteral("delete_2"));
        delete_2->setEnabled(true);
        sizePolicy1.setHeightForWidth(delete_2->sizePolicy().hasHeightForWidth());
        delete_2->setSizePolicy(sizePolicy1);
        delete_2->setFont(font2);
        delete_2->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0.0169492 rgba(255, 255, 255, 255), stop:0.423729 rgba(184, 199, 206, 255), stop:0.451977 rgba(173, 202, 206, 255), stop:0.988701 rgba(229, 247, 244, 255));\n"
""));

        horizontalLayout_2->addWidget(delete_2);

        clear = new QPushButton(widget);
        clear->setObjectName(QStringLiteral("clear"));
        clear->setEnabled(true);
        sizePolicy1.setHeightForWidth(clear->sizePolicy().hasHeightForWidth());
        clear->setSizePolicy(sizePolicy1);
        clear->setFont(font2);
        clear->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0.0169492 rgba(255, 255, 255, 255), stop:0.423729 rgba(184, 199, 206, 255), stop:0.451977 rgba(173, 202, 206, 255), stop:0.988701 rgba(229, 247, 244, 255));\n"
""));

        horizontalLayout_2->addWidget(clear);

        pushButton_13 = new QPushButton(widget);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));
        pushButton_13->setEnabled(true);
        sizePolicy1.setHeightForWidth(pushButton_13->sizePolicy().hasHeightForWidth());
        pushButton_13->setSizePolicy(sizePolicy1);
        pushButton_13->setFont(font2);
        pushButton_13->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0.0169492 rgba(255, 255, 255, 255), stop:0.423729 rgba(184, 199, 206, 255), stop:0.451977 rgba(173, 202, 206, 255), stop:0.988701 rgba(229, 247, 244, 255));\n"
""));

        horizontalLayout_2->addWidget(pushButton_13);

        pushButton_14 = new QPushButton(widget);
        pushButton_14->setObjectName(QStringLiteral("pushButton_14"));
        pushButton_14->setEnabled(true);
        sizePolicy1.setHeightForWidth(pushButton_14->sizePolicy().hasHeightForWidth());
        pushButton_14->setSizePolicy(sizePolicy1);
        pushButton_14->setFont(font2);
        pushButton_14->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0.0169492 rgba(255, 255, 255, 255), stop:0.423729 rgba(184, 199, 206, 255), stop:0.451977 rgba(173, 202, 206, 255), stop:0.988701 rgba(229, 247, 244, 255));"));

        horizontalLayout_2->addWidget(pushButton_14);

        pushButton_15 = new QPushButton(widget);
        pushButton_15->setObjectName(QStringLiteral("pushButton_15"));
        pushButton_15->setEnabled(true);
        sizePolicy1.setHeightForWidth(pushButton_15->sizePolicy().hasHeightForWidth());
        pushButton_15->setSizePolicy(sizePolicy1);
        pushButton_15->setFont(font2);
        pushButton_15->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0.0169492 rgba(255, 255, 255, 255), stop:0.423729 rgba(184, 199, 206, 255), stop:0.451977 rgba(173, 202, 206, 255), stop:0.988701 rgba(229, 247, 244, 255));\n"
""));

        horizontalLayout_2->addWidget(pushButton_15);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        num7 = new QPushButton(widget);
        num7->setObjectName(QStringLiteral("num7"));
        num7->setEnabled(true);
        sizePolicy1.setHeightForWidth(num7->sizePolicy().hasHeightForWidth());
        num7->setSizePolicy(sizePolicy1);
        num7->setFont(font2);
        num7->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(255, 255, 255, 255), stop:0.0903955 rgba(255, 255, 255, 255), stop:0.502825 rgba(222, 234, 255, 255), stop:0.864407 rgba(247, 247, 247, 255));\n"
""));

        horizontalLayout_3->addWidget(num7);

        num8 = new QPushButton(widget);
        num8->setObjectName(QStringLiteral("num8"));
        num8->setEnabled(true);
        sizePolicy1.setHeightForWidth(num8->sizePolicy().hasHeightForWidth());
        num8->setSizePolicy(sizePolicy1);
        num8->setFont(font2);
        num8->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(255, 255, 255, 255), stop:0.0903955 rgba(255, 255, 255, 255), stop:0.502825 rgba(222, 234, 255, 255), stop:0.864407 rgba(247, 247, 247, 255));\n"
""));

        horizontalLayout_3->addWidget(num8);

        num9 = new QPushButton(widget);
        num9->setObjectName(QStringLiteral("num9"));
        num9->setEnabled(true);
        sizePolicy1.setHeightForWidth(num9->sizePolicy().hasHeightForWidth());
        num9->setSizePolicy(sizePolicy1);
        num9->setFont(font2);
        num9->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(255, 255, 255, 255), stop:0.0903955 rgba(255, 255, 255, 255), stop:0.502825 rgba(222, 234, 255, 255), stop:0.864407 rgba(247, 247, 247, 255));\n"
""));

        horizontalLayout_3->addWidget(num9);

        divice = new QPushButton(widget);
        divice->setObjectName(QStringLiteral("divice"));
        divice->setEnabled(true);
        sizePolicy1.setHeightForWidth(divice->sizePolicy().hasHeightForWidth());
        divice->setSizePolicy(sizePolicy1);
        divice->setFont(font2);
        divice->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0.0169492 rgba(255, 255, 255, 255), stop:0.423729 rgba(184, 199, 206, 255), stop:0.451977 rgba(173, 202, 206, 255), stop:0.988701 rgba(229, 247, 244, 255));\n"
""));

        horizontalLayout_3->addWidget(divice);

        pushButton_30 = new QPushButton(widget);
        pushButton_30->setObjectName(QStringLiteral("pushButton_30"));
        pushButton_30->setEnabled(true);
        sizePolicy1.setHeightForWidth(pushButton_30->sizePolicy().hasHeightForWidth());
        pushButton_30->setSizePolicy(sizePolicy1);
        pushButton_30->setFont(font2);
        pushButton_30->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0.0169492 rgba(255, 255, 255, 255), stop:0.423729 rgba(184, 199, 206, 255), stop:0.451977 rgba(173, 202, 206, 255), stop:0.988701 rgba(229, 247, 244, 255));\n"
""));

        horizontalLayout_3->addWidget(pushButton_30);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        num4 = new QPushButton(widget);
        num4->setObjectName(QStringLiteral("num4"));
        num4->setEnabled(true);
        sizePolicy1.setHeightForWidth(num4->sizePolicy().hasHeightForWidth());
        num4->setSizePolicy(sizePolicy1);
        num4->setFont(font2);
        num4->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(255, 255, 255, 255), stop:0.0903955 rgba(255, 255, 255, 255), stop:0.502825 rgba(222, 234, 255, 255), stop:0.864407 rgba(247, 247, 247, 255));\n"
""));

        horizontalLayout_4->addWidget(num4);

        num5 = new QPushButton(widget);
        num5->setObjectName(QStringLiteral("num5"));
        num5->setEnabled(true);
        sizePolicy1.setHeightForWidth(num5->sizePolicy().hasHeightForWidth());
        num5->setSizePolicy(sizePolicy1);
        num5->setFont(font2);
        num5->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(255, 255, 255, 255), stop:0.0903955 rgba(255, 255, 255, 255), stop:0.502825 rgba(222, 234, 255, 255), stop:0.864407 rgba(247, 247, 247, 255));\n"
""));

        horizontalLayout_4->addWidget(num5);

        num6 = new QPushButton(widget);
        num6->setObjectName(QStringLiteral("num6"));
        num6->setEnabled(true);
        sizePolicy1.setHeightForWidth(num6->sizePolicy().hasHeightForWidth());
        num6->setSizePolicy(sizePolicy1);
        num6->setFont(font2);
        num6->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(255, 255, 255, 255), stop:0.0903955 rgba(255, 255, 255, 255), stop:0.502825 rgba(222, 234, 255, 255), stop:0.864407 rgba(247, 247, 247, 255));\n"
""));

        horizontalLayout_4->addWidget(num6);

        multiply = new QPushButton(widget);
        multiply->setObjectName(QStringLiteral("multiply"));
        multiply->setEnabled(true);
        sizePolicy1.setHeightForWidth(multiply->sizePolicy().hasHeightForWidth());
        multiply->setSizePolicy(sizePolicy1);
        multiply->setFont(font2);
        multiply->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0.0169492 rgba(255, 255, 255, 255), stop:0.423729 rgba(184, 199, 206, 255), stop:0.451977 rgba(173, 202, 206, 255), stop:0.988701 rgba(229, 247, 244, 255));\n"
""));

        horizontalLayout_4->addWidget(multiply);

        pushButton_20 = new QPushButton(widget);
        pushButton_20->setObjectName(QStringLiteral("pushButton_20"));
        pushButton_20->setEnabled(true);
        sizePolicy1.setHeightForWidth(pushButton_20->sizePolicy().hasHeightForWidth());
        pushButton_20->setSizePolicy(sizePolicy1);
        pushButton_20->setFont(font2);
        pushButton_20->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0.0169492 rgba(255, 255, 255, 255), stop:0.423729 rgba(184, 199, 206, 255), stop:0.451977 rgba(173, 202, 206, 255), stop:0.988701 rgba(229, 247, 244, 255));\n"
""));

        horizontalLayout_4->addWidget(pushButton_20);


        gridLayout->addLayout(horizontalLayout_4, 3, 0, 1, 1);

        equal = new QPushButton(centralWidget);
        equal->setObjectName(QStringLiteral("equal"));
        equal->setEnabled(true);
        equal->setGeometry(QRect(300, 320, 61, 92));
        sizePolicy1.setHeightForWidth(equal->sizePolicy().hasHeightForWidth());
        equal->setSizePolicy(sizePolicy1);
        equal->setMinimumSize(QSize(0, 92));
        equal->setMaximumSize(QSize(16777215, 92));
        equal->setFont(font2);
        equal->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0.0169492 rgba(255, 255, 255, 255), stop:0.423729 rgba(184, 199, 206, 255), stop:0.451977 rgba(173, 202, 206, 255), stop:0.988701 rgba(229, 247, 244, 255));\n"
""));
        widget1 = new QWidget(centralWidget);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setEnabled(true);
        widget1->setGeometry(QRect(20, 370, 274, 44));
        horizontalLayout_6 = new QHBoxLayout(widget1);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        num0 = new QPushButton(widget1);
        num0->setObjectName(QStringLiteral("num0"));
        num0->setEnabled(true);
        sizePolicy1.setHeightForWidth(num0->sizePolicy().hasHeightForWidth());
        num0->setSizePolicy(sizePolicy1);
        num0->setMinimumSize(QSize(133, 42));
        num0->setMaximumSize(QSize(133, 42));
        QPalette palette;
        QLinearGradient gradient(0, 0, 0, 1);
        gradient.setSpread(QGradient::PadSpread);
        gradient.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient.setColorAt(0, QColor(255, 255, 255, 255));
        gradient.setColorAt(0.0903955, QColor(255, 255, 255, 255));
        gradient.setColorAt(0.502825, QColor(222, 234, 255, 255));
        gradient.setColorAt(0.864407, QColor(247, 247, 247, 255));
        QBrush brush(gradient);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        QLinearGradient gradient1(0, 0, 0, 1);
        gradient1.setSpread(QGradient::PadSpread);
        gradient1.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient1.setColorAt(0, QColor(255, 255, 255, 255));
        gradient1.setColorAt(0.0903955, QColor(255, 255, 255, 255));
        gradient1.setColorAt(0.502825, QColor(222, 234, 255, 255));
        gradient1.setColorAt(0.864407, QColor(247, 247, 247, 255));
        QBrush brush1(gradient1);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        QLinearGradient gradient2(0, 0, 0, 1);
        gradient2.setSpread(QGradient::PadSpread);
        gradient2.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient2.setColorAt(0, QColor(255, 255, 255, 255));
        gradient2.setColorAt(0.0903955, QColor(255, 255, 255, 255));
        gradient2.setColorAt(0.502825, QColor(222, 234, 255, 255));
        gradient2.setColorAt(0.864407, QColor(247, 247, 247, 255));
        QBrush brush2(gradient2);
        palette.setBrush(QPalette::Active, QPalette::Window, brush2);
        QLinearGradient gradient3(0, 0, 0, 1);
        gradient3.setSpread(QGradient::PadSpread);
        gradient3.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient3.setColorAt(0, QColor(255, 255, 255, 255));
        gradient3.setColorAt(0.0903955, QColor(255, 255, 255, 255));
        gradient3.setColorAt(0.502825, QColor(222, 234, 255, 255));
        gradient3.setColorAt(0.864407, QColor(247, 247, 247, 255));
        QBrush brush3(gradient3);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        QLinearGradient gradient4(0, 0, 0, 1);
        gradient4.setSpread(QGradient::PadSpread);
        gradient4.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient4.setColorAt(0, QColor(255, 255, 255, 255));
        gradient4.setColorAt(0.0903955, QColor(255, 255, 255, 255));
        gradient4.setColorAt(0.502825, QColor(222, 234, 255, 255));
        gradient4.setColorAt(0.864407, QColor(247, 247, 247, 255));
        QBrush brush4(gradient4);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush4);
        QLinearGradient gradient5(0, 0, 0, 1);
        gradient5.setSpread(QGradient::PadSpread);
        gradient5.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient5.setColorAt(0, QColor(255, 255, 255, 255));
        gradient5.setColorAt(0.0903955, QColor(255, 255, 255, 255));
        gradient5.setColorAt(0.502825, QColor(222, 234, 255, 255));
        gradient5.setColorAt(0.864407, QColor(247, 247, 247, 255));
        QBrush brush5(gradient5);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush5);
        QLinearGradient gradient6(0, 0, 0, 1);
        gradient6.setSpread(QGradient::PadSpread);
        gradient6.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient6.setColorAt(0, QColor(255, 255, 255, 255));
        gradient6.setColorAt(0.0903955, QColor(255, 255, 255, 255));
        gradient6.setColorAt(0.502825, QColor(222, 234, 255, 255));
        gradient6.setColorAt(0.864407, QColor(247, 247, 247, 255));
        QBrush brush6(gradient6);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        QLinearGradient gradient7(0, 0, 0, 1);
        gradient7.setSpread(QGradient::PadSpread);
        gradient7.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient7.setColorAt(0, QColor(255, 255, 255, 255));
        gradient7.setColorAt(0.0903955, QColor(255, 255, 255, 255));
        gradient7.setColorAt(0.502825, QColor(222, 234, 255, 255));
        gradient7.setColorAt(0.864407, QColor(247, 247, 247, 255));
        QBrush brush7(gradient7);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        QLinearGradient gradient8(0, 0, 0, 1);
        gradient8.setSpread(QGradient::PadSpread);
        gradient8.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient8.setColorAt(0, QColor(255, 255, 255, 255));
        gradient8.setColorAt(0.0903955, QColor(255, 255, 255, 255));
        gradient8.setColorAt(0.502825, QColor(222, 234, 255, 255));
        gradient8.setColorAt(0.864407, QColor(247, 247, 247, 255));
        QBrush brush8(gradient8);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush8);
        num0->setPalette(palette);
        num0->setFont(font2);
        num0->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(255, 255, 255, 255), stop:0.0903955 rgba(255, 255, 255, 255), stop:0.502825 rgba(222, 234, 255, 255), stop:0.864407 rgba(247, 247, 247, 255));\n"
"\n"
"\n"
"\n"
""));
        num0->setFlat(false);

        horizontalLayout_6->addWidget(num0);

        dot = new QPushButton(widget1);
        dot->setObjectName(QStringLiteral("dot"));
        dot->setEnabled(true);
        sizePolicy1.setHeightForWidth(dot->sizePolicy().hasHeightForWidth());
        dot->setSizePolicy(sizePolicy1);
        dot->setMinimumSize(QSize(63, 42));
        dot->setMaximumSize(QSize(63, 42));
        dot->setFont(font2);
        dot->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(255, 255, 255, 255), stop:0.0903955 rgba(255, 255, 255, 255), stop:0.502825 rgba(222, 234, 255, 255), stop:0.864407 rgba(247, 247, 247, 255));\n"
""));

        horizontalLayout_6->addWidget(dot);

        add = new QPushButton(widget1);
        add->setObjectName(QStringLiteral("add"));
        add->setEnabled(true);
        sizePolicy1.setHeightForWidth(add->sizePolicy().hasHeightForWidth());
        add->setSizePolicy(sizePolicy1);
        add->setMinimumSize(QSize(63, 42));
        add->setMaximumSize(QSize(62, 42));
        add->setFont(font2);
        add->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0.0169492 rgba(255, 255, 255, 255), stop:0.423729 rgba(184, 199, 206, 255), stop:0.451977 rgba(173, 202, 206, 255), stop:0.988701 rgba(229, 247, 244, 255));\n"
""));

        horizontalLayout_6->addWidget(add);

        widget2 = new QWidget(centralWidget);
        widget2->setObjectName(QStringLiteral("widget2"));
        widget2->setEnabled(true);
        widget2->setGeometry(QRect(20, 320, 272, 44));
        horizontalLayout_5 = new QHBoxLayout(widget2);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        num1 = new QPushButton(widget2);
        num1->setObjectName(QStringLiteral("num1"));
        num1->setEnabled(true);
        sizePolicy1.setHeightForWidth(num1->sizePolicy().hasHeightForWidth());
        num1->setSizePolicy(sizePolicy1);
        num1->setMinimumSize(QSize(63, 42));
        num1->setMaximumSize(QSize(16777215, 42));
        num1->setFont(font2);
        num1->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(255, 255, 255, 255), stop:0.0903955 rgba(255, 255, 255, 255), stop:0.502825 rgba(222, 234, 255, 255), stop:0.864407 rgba(247, 247, 247, 255));\n"
"\n"
"\n"
""));

        horizontalLayout_5->addWidget(num1);

        num2 = new QPushButton(widget2);
        num2->setObjectName(QStringLiteral("num2"));
        num2->setEnabled(true);
        sizePolicy1.setHeightForWidth(num2->sizePolicy().hasHeightForWidth());
        num2->setSizePolicy(sizePolicy1);
        num2->setMinimumSize(QSize(63, 42));
        num2->setMaximumSize(QSize(16777215, 42));
        num2->setFont(font2);
        num2->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(255, 255, 255, 255), stop:0.0903955 rgba(255, 255, 255, 255), stop:0.502825 rgba(222, 234, 255, 255), stop:0.864407 rgba(247, 247, 247, 255));\n"
""));

        horizontalLayout_5->addWidget(num2);

        num3 = new QPushButton(widget2);
        num3->setObjectName(QStringLiteral("num3"));
        num3->setEnabled(true);
        sizePolicy1.setHeightForWidth(num3->sizePolicy().hasHeightForWidth());
        num3->setSizePolicy(sizePolicy1);
        num3->setMinimumSize(QSize(63, 42));
        num3->setMaximumSize(QSize(16777215, 42));
        num3->setFont(font2);
        num3->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(255, 255, 255, 255), stop:0.0903955 rgba(255, 255, 255, 255), stop:0.502825 rgba(222, 234, 255, 255), stop:0.864407 rgba(247, 247, 247, 255));\n"
""));

        horizontalLayout_5->addWidget(num3);

        reduce = new QPushButton(widget2);
        reduce->setObjectName(QStringLiteral("reduce"));
        reduce->setEnabled(true);
        sizePolicy1.setHeightForWidth(reduce->sizePolicy().hasHeightForWidth());
        reduce->setSizePolicy(sizePolicy1);
        reduce->setMinimumSize(QSize(63, 42));
        reduce->setMaximumSize(QSize(16777215, 42));
        reduce->setFont(font2);
        reduce->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0.0169492 rgba(255, 255, 255, 255), stop:0.423729 rgba(184, 199, 206, 255), stop:0.451977 rgba(173, 202, 206, 255), stop:0.988701 rgba(229, 247, 244, 255));\n"
""));

        horizontalLayout_5->addWidget(reduce);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 380, 23));
        menu_V = new QMenu(menuBar);
        menu_V->setObjectName(QStringLiteral("menu_V"));
        menu_W = new QMenu(menu_V);
        menu_W->setObjectName(QStringLiteral("menu_W"));
        menu_E = new QMenu(menuBar);
        menu_E->setObjectName(QStringLiteral("menu_E"));
        menu_H_2 = new QMenu(menu_E);
        menu_H_2->setObjectName(QStringLiteral("menu_H_2"));
        menu_H = new QMenu(menuBar);
        menu_H->setObjectName(QStringLiteral("menu_H"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menu_V->menuAction());
        menuBar->addAction(menu_E->menuAction());
        menuBar->addAction(menu_H->menuAction());
        menu_V->addAction(action_T);
        menu_V->addAction(action_S);
        menu_V->addAction(action_P);
        menu_V->addAction(action_A);
        menu_V->addSeparator();
        menu_V->addAction(action_Y);
        menu_V->addAction(action_I);
        menu_V->addSeparator();
        menu_V->addAction(action_B);
        menu_V->addAction(action_U);
        menu_V->addAction(action_D);
        menu_V->addAction(menu_W->menuAction());
        menu_W->addAction(action_M);
        menu_W->addAction(action_V_3);
        menu_W->addAction(action_mpg_F);
        menu_W->addAction(action_1_100_km_U);
        menu_E->addAction(action_C);
        menu_E->addAction(action_V_2);
        menu_E->addSeparator();
        menu_E->addAction(menu_H_2->menuAction());
        menu_H_2->addAction(action_I_2);
        menu_H_2->addAction(action_E);
        menu_H_2->addAction(action_N);
        menu_H_2->addAction(action_L);
        menu_H->addAction(action_V);
        menu_H->addSeparator();
        menu_H->addAction(action_A_2);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        action_T->setText(QApplication::translate("MainWindow", "\346\240\207\345\207\206\345\236\213(&T)", 0));
        action_T->setShortcut(QApplication::translate("MainWindow", "Alt+1", 0));
        action_S->setText(QApplication::translate("MainWindow", "\347\247\221\345\255\246\345\236\213(&S)", 0));
        action_S->setShortcut(QApplication::translate("MainWindow", "Alt+2", 0));
        action_P->setText(QApplication::translate("MainWindow", "\347\250\213\345\272\217\345\221\230(&P)", 0));
        action_P->setShortcut(QApplication::translate("MainWindow", "Alt+3", 0));
        action_A->setText(QApplication::translate("MainWindow", "\347\273\237\350\256\241\344\277\241\346\201\257(&A)", 0));
        action_A->setShortcut(QApplication::translate("MainWindow", "Alt+4", 0));
        action_Y->setText(QApplication::translate("MainWindow", "\345\216\206\345\217\262\350\256\260\345\275\225(&Y)", 0));
        action_Y->setShortcut(QApplication::translate("MainWindow", "Ctrl+H", 0));
        action_I->setText(QApplication::translate("MainWindow", "\346\225\260\345\255\246\345\210\206\347\273\204(&I)", 0));
        action_B->setText(QApplication::translate("MainWindow", "\345\237\272\346\234\254(&B)", 0));
        action_B->setShortcut(QApplication::translate("MainWindow", "Ctrl+F4", 0));
        action_U->setText(QApplication::translate("MainWindow", "\345\215\225\344\275\215\350\275\254\346\215\242(&U)", 0));
        action_U->setShortcut(QApplication::translate("MainWindow", "Ctrl+U", 0));
        action_D->setText(QApplication::translate("MainWindow", "\346\227\245\346\234\237\350\256\241\347\256\227(&D)", 0));
        action_D->setShortcut(QApplication::translate("MainWindow", "Ctrl+E", 0));
        action_V->setText(QApplication::translate("MainWindow", "\346\237\245\347\234\213\345\270\256\345\212\251(&V)", 0));
        action_V->setShortcut(QApplication::translate("MainWindow", "F1", 0));
        action_A_2->setText(QApplication::translate("MainWindow", "\345\205\263\344\272\216\350\256\241\347\256\227\345\231\250(&A)", 0));
        action_C->setText(QApplication::translate("MainWindow", "\345\244\215\345\210\266(&C)", 0));
        action_V_2->setText(QApplication::translate("MainWindow", "\347\262\230\350\264\264(&V)", 0));
        action_I_2->setText(QApplication::translate("MainWindow", "\345\244\215\345\210\266\345\216\206\345\217\262\350\256\260\345\275\225(&I)", 0));
        action_E->setText(QApplication::translate("MainWindow", "\347\274\226\350\276\221(&E)", 0));
        action_E->setShortcut(QApplication::translate("MainWindow", "F2", 0));
        action_N->setText(QApplication::translate("MainWindow", "\345\217\226\346\266\210\347\274\226\350\276\221(&N)", 0));
        action_N->setShortcut(QApplication::translate("MainWindow", "Esc", 0));
        action_L->setText(QApplication::translate("MainWindow", "\346\270\205\351\231\244(&L)", 0));
        action_L->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+D", 0));
        action_M->setText(QApplication::translate("MainWindow", "\346\212\265\346\212\274(&M)", 0));
        action_V_3->setText(QApplication::translate("MainWindow", "\346\261\275\350\275\246\347\247\237\350\265\201(&V)", 0));
        action_mpg_F->setText(QApplication::translate("MainWindow", "\346\262\271\350\200\227(mpg)(&F)", 0));
        action_1_100_km_U->setText(QApplication::translate("MainWindow", "\346\262\271\350\200\227(1/100 km)(&U)", 0));
        textEdit->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Consolas'; font-size:22pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0));
        pushButton_6->setText(QApplication::translate("MainWindow", "MC", 0));
        pushButton_7->setText(QApplication::translate("MainWindow", "MR", 0));
        pushButton_8->setText(QApplication::translate("MainWindow", "MS", 0));
        pushButton_9->setText(QApplication::translate("MainWindow", "M+", 0));
        pushButton_10->setText(QApplication::translate("MainWindow", "M-", 0));
        delete_2->setText(QApplication::translate("MainWindow", "\342\206\220", 0));
        clear->setText(QApplication::translate("MainWindow", "CE", 0));
        pushButton_13->setText(QApplication::translate("MainWindow", "C", 0));
        pushButton_14->setText(QApplication::translate("MainWindow", "\302\261", 0));
        pushButton_15->setText(QApplication::translate("MainWindow", "\342\210\232", 0));
        num7->setText(QApplication::translate("MainWindow", "7", 0));
        num8->setText(QApplication::translate("MainWindow", "8", 0));
        num9->setText(QApplication::translate("MainWindow", "9", 0));
        divice->setText(QApplication::translate("MainWindow", "/", 0));
        pushButton_30->setText(QApplication::translate("MainWindow", "%", 0));
        num4->setText(QApplication::translate("MainWindow", "4", 0));
        num5->setText(QApplication::translate("MainWindow", "5", 0));
        num6->setText(QApplication::translate("MainWindow", "6", 0));
        multiply->setText(QApplication::translate("MainWindow", "*", 0));
        pushButton_20->setText(QApplication::translate("MainWindow", "1/x", 0));
        equal->setText(QApplication::translate("MainWindow", "=", 0));
        num0->setText(QApplication::translate("MainWindow", "0", 0));
        dot->setText(QApplication::translate("MainWindow", ".", 0));
        add->setText(QApplication::translate("MainWindow", "+", 0));
        num1->setText(QApplication::translate("MainWindow", "1", 0));
        num2->setText(QApplication::translate("MainWindow", "2", 0));
        num3->setText(QApplication::translate("MainWindow", "3", 0));
        reduce->setText(QApplication::translate("MainWindow", "-", 0));
        menu_V->setTitle(QApplication::translate("MainWindow", "\346\237\245\347\234\213(&V)", 0));
        menu_W->setTitle(QApplication::translate("MainWindow", "\345\267\245\344\275\234\350\241\250(&W)", 0));
        menu_E->setTitle(QApplication::translate("MainWindow", "\347\274\226\350\276\221(&E)", 0));
        menu_H_2->setTitle(QApplication::translate("MainWindow", "\345\216\206\345\217\262\350\256\260\345\275\225(&H)", 0));
        menu_H->setTitle(QApplication::translate("MainWindow", "\345\270\256\345\212\251(&H)", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
