/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>
#include "mywidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QWidget *widget2;
    QGridLayout *gridLayout_2;
    QWidget *widget_3;
    QSpacerItem *verticalSpacer;
    QLabel *label_2;
    QPushButton *pushButton_ok;
    QLabel *label_6;
    QLabel *label_fitness;
    QLabel *label_20;
    QLabel *label_Time;
    QLabel *label_24;
    QLineEdit *lineEdit;
    QWidget *widget;
    QGridLayout *gridLayout_3;
    MyWidget *widget1;
    QGridLayout *gridLayout_4;
    QWidget *widget_2;
    QGridLayout *gridLayout_5;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_7;
    QWidget *widget_4;
    QGridLayout *gridLayout_8;
    QGridLayout *gridLayout_6;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QLabel *label_3;
    QLabel *label_it;
    QLabel *label_n;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer;
    QWidget *tab_4;
    QGridLayout *gridLayout_9;
    QWidget *widget_6;
    QGridLayout *gridLayout_10;
    QLabel *label_17;
    QLabel *label_13;
    QLineEdit *lineEdit_Hillclimbing_num;
    QLabel *label_12;
    QLineEdit *lineEdit_Hillclimbing_IndividualNumber;
    QLabel *label_11;
    QLabel *label_16;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_2;
    QWidget *tab_2;
    QGridLayout *gridLayout_11;
    QWidget *widget_8;
    QGridLayout *gridLayout_12;
    QLabel *label_8;
    QLineEdit *lineEdit_GA_IndividualNumber;
    QLabel *label_9;
    QLineEdit *lineEdit_GA_num;
    QLabel *label_10;
    QLineEdit *lineEdit_GA_pm;
    QSpacerItem *horizontalSpacer_4;
    QWidget *tab_3;
    QGridLayout *gridLayout_13;
    QWidget *widget_9;
    QGridLayout *gridLayout_14;
    QLabel *label_14;
    QLineEdit *lineEdit_SA_T;
    QLabel *label_15;
    QLineEdit *lineEdit_SA_delta;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label;
    QFrame *line;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(775, 572);
        QPalette palette;
        QBrush brush(QColor(231, 231, 231, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        MainWindow->setPalette(palette);
        MainWindow->setAutoFillBackground(true);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        widget2 = new QWidget(centralWidget);
        widget2->setObjectName(QStringLiteral("widget2"));
        widget2->setMinimumSize(QSize(200, 0));
        widget2->setMaximumSize(QSize(200, 16777215));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        widget2->setPalette(palette1);
        widget2->setAutoFillBackground(true);
        gridLayout_2 = new QGridLayout(widget2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 5, 0);
        widget_3 = new QWidget(widget2);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setMaximumSize(QSize(16777215, 20));

        gridLayout_2->addWidget(widget_3, 8, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 7, 0, 1, 2);

        label_2 = new QLabel(widget2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMaximumSize(QSize(16777215, 20));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        label_2->setMargin(0);

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        pushButton_ok = new QPushButton(widget2);
        pushButton_ok->setObjectName(QStringLiteral("pushButton_ok"));
        pushButton_ok->setMinimumSize(QSize(0, 33));
        pushButton_ok->setMaximumSize(QSize(16777215, 33));
        QPalette palette2;
        QBrush brush2(QColor(0, 0, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        QBrush brush3(QColor(148, 148, 148, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        pushButton_ok->setPalette(palette2);

        gridLayout_2->addWidget(pushButton_ok, 3, 0, 1, 2);

        label_6 = new QLabel(widget2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMaximumSize(QSize(16777215, 20));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        label_6->setFont(font1);

        gridLayout_2->addWidget(label_6, 6, 0, 1, 1);

        label_fitness = new QLabel(widget2);
        label_fitness->setObjectName(QStringLiteral("label_fitness"));
        label_fitness->setFont(font1);
        label_fitness->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_fitness, 5, 1, 1, 1);

        label_20 = new QLabel(widget2);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setFont(font1);

        gridLayout_2->addWidget(label_20, 4, 0, 1, 1);

        label_Time = new QLabel(widget2);
        label_Time->setObjectName(QStringLiteral("label_Time"));
        label_Time->setFont(font1);
        label_Time->setTextFormat(Qt::AutoText);
        label_Time->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_Time, 4, 1, 1, 1);

        label_24 = new QLabel(widget2);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setFont(font1);

        gridLayout_2->addWidget(label_24, 5, 0, 1, 1);

        lineEdit = new QLineEdit(widget2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setMinimumSize(QSize(80, 0));
        lineEdit->setMaximumSize(QSize(16777215, 20));
        lineEdit->setFont(font1);
        lineEdit->setLayoutDirection(Qt::LeftToRight);
        lineEdit->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit, 0, 1, 1, 1);

        gridLayout_2->setRowStretch(0, 1);
        gridLayout_2->setColumnStretch(0, 1);

        gridLayout->addWidget(widget2, 9, 3, 3, 1);

        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMaximumSize(QSize(16777215, 20));
        gridLayout_3 = new QGridLayout(widget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(3, 3, 3, 3);

        gridLayout->addWidget(widget, 11, 0, 1, 2);

        widget1 = new MyWidget(centralWidget);
        widget1->setObjectName(QStringLiteral("widget1"));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::Base, brush);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        widget1->setPalette(palette3);
        widget1->setAutoFillBackground(true);
        gridLayout_4 = new QGridLayout(widget1);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);

        gridLayout->addWidget(widget1, 9, 0, 2, 2);

        widget_2 = new QWidget(centralWidget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setMaximumSize(QSize(16777215, 100));
        QPalette palette4;
        QBrush brush4(QColor(198, 198, 198, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Light, brush4);
        palette4.setBrush(QPalette::Inactive, QPalette::Light, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::Light, brush4);
        widget_2->setPalette(palette4);
        widget_2->setAutoFillBackground(true);
        gridLayout_5 = new QGridLayout(widget_2);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(widget_2);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setMaximumSize(QSize(16777215, 100));
        QPalette palette5;
        QBrush brush5(QColor(223, 223, 223, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush5);
        QBrush brush6(QColor(213, 213, 213, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Active, QPalette::Light, brush6);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette5.setBrush(QPalette::Active, QPalette::HighlightedText, brush);
        QBrush brush7(QColor(240, 240, 240, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush7);
        palette5.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush7);
        palette5.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush);
        tabWidget->setPalette(palette5);
        tabWidget->setAutoFillBackground(true);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout_7 = new QGridLayout(tab);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        gridLayout_7->setContentsMargins(30, 0, 20, 0);
        widget_4 = new QWidget(tab);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        widget_4->setMinimumSize(QSize(300, 0));
        widget_4->setMaximumSize(QSize(300, 16777215));
        gridLayout_8 = new QGridLayout(widget_4);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setSpacing(6);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        pushButton_3 = new QPushButton(widget_4);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(0, 30));

        gridLayout_6->addWidget(pushButton_3, 1, 1, 1, 1);

        pushButton = new QPushButton(widget_4);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(0, 30));

        gridLayout_6->addWidget(pushButton, 1, 3, 1, 1);

        label_3 = new QLabel(widget_4);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font1);

        gridLayout_6->addWidget(label_3, 0, 0, 1, 1);

        label_it = new QLabel(widget_4);
        label_it->setObjectName(QStringLiteral("label_it"));
        label_it->setFont(font1);
        label_it->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(label_it, 1, 2, 1, 1);

        label_n = new QLabel(widget_4);
        label_n->setObjectName(QStringLiteral("label_n"));
        label_n->setFont(font1);
        label_n->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(label_n, 0, 1, 1, 1);

        label_5 = new QLabel(widget_4);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font1);

        gridLayout_6->addWidget(label_5, 1, 0, 1, 1);


        gridLayout_8->addLayout(gridLayout_6, 0, 0, 1, 1);


        gridLayout_7->addWidget(widget_4, 0, 4, 2, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer, 0, 5, 2, 1);

        tabWidget->addTab(tab, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        gridLayout_9 = new QGridLayout(tab_4);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        gridLayout_9->setContentsMargins(30, 0, -1, 0);
        widget_6 = new QWidget(tab_4);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        widget_6->setMaximumSize(QSize(450, 16777215));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        widget_6->setPalette(palette6);
        widget_6->setAutoFillBackground(true);
        gridLayout_10 = new QGridLayout(widget_6);
        gridLayout_10->setSpacing(6);
        gridLayout_10->setContentsMargins(11, 11, 11, 11);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        gridLayout_10->setContentsMargins(0, 0, 0, 0);
        label_17 = new QLabel(widget_6);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setFont(font1);

        gridLayout_10->addWidget(label_17, 4, 4, 1, 1);

        label_13 = new QLabel(widget_6);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setFont(font1);

        gridLayout_10->addWidget(label_13, 3, 0, 2, 1);

        lineEdit_Hillclimbing_num = new QLineEdit(widget_6);
        lineEdit_Hillclimbing_num->setObjectName(QStringLiteral("lineEdit_Hillclimbing_num"));
        lineEdit_Hillclimbing_num->setFont(font1);
        lineEdit_Hillclimbing_num->setAlignment(Qt::AlignCenter);

        gridLayout_10->addWidget(lineEdit_Hillclimbing_num, 4, 1, 1, 1);

        label_12 = new QLabel(widget_6);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setFont(font1);

        gridLayout_10->addWidget(label_12, 2, 0, 1, 1);

        lineEdit_Hillclimbing_IndividualNumber = new QLineEdit(widget_6);
        lineEdit_Hillclimbing_IndividualNumber->setObjectName(QStringLiteral("lineEdit_Hillclimbing_IndividualNumber"));
        lineEdit_Hillclimbing_IndividualNumber->setFont(font1);
        lineEdit_Hillclimbing_IndividualNumber->setAlignment(Qt::AlignCenter);

        gridLayout_10->addWidget(lineEdit_Hillclimbing_IndividualNumber, 2, 1, 1, 1);

        label_11 = new QLabel(widget_6);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setFont(font1);

        gridLayout_10->addWidget(label_11, 2, 3, 1, 1);

        label_16 = new QLabel(widget_6);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setFont(font1);

        gridLayout_10->addWidget(label_16, 2, 4, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_10->addItem(horizontalSpacer_3, 1, 2, 4, 1);


        gridLayout_9->addWidget(widget_6, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_9->addItem(horizontalSpacer_2, 0, 1, 1, 1);

        tabWidget->addTab(tab_4, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        gridLayout_11 = new QGridLayout(tab_2);
        gridLayout_11->setSpacing(6);
        gridLayout_11->setContentsMargins(11, 11, 11, 11);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        gridLayout_11->setContentsMargins(30, 0, -1, 0);
        widget_8 = new QWidget(tab_2);
        widget_8->setObjectName(QStringLiteral("widget_8"));
        widget_8->setMinimumSize(QSize(300, 0));
        widget_8->setMaximumSize(QSize(16777215, 300));
        gridLayout_12 = new QGridLayout(widget_8);
        gridLayout_12->setSpacing(6);
        gridLayout_12->setContentsMargins(11, 11, 11, 11);
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        gridLayout_12->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(widget_8);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font1);

        gridLayout_12->addWidget(label_8, 0, 0, 1, 1);

        lineEdit_GA_IndividualNumber = new QLineEdit(widget_8);
        lineEdit_GA_IndividualNumber->setObjectName(QStringLiteral("lineEdit_GA_IndividualNumber"));
        lineEdit_GA_IndividualNumber->setFont(font1);
        lineEdit_GA_IndividualNumber->setAlignment(Qt::AlignCenter);

        gridLayout_12->addWidget(lineEdit_GA_IndividualNumber, 0, 1, 1, 1);

        label_9 = new QLabel(widget_8);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font1);

        gridLayout_12->addWidget(label_9, 1, 0, 1, 1);

        lineEdit_GA_num = new QLineEdit(widget_8);
        lineEdit_GA_num->setObjectName(QStringLiteral("lineEdit_GA_num"));
        lineEdit_GA_num->setFont(font1);
        lineEdit_GA_num->setAlignment(Qt::AlignCenter);

        gridLayout_12->addWidget(lineEdit_GA_num, 1, 1, 1, 1);

        label_10 = new QLabel(widget_8);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setMaximumSize(QSize(16777215, 16777215));
        label_10->setFont(font1);

        gridLayout_12->addWidget(label_10, 1, 2, 1, 1);

        lineEdit_GA_pm = new QLineEdit(widget_8);
        lineEdit_GA_pm->setObjectName(QStringLiteral("lineEdit_GA_pm"));
        lineEdit_GA_pm->setFont(font1);
        lineEdit_GA_pm->setAlignment(Qt::AlignCenter);

        gridLayout_12->addWidget(lineEdit_GA_pm, 1, 3, 1, 1);


        gridLayout_11->addWidget(widget_8, 0, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(53, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_11->addItem(horizontalSpacer_4, 0, 1, 1, 1);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        gridLayout_13 = new QGridLayout(tab_3);
        gridLayout_13->setSpacing(6);
        gridLayout_13->setContentsMargins(11, 11, 11, 11);
        gridLayout_13->setObjectName(QStringLiteral("gridLayout_13"));
        gridLayout_13->setContentsMargins(30, 0, -1, 0);
        widget_9 = new QWidget(tab_3);
        widget_9->setObjectName(QStringLiteral("widget_9"));
        widget_9->setMaximumSize(QSize(200, 16777215));
        gridLayout_14 = new QGridLayout(widget_9);
        gridLayout_14->setSpacing(6);
        gridLayout_14->setContentsMargins(11, 11, 11, 11);
        gridLayout_14->setObjectName(QStringLiteral("gridLayout_14"));
        gridLayout_14->setContentsMargins(0, 0, 0, 0);
        label_14 = new QLabel(widget_9);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setFont(font1);

        gridLayout_14->addWidget(label_14, 0, 0, 1, 1);

        lineEdit_SA_T = new QLineEdit(widget_9);
        lineEdit_SA_T->setObjectName(QStringLiteral("lineEdit_SA_T"));
        lineEdit_SA_T->setFont(font1);
        lineEdit_SA_T->setAlignment(Qt::AlignCenter);

        gridLayout_14->addWidget(lineEdit_SA_T, 0, 1, 1, 1);

        label_15 = new QLabel(widget_9);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setFont(font1);

        gridLayout_14->addWidget(label_15, 1, 0, 1, 1);

        lineEdit_SA_delta = new QLineEdit(widget_9);
        lineEdit_SA_delta->setObjectName(QStringLiteral("lineEdit_SA_delta"));
        lineEdit_SA_delta->setFont(font1);
        lineEdit_SA_delta->setAlignment(Qt::AlignCenter);

        gridLayout_14->addWidget(lineEdit_SA_delta, 1, 1, 1, 1);


        gridLayout_13->addWidget(widget_9, 0, 0, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_13->addItem(horizontalSpacer_5, 0, 1, 1, 1);

        tabWidget->addTab(tab_3, QString());

        gridLayout_5->addWidget(tabWidget, 0, 0, 1, 1);


        gridLayout->addWidget(widget_2, 2, 0, 1, 4);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(16777215, 30));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::Base, brush);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush);
        label->setPalette(palette7);
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(20);
        font2.setBold(true);
        font2.setUnderline(false);
        font2.setWeight(75);
        font2.setKerning(true);
        label->setFont(font2);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setAutoFillBackground(true);
        label->setTextFormat(Qt::AutoText);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 4);

        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setLineWidth(0);
        line->setMidLineWidth(1);
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 9, 2, 2, 1);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label_2->setText(QApplication::translate("MainWindow", "\347\232\207\345\220\216\344\270\252\346\225\260:", 0));
        pushButton_ok->setText(QApplication::translate("MainWindow", "\345\274\200\345\247\213\350\256\241\347\256\227", 0));
        label_6->setText(QApplication::translate("MainWindow", "\344\277\241\346\201\257\350\276\223\345\207\272:", 0));
        label_fitness->setText(QApplication::translate("MainWindow", "0", 0));
        label_20->setText(QApplication::translate("MainWindow", "\346\227\266\351\227\264\342\226\263t\357\274\232", 0));
        label_Time->setText(QApplication::translate("MainWindow", "0", 0));
        label_24->setText(QApplication::translate("MainWindow", "\345\206\262\347\252\201\345\257\271\346\225\260\357\274\232", 0));
        lineEdit->setText(QApplication::translate("MainWindow", "10", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", "<", 0));
        pushButton->setText(QApplication::translate("MainWindow", ">", 0));
        label_3->setText(QApplication::translate("MainWindow", "\350\247\243\347\232\204\344\270\252\346\225\260:", 0));
        label_it->setText(QApplication::translate("MainWindow", "0", 0));
        label_n->setText(QApplication::translate("MainWindow", "0", 0));
        label_5->setText(QApplication::translate("MainWindow", "\350\247\243\347\232\204\351\200\211\346\213\251:", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "\345\233\236\346\272\257\346\263\225 (DFS)", 0));
        label_17->setText(QApplication::translate("MainWindow", "\345\205\201\350\256\270\351\232\217\346\234\272\344\270\213\345\261\261", 0));
        label_13->setText(QApplication::translate("MainWindow", "\350\277\255\344\273\243\346\254\241\346\225\260\357\274\232", 0));
        lineEdit_Hillclimbing_num->setText(QApplication::translate("MainWindow", "100", 0));
        label_12->setText(QApplication::translate("MainWindow", "\351\232\217\346\234\272\351\207\215\345\220\257\344\270\252\346\225\260\357\274\232", 0));
        lineEdit_Hillclimbing_IndividualNumber->setText(QApplication::translate("MainWindow", "10000", 0));
        label_11->setText(QApplication::translate("MainWindow", "\344\274\230\345\214\226\357\274\232", 0));
        label_16->setText(QApplication::translate("MainWindow", "\345\205\201\350\256\270\345\271\263\347\247\273", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "\347\210\254\345\261\261\346\263\225", 0));
        label_8->setText(QApplication::translate("MainWindow", "\347\247\215\347\276\244\350\247\204\346\250\241:", 0));
        lineEdit_GA_IndividualNumber->setText(QApplication::translate("MainWindow", "1000", 0));
        label_9->setText(QApplication::translate("MainWindow", "\350\277\233\345\214\226\346\254\241\346\225\260:", 0));
        lineEdit_GA_num->setText(QApplication::translate("MainWindow", "100", 0));
        label_10->setText(QApplication::translate("MainWindow", "\345\217\230\345\274\202\346\246\202\347\216\207%", 0));
        lineEdit_GA_pm->setText(QApplication::translate("MainWindow", "50", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "\351\201\227\344\274\240\347\256\227\346\263\225", 0));
        label_14->setText(QApplication::translate("MainWindow", "\350\265\267\345\247\213\346\270\251\345\272\246\357\274\232", 0));
        lineEdit_SA_T->setText(QApplication::translate("MainWindow", "1000", 0));
        label_15->setText(QApplication::translate("MainWindow", "delta\357\274\232", 0));
        lineEdit_SA_delta->setText(QApplication::translate("MainWindow", "0.99", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "\346\250\241\346\213\237\351\200\200\347\201\253\347\256\227\346\263\225", 0));
        label->setText(QApplication::translate("MainWindow", "N\347\232\207\345\220\216\351\227\256\351\242\230", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
