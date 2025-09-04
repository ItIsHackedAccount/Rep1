/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtMultimediaWidgets/QVideoWidget>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionac1;
    QAction *actionac2;
    QAction *actionac1_2;
    QAction *actionac2_2;
    QAction *actionac1_3;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QStackedWidget *stackWidget1;
    QWidget *Page1;
    QGridLayout *gridLayout_3;
    QLabel *label_3;
    QTextBrowser *textBrowser;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_5;
    QTableWidget *tableWidget;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QPushButton *pushButton_4;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_3;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_4;
    QVideoWidget *cameraWidget;
    QWidget *page_3;
    QVBoxLayout *verticalLayout_4;
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_6;
    QTableWidget *tableWidget_2;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_7;
    QTableWidget *tableWidget_3;
    QCustomPlot *customPlot;
    QWidget *page;
    QGridLayout *gridLayout_9;
    QGridLayout *gridLayout_8;
    QLabel *label_4;
    QTableWidget *tableWidget_4;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QSpacerItem *horizontalSpacer;
    QWidget *page_2;
    QGridLayout *gridLayout_10;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QLineEdit *lineEdit_5;
    QPushButton *pushButton_9;
    QPushButton *pushButton_8;
    QPushButton *pushButton_7;
    QSpacerItem *horizontalSpacer_3;
    QStatusBar *statusbar;
    QMenuBar *menubar;
    QMenu *menuMenu;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(898, 631);
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::AppointmentNew));
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: #1E1E2F;\n"
"border-color: rgb(116, 248, 255);"));
        actionac1 = new QAction(MainWindow);
        actionac1->setObjectName("actionac1");
        actionac2 = new QAction(MainWindow);
        actionac2->setObjectName("actionac2");
        actionac1_2 = new QAction(MainWindow);
        actionac1_2->setObjectName("actionac1_2");
        actionac2_2 = new QAction(MainWindow);
        actionac2_2->setObjectName("actionac2_2");
        actionac1_3 = new QAction(MainWindow);
        actionac1_3->setObjectName("actionac1_3");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        centralwidget->setStyleSheet(QString::fromUtf8("background-color: #1E1E2F;"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        stackWidget1 = new QStackedWidget(centralwidget);
        stackWidget1->setObjectName("stackWidget1");
        Page1 = new QWidget();
        Page1->setObjectName("Page1");
        gridLayout_3 = new QGridLayout(Page1);
        gridLayout_3->setObjectName("gridLayout_3");
        label_3 = new QLabel(Page1);
        label_3->setObjectName("label_3");
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setBold(true);
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(205, 221, 255);"));
        label_3->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout_3->addWidget(label_3, 0, 1, 1, 1);

        textBrowser = new QTextBrowser(Page1);
        textBrowser->setObjectName("textBrowser");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(textBrowser->sizePolicy().hasHeightForWidth());
        textBrowser->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setPointSize(15);
        font1.setBold(true);
        textBrowser->setFont(font1);
        textBrowser->setStyleSheet(QString::fromUtf8("QTextBrowser {\n"
"    background-color: #1E1E2F;\n"
"}\n"
"\n"
"QScrollBar:vertical {\n"
"    width: 12px;\n"
"    background: #f0f0f0;\n"
"    margin: 0px;\n"
"}\n"
"QScrollBar::handle:vertical {\n"
"    background: #3498db;\n"
"    min-height: 20px;\n"
"    border-radius: 6px;\n"
"}\n"
"\n"
"QScrollBar::add-line:vertical, QScrollBar::sub-line:vertical {\n"
"    background: none;\n"
"}\n"
"\n"
"QScrollBar::add-page:vertical, QScrollBar::sub-page:vertical {\n"
"    background: none;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""));

        gridLayout_3->addWidget(textBrowser, 1, 0, 1, 1);

        groupBox_2 = new QGroupBox(Page1);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setStyleSheet(QString::fromUtf8("    QGroupBox {\n"
"        font-size: 16px;\n"
"        font-weight: bold;\n"
"        color: rgb(205, 221, 255); /* \346\240\207\351\242\230\351\242\234\350\211\262 */\n"
"        border: 1px solid gray;\n"
"        margin-top: 20px; /* \346\240\207\351\242\230\344\270\216\350\276\271\346\241\206\350\267\235\347\246\273 */\n"
"    }\n"
"\n"
"    QGroupBox::title {\n"
"        subcontrol-origin: margin;\n"
"        subcontrol-position: top center; /* \346\240\207\351\242\230\345\261\205\344\270\255 */\n"
"        padding: 0 3px;\n"
"        background-color: transparent;\n"
"    }\n"
""));
        gridLayout_5 = new QGridLayout(groupBox_2);
        gridLayout_5->setObjectName("gridLayout_5");
        tableWidget = new QTableWidget(groupBox_2);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setStyleSheet(QString::fromUtf8(""));

        gridLayout_5->addWidget(tableWidget, 0, 0, 1, 1);


        gridLayout_3->addWidget(groupBox_2, 2, 0, 1, 3);

        label_2 = new QLabel(Page1);
        label_2->setObjectName("label_2");
        QFont font2;
        font2.setPointSize(20);
        font2.setBold(true);
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(205, 221, 255);"));
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_3->addWidget(label_2, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(9, -1, 0, -1);
        pushButton = new QPushButton(Page1);
        pushButton->setObjectName("pushButton");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy2);
        QFont font3;
        font3.setBold(true);
        pushButton->setFont(font3);
        pushButton->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(213, 245, 255);"));
        pushButton->setAutoRepeatDelay(304);
        pushButton->setAutoRepeatInterval(97);

        horizontalLayout->addWidget(pushButton);

        lineEdit = new QLineEdit(Page1);
        lineEdit->setObjectName("lineEdit");
        sizePolicy2.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy2);
        lineEdit->setStyleSheet(QString::fromUtf8("color: rgb(219, 254, 255);"));

        horizontalLayout->addWidget(lineEdit);

        pushButton_4 = new QPushButton(Page1);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setFont(font3);
        pushButton_4->setStyleSheet(QString::fromUtf8("color: rgb(208, 246, 255);"));

        horizontalLayout->addWidget(pushButton_4);

        pushButton_2 = new QPushButton(Page1);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setFont(font3);
        pushButton_2->setStyleSheet(QString::fromUtf8("color: rgb(217, 249, 255);"));

        horizontalLayout->addWidget(pushButton_2);

        lineEdit_2 = new QLineEdit(Page1);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setStyleSheet(QString::fromUtf8("color: rgb(212, 245, 255);"));

        horizontalLayout->addWidget(lineEdit_2);

        pushButton_3 = new QPushButton(Page1);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setFont(font3);
        pushButton_3->setStyleSheet(QString::fromUtf8("color: rgb(211, 241, 255);"));

        horizontalLayout->addWidget(pushButton_3);

        lineEdit_3 = new QLineEdit(Page1);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setStyleSheet(QString::fromUtf8("color: rgb(226, 248, 255);"));

        horizontalLayout->addWidget(lineEdit_3);

        lineEdit_4 = new QLineEdit(Page1);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setStyleSheet(QString::fromUtf8("color: rgb(222, 246, 255);"));

        horizontalLayout->addWidget(lineEdit_4);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        gridLayout_3->addLayout(horizontalLayout, 3, 0, 1, 3);

        label = new QLabel(Page1);
        label->setObjectName("label");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy3);
        label->setFont(font3);
        label->setStyleSheet(QString::fromUtf8(""));
        label->setTextFormat(Qt::TextFormat::AutoText);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_3->addWidget(label, 0, 2, 1, 1);

        groupBox = new QGroupBox(Page1);
        groupBox->setObjectName("groupBox");
        sizePolicy3.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy3);
        groupBox->setFont(font3);
        groupBox->setStyleSheet(QString::fromUtf8("    QGroupBox {\n"
"        font-size: 16px;\n"
"        font-weight: bold;\n"
"        color: rgb(205, 221, 255); /* \346\240\207\351\242\230\351\242\234\350\211\262 */\n"
"        border: 1px solid gray;\n"
"        margin-top: 20px; /* \346\240\207\351\242\230\344\270\216\350\276\271\346\241\206\350\267\235\347\246\273 */\n"
"    }\n"
"\n"
"    QGroupBox::title {\n"
"        subcontrol-origin: margin;\n"
"        subcontrol-position: top center; /* \346\240\207\351\242\230\345\261\205\344\270\255 */\n"
"        padding: 0 3px;\n"
"        background-color: transparent;\n"
"    }\n"
""));
        gridLayout_4 = new QGridLayout(groupBox);
        gridLayout_4->setObjectName("gridLayout_4");
        cameraWidget = new QVideoWidget(groupBox);
        cameraWidget->setObjectName("cameraWidget");

        gridLayout_4->addWidget(cameraWidget, 0, 0, 1, 1);


        gridLayout_3->addWidget(groupBox, 1, 1, 1, 2);

        gridLayout_3->setColumnStretch(0, 1);
        gridLayout_3->setColumnStretch(1, 1);
        stackWidget1->addWidget(Page1);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        page_3->setStyleSheet(QString::fromUtf8("background-color: #1E1E2F;"));
        verticalLayout_4 = new QVBoxLayout(page_3);
        verticalLayout_4->setObjectName("verticalLayout_4");
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        groupBox_4 = new QGroupBox(page_3);
        groupBox_4->setObjectName("groupBox_4");
        groupBox_4->setStyleSheet(QString::fromUtf8("    QGroupBox {\n"
"        font-size: 16px;\n"
"        font-weight: bold;\n"
"        color: rgb(205, 221, 255); /* \346\240\207\351\242\230\351\242\234\350\211\262 */\n"
"        border: 1px solid gray;\n"
"        margin-top: 20px; /* \346\240\207\351\242\230\344\270\216\350\276\271\346\241\206\350\267\235\347\246\273 */\n"
"    }\n"
"\n"
"    QGroupBox::title {\n"
"        subcontrol-origin: margin;\n"
"        subcontrol-position: top center; /* \346\240\207\351\242\230\345\261\205\344\270\255 */\n"
"        padding: 0 3px;\n"
"        background-color: transparent;\n"
"    }\n"
""));
        gridLayout_6 = new QGridLayout(groupBox_4);
        gridLayout_6->setObjectName("gridLayout_6");
        tableWidget_2 = new QTableWidget(groupBox_4);
        tableWidget_2->setObjectName("tableWidget_2");
        tableWidget_2->setStyleSheet(QString::fromUtf8(""));

        gridLayout_6->addWidget(tableWidget_2, 0, 0, 1, 1);


        gridLayout_2->addWidget(groupBox_4, 1, 0, 1, 1);

        groupBox_3 = new QGroupBox(page_3);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setStyleSheet(QString::fromUtf8("    QGroupBox {\n"
"        font-size: 16px;\n"
"        font-weight: bold;\n"
"        color: rgb(205, 221, 255); /* \346\240\207\351\242\230\351\242\234\350\211\262 */\n"
"        border: 1px solid gray;\n"
"        margin-top: 20px; /* \346\240\207\351\242\230\344\270\216\350\276\271\346\241\206\350\267\235\347\246\273 */\n"
"    }\n"
"\n"
"    QGroupBox::title {\n"
"        subcontrol-origin: margin;\n"
"        subcontrol-position: top center; /* \346\240\207\351\242\230\345\261\205\344\270\255 */\n"
"        padding: 0 3px;\n"
"        background-color: transparent;\n"
"    }\n"
""));
        gridLayout_7 = new QGridLayout(groupBox_3);
        gridLayout_7->setObjectName("gridLayout_7");
        tableWidget_3 = new QTableWidget(groupBox_3);
        tableWidget_3->setObjectName("tableWidget_3");

        gridLayout_7->addWidget(tableWidget_3, 0, 0, 1, 1);


        gridLayout_2->addWidget(groupBox_3, 1, 1, 1, 1);

        customPlot = new QCustomPlot(page_3);
        customPlot->setObjectName("customPlot");
        customPlot->setStyleSheet(QString::fromUtf8("background-color: #1E1E2F;"));

        gridLayout_2->addWidget(customPlot, 0, 0, 1, 2);

        gridLayout_2->setRowStretch(0, 1);
        gridLayout_2->setRowStretch(1, 1);

        verticalLayout_4->addLayout(gridLayout_2);

        stackWidget1->addWidget(page_3);
        page = new QWidget();
        page->setObjectName("page");
        gridLayout_9 = new QGridLayout(page);
        gridLayout_9->setObjectName("gridLayout_9");
        gridLayout_8 = new QGridLayout();
        gridLayout_8->setObjectName("gridLayout_8");
        label_4 = new QLabel(page);
        label_4->setObjectName("label_4");
        QFont font4;
        font4.setPointSize(16);
        font4.setBold(true);
        label_4->setFont(font4);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(205, 221, 255);"));
        label_4->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_8->addWidget(label_4, 0, 0, 1, 1);

        tableWidget_4 = new QTableWidget(page);
        tableWidget_4->setObjectName("tableWidget_4");

        gridLayout_8->addWidget(tableWidget_4, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        pushButton_5 = new QPushButton(page);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: qlineargradient(\n"
"        spread:pad,\n"
"        x1:0, y1:0, x2:0, y2:1,\n"
"        stop:0 rgb(211, 241, 255),   /* \351\241\266\351\203\250\351\242\234\350\211\262 */\n"
"        stop:1 rgb(150, 200, 230)    /* \345\272\225\351\203\250\351\242\234\350\211\262 */\n"
"    );\n"
"    color: black;                /* \345\255\227\344\275\223\351\242\234\350\211\262 */\n"
"    border: none;                /* \345\216\273\346\216\211\350\276\271\346\241\206\347\272\277 */\n"
"    border-radius: 10px;         /* \345\234\206\350\247\222\345\215\212\345\276\204 */\n"
"    padding: 6px 12px;           /* \345\206\205\350\276\271\350\267\235 */\n"
"    font-size: 14px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(\n"
"        spread:pad,\n"
"        x1:0, y1:0, x2:0, y2:1,\n"
"        stop:0 rgb(190, 230, 250),\n"
"        stop:1 rgb(130, 180, 210)\n"
"    );  /* \346\202\254\345\201\234\351\242\234\350\211\262 */\n"
"}\n"
"QPushButton:pressed {\n"
""
                        "       background-color: qlineargradient(\n"
"        spread:pad, \n"
"        x1:0, y1:0, x2:0, y2:1, \n"
"        stop:0 #141420, \n"
"        stop:1 #2E2E48\n"
"    );   /* \346\214\211\344\270\213\351\242\234\350\211\262 */\n"
"}\n"
""));

        horizontalLayout_2->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(page);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: qlineargradient(\n"
"        spread:pad,\n"
"        x1:0, y1:0, x2:0, y2:1,\n"
"        stop:0 rgb(211, 241, 255),   /* \351\241\266\351\203\250\351\242\234\350\211\262 */\n"
"        stop:1 rgb(150, 200, 230)    /* \345\272\225\351\203\250\351\242\234\350\211\262 */\n"
"    );\n"
"    color: black;                /* \345\255\227\344\275\223\351\242\234\350\211\262 */\n"
"    border: none;                /* \345\216\273\346\216\211\350\276\271\346\241\206\347\272\277 */\n"
"    border-radius: 10px;         /* \345\234\206\350\247\222\345\215\212\345\276\204 */\n"
"    padding: 6px 12px;           /* \345\206\205\350\276\271\350\267\235 */\n"
"    font-size: 14px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(\n"
"        spread:pad,\n"
"        x1:0, y1:0, x2:0, y2:1,\n"
"        stop:0 rgb(190, 230, 250),\n"
"        stop:1 rgb(130, 180, 210)\n"
"    );  /* \346\202\254\345\201\234\351\242\234\350\211\262 */\n"
"}\n"
"QPushButton:pressed {\n"
""
                        "       background-color: qlineargradient(\n"
"        spread:pad, \n"
"        x1:0, y1:0, x2:0, y2:1, \n"
"        stop:0 #141420, \n"
"        stop:1 #2E2E48\n"
"    );   /* \346\214\211\344\270\213\351\242\234\350\211\262 */\n"
"}\n"
""));

        horizontalLayout_2->addWidget(pushButton_6);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        horizontalLayout_2->setStretch(0, 2);
        horizontalLayout_2->setStretch(1, 2);
        horizontalLayout_2->setStretch(2, 9);

        gridLayout_8->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        gridLayout_8->setRowStretch(0, 1);
        gridLayout_8->setRowStretch(1, 9);
        gridLayout_8->setRowStretch(2, 1);

        gridLayout_9->addLayout(gridLayout_8, 0, 0, 1, 1);

        stackWidget1->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        gridLayout_10 = new QGridLayout(page_2);
        gridLayout_10->setObjectName("gridLayout_10");
        tableView = new QTableView(page_2);
        tableView->setObjectName("tableView");
        tableView->setStyleSheet(QString::fromUtf8("/* \346\225\264\344\275\223\350\241\250\346\240\274 */\n"
"QTableView {\n"
"    background-color: #1E1E2F; /* \346\267\261\350\211\262\350\203\214\346\231\257 */\n"
"    color: #E0E0E0;           /* \351\273\230\350\256\244\346\226\207\345\255\227\351\242\234\350\211\262 */\n"
"    gridline-color: #2C2C3C;  /* \347\275\221\346\240\274\347\272\277\351\242\234\350\211\262 */\n"
"    border: 1px solid #00BFFF; /* \347\247\221\346\212\200\350\223\235\350\276\271\346\241\206 */\n"
"    selection-background-color: #007ACC; /* \351\200\211\344\270\255\350\203\214\346\231\257 */\n"
"    selection-color: white;   /* \351\200\211\344\270\255\345\255\227\344\275\223\351\242\234\350\211\262 */\n"
"    alternate-background-color: #252538; /* \344\272\244\346\233\277\350\241\214\351\242\234\350\211\262 */\n"
"    font-size: 14px;\n"
"    font-family: \"Microsoft YaHei\";\n"
"}\n"
"\n"
"/* \350\241\250\345\244\264 */\n"
"QHeaderView::section {\n"
"    background-color: #0D1B2A;\n"
"    color: #00BFFF;\n"
"    font-weight: bo"
                        "ld;\n"
"    font-size: 14px;\n"
"    padding: 4px;\n"
"    border: 1px solid #1B263B;\n"
"}\n"
"\n"
"/* \351\274\240\346\240\207\346\202\254\345\201\234\345\215\225\345\205\203\346\240\274 */\n"
"QTableView::item:hover {\n"
"    background-color: rgba(0, 191, 255, 0.2);\n"
"}\n"
"\n"
"/* \351\274\240\346\240\207\346\202\254\345\201\234\344\270\224\351\200\211\344\270\255 */\n"
"QTableView::item:selected:hover {\n"
"    background-color: #0096FF;\n"
"}\n"
"\n"
"/* \347\274\226\350\276\221\347\212\266\346\200\201\344\270\213\347\232\204\350\276\223\345\205\245\346\241\206\357\274\210QLineEdit\357\274\211 */\n"
"QTableView QLineEdit {\n"
"    background-color: #0D1B2A; /* \346\267\261\350\211\262\350\203\214\346\231\257 */\n"
"    color: #00FFEA;           /* \347\247\221\346\212\200\350\223\235\347\273\277\350\211\262\345\255\227\344\275\223 */\n"
"    border: 1px solid #00BFFF;\n"
"    selection-background-color: #007ACC;\n"
"    selection-color: white;\n"
"}\n"
"QTableCornerButton::section {\n"
"    border: no"
                        "ne;\n"
"background-color: #0D1B2A;\n"
"}\n"
""));
        tableView->setCornerButtonEnabled(false);
        tableView->horizontalHeader()->setStretchLastSection(false);

        gridLayout_10->addWidget(tableView, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_5 = new QLabel(page_2);
        label_5->setObjectName("label_5");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy4);
        label_5->setStyleSheet(QString::fromUtf8("\n"
"  color: rgb(205, 221, 255);               /* \345\255\227\344\275\223\351\242\234\350\211\262 */\n"
"    border: none;                /* \345\216\273\346\216\211\350\276\271\346\241\206\347\272\277 */\n"
"    border-radius: 10px;         /* \345\234\206\350\247\222\345\215\212\345\276\204 */\n"
"    padding: 9px 0px;           /* \345\206\205\350\276\271\350\267\235 */\n"
"    font-size: 14px;\n"
"\n"
"\n"
""));
        label_5->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_3->addWidget(label_5);

        lineEdit_5 = new QLineEdit(page_2);
        lineEdit_5->setObjectName("lineEdit_5");

        horizontalLayout_3->addWidget(lineEdit_5);

        pushButton_9 = new QPushButton(page_2);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: qlineargradient(\n"
"        spread:pad,\n"
"        x1:0, y1:0, x2:0, y2:1,\n"
"        stop:0 rgb(211, 241, 255),   /* \351\241\266\351\203\250\351\242\234\350\211\262 */\n"
"        stop:1 rgb(150, 200, 230)    /* \345\272\225\351\203\250\351\242\234\350\211\262 */\n"
"    );\n"
"    color: black;                /* \345\255\227\344\275\223\351\242\234\350\211\262 */\n"
"    border: none;                /* \345\216\273\346\216\211\350\276\271\346\241\206\347\272\277 */\n"
"    border-radius: 10px;         /* \345\234\206\350\247\222\345\215\212\345\276\204 */\n"
"    padding: 6px 12px;           /* \345\206\205\350\276\271\350\267\235 */\n"
"    font-size: 14px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(\n"
"        spread:pad,\n"
"        x1:0, y1:0, x2:0, y2:1,\n"
"        stop:0 rgb(190, 230, 250),\n"
"        stop:1 rgb(130, 180, 210)\n"
"    );  /* \346\202\254\345\201\234\351\242\234\350\211\262 */\n"
"}\n"
"QPushButton:pressed {\n"
""
                        "       background-color: qlineargradient(\n"
"        spread:pad, \n"
"        x1:0, y1:0, x2:0, y2:1, \n"
"        stop:0 #141420, \n"
"        stop:1 #2E2E48\n"
"    );   /* \346\214\211\344\270\213\351\242\234\350\211\262 */\n"
"}\n"
""));

        horizontalLayout_3->addWidget(pushButton_9);

        pushButton_8 = new QPushButton(page_2);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: qlineargradient(\n"
"        spread:pad,\n"
"        x1:0, y1:0, x2:0, y2:1,\n"
"        stop:0 rgb(211, 241, 255),   /* \351\241\266\351\203\250\351\242\234\350\211\262 */\n"
"        stop:1 rgb(150, 200, 230)    /* \345\272\225\351\203\250\351\242\234\350\211\262 */\n"
"    );\n"
"    color: black;                /* \345\255\227\344\275\223\351\242\234\350\211\262 */\n"
"    border: none;                /* \345\216\273\346\216\211\350\276\271\346\241\206\347\272\277 */\n"
"    border-radius: 10px;         /* \345\234\206\350\247\222\345\215\212\345\276\204 */\n"
"    padding: 6px 12px;           /* \345\206\205\350\276\271\350\267\235 */\n"
"    font-size: 14px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(\n"
"        spread:pad,\n"
"        x1:0, y1:0, x2:0, y2:1,\n"
"        stop:0 rgb(190, 230, 250),\n"
"        stop:1 rgb(130, 180, 210)\n"
"    );  /* \346\202\254\345\201\234\351\242\234\350\211\262 */\n"
"}\n"
"QPushButton:pressed {\n"
""
                        "       background-color: qlineargradient(\n"
"        spread:pad, \n"
"        x1:0, y1:0, x2:0, y2:1, \n"
"        stop:0 #141420, \n"
"        stop:1 #2E2E48\n"
"    );   /* \346\214\211\344\270\213\351\242\234\350\211\262 */\n"
"}\n"
""));

        horizontalLayout_3->addWidget(pushButton_8);

        pushButton_7 = new QPushButton(page_2);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: qlineargradient(\n"
"        spread:pad,\n"
"        x1:0, y1:0, x2:0, y2:1,\n"
"        stop:0 rgb(211, 241, 255),   /* \351\241\266\351\203\250\351\242\234\350\211\262 */\n"
"        stop:1 rgb(150, 200, 230)    /* \345\272\225\351\203\250\351\242\234\350\211\262 */\n"
"    );\n"
"    color: black;                /* \345\255\227\344\275\223\351\242\234\350\211\262 */\n"
"    border: none;                /* \345\216\273\346\216\211\350\276\271\346\241\206\347\272\277 */\n"
"    border-radius: 10px;         /* \345\234\206\350\247\222\345\215\212\345\276\204 */\n"
"    padding: 6px 12px;           /* \345\206\205\350\276\271\350\267\235 */\n"
"    font-size: 14px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(\n"
"        spread:pad,\n"
"        x1:0, y1:0, x2:0, y2:1,\n"
"        stop:0 rgb(190, 230, 250),\n"
"        stop:1 rgb(130, 180, 210)\n"
"    );  /* \346\202\254\345\201\234\351\242\234\350\211\262 */\n"
"}\n"
"QPushButton:pressed {\n"
""
                        "       background-color: qlineargradient(\n"
"        spread:pad, \n"
"        x1:0, y1:0, x2:0, y2:1, \n"
"        stop:0 #141420, \n"
"        stop:1 #2E2E48\n"
"    );   /* \346\214\211\344\270\213\351\242\234\350\211\262 */\n"
"}\n"
""));

        horizontalLayout_3->addWidget(pushButton_7);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 3);
        horizontalLayout_3->setStretch(2, 1);
        horizontalLayout_3->setStretch(3, 1);
        horizontalLayout_3->setStretch(4, 1);
        horizontalLayout_3->setStretch(5, 9);

        gridLayout_10->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        gridLayout_10->setRowStretch(0, 1);
        gridLayout_10->setRowStretch(1, 9);
        stackWidget1->addWidget(page_2);

        gridLayout->addWidget(stackWidget1, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 898, 26));
        menubar->setStyleSheet(QString::fromUtf8("\n"
"    QMenuBar {\n"
"        background-color: #1E1E2F;\n"
"        color: white;\n"
"    }\n"
"\n"
"    QMenuBar::item {\n"
"        background-color: transparent;\n"
"        padding: 5px 15px;\n"
"    }\n"
"\n"
"    QMenuBar::item:selected {\n"
"        background-color: darkCyan;  /* \351\274\240\346\240\207\346\202\254\345\201\234\346\227\266\347\232\204\351\242\234\350\211\262 */\n"
"        color: white;\n"
"    }\n"
"\n"
"    QMenuBar::item:pressed {\n"
"        background-color: #007ACC;  /* \351\274\240\346\240\207\347\202\271\345\207\273\346\227\266\347\232\204\351\242\234\350\211\262 */\n"
"    }"));
        menuMenu = new QMenu(menubar);
        menuMenu->setObjectName("menuMenu");
        menuMenu->setFont(font3);
        menuMenu->setStyleSheet(QString::fromUtf8("        QMenu {\n"
"            background-color: #1E1E2F;\n"
"            color: white;\n"
"            border: 1px solid #444;\n"
"        }\n"
"\n"
"        QMenu::item {\n"
"            background-color: transparent;\n"
"            padding: 6px 20px;\n"
"        }\n"
"\n"
"        QMenu::item:selected {\n"
"            background-color: darkCyan;\n"
"            color: white;\n"
"        }\n"
"\n"
"        QMenu::item:pressed {\n"
"            background-color: #007ACC;\n"
"        }"));
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menuMenu->menuAction());
        menuMenu->addAction(actionac1_2);
        menuMenu->addSeparator();
        menuMenu->addAction(actionac2_2);
        menuMenu->addSeparator();
        menuMenu->addAction(actionac1_3);

        retranslateUi(MainWindow);

        stackWidget1->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionac1->setText(QCoreApplication::translate("MainWindow", "ac1", nullptr));
        actionac2->setText(QCoreApplication::translate("MainWindow", "ac2", nullptr));
        actionac1_2->setText(QCoreApplication::translate("MainWindow", "Main", nullptr));
        actionac2_2->setText(QCoreApplication::translate("MainWindow", "System monitor", nullptr));
        actionac1_3->setText(QCoreApplication::translate("MainWindow", "Param", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Camera Status:", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Current Info View", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Message Display", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "CONNECT", nullptr));
#if QT_CONFIG(tooltip)
        lineEdit->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        lineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "ip,rack,slot", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "DISCONNECT", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "READ", nullptr));
        lineEdit_2->setPlaceholderText(QCoreApplication::translate("MainWindow", "DB,StartAddress,ReadLengh", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Write", nullptr));
        lineEdit_3->setPlaceholderText(QCoreApplication::translate("MainWindow", "DB,StartAddress", nullptr));
        lineEdit_4->setPlaceholderText(QCoreApplication::translate("MainWindow", "DATA", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Camera", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "IP,Port Used", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "Disk usage", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Param setting", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "Refresh", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "User:", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "Search", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "Import", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "Export", nullptr));
        menuMenu->setTitle(QCoreApplication::translate("MainWindow", "Menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
