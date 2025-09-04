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
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
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
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QStackedWidget *stackWidget1;
    QWidget *Page1;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QTextBrowser *textBrowser;
    QTableWidget *tableWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QWidget *page_3;
    QVBoxLayout *verticalLayout_4;
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer;
    QCustomPlot *customPlot;
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
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        centralwidget->setStyleSheet(QString::fromUtf8("background-color: #1E1E2F;"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        stackWidget1 = new QStackedWidget(centralwidget);
        stackWidget1->setObjectName("stackWidget1");
        Page1 = new QWidget();
        Page1->setObjectName("Page1");
        verticalLayout = new QVBoxLayout(Page1);
        verticalLayout->setObjectName("verticalLayout");
        label_2 = new QLabel(Page1);
        label_2->setObjectName("label_2");
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(205, 221, 255);"));
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label_2);

        textBrowser = new QTextBrowser(Page1);
        textBrowser->setObjectName("textBrowser");
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

        verticalLayout->addWidget(textBrowser);

        tableWidget = new QTableWidget(Page1);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(tableWidget);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        gridLayout->setHorizontalSpacing(2);
        gridLayout->setVerticalSpacing(1);
        gridLayout->setContentsMargins(9, -1, 0, -1);
        pushButton = new QPushButton(Page1);
        pushButton->setObjectName("pushButton");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        QFont font2;
        font2.setBold(true);
        pushButton->setFont(font2);
        pushButton->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(213, 245, 255);"));
        pushButton->setAutoRepeatDelay(304);
        pushButton->setAutoRepeatInterval(97);

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 8, 1, 1);

        lineEdit_2 = new QLineEdit(Page1);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setStyleSheet(QString::fromUtf8("color: rgb(212, 245, 255);"));

        gridLayout->addWidget(lineEdit_2, 0, 4, 1, 1);

        lineEdit_3 = new QLineEdit(Page1);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setStyleSheet(QString::fromUtf8("color: rgb(226, 248, 255);"));

        gridLayout->addWidget(lineEdit_3, 0, 6, 1, 1);

        pushButton_3 = new QPushButton(Page1);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setFont(font2);
        pushButton_3->setStyleSheet(QString::fromUtf8("color: rgb(211, 241, 255);"));

        gridLayout->addWidget(pushButton_3, 0, 5, 1, 1);

        lineEdit_4 = new QLineEdit(Page1);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setStyleSheet(QString::fromUtf8("color: rgb(222, 246, 255);"));

        gridLayout->addWidget(lineEdit_4, 0, 7, 1, 1);

        lineEdit = new QLineEdit(Page1);
        lineEdit->setObjectName("lineEdit");
        sizePolicy1.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy1);
        lineEdit->setStyleSheet(QString::fromUtf8("color: rgb(219, 254, 255);"));

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        pushButton_2 = new QPushButton(Page1);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setFont(font2);
        pushButton_2->setStyleSheet(QString::fromUtf8("color: rgb(217, 249, 255);"));

        gridLayout->addWidget(pushButton_2, 0, 3, 1, 1);

        pushButton_4 = new QPushButton(Page1);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setFont(font2);
        pushButton_4->setStyleSheet(QString::fromUtf8("color: rgb(208, 246, 255);"));

        gridLayout->addWidget(pushButton_4, 0, 2, 1, 1);

        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(1, 2);
        gridLayout->setColumnStretch(2, 1);
        gridLayout->setColumnStretch(3, 1);
        gridLayout->setColumnStretch(4, 2);
        gridLayout->setColumnStretch(5, 1);
        gridLayout->setColumnStretch(6, 2);
        gridLayout->setColumnStretch(7, 2);

        verticalLayout->addLayout(gridLayout);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 9);
        verticalLayout->setStretch(3, 1);
        stackWidget1->addWidget(Page1);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        page_3->setStyleSheet(QString::fromUtf8("background-color: #1E1E2F;"));
        verticalLayout_4 = new QVBoxLayout(page_3);
        verticalLayout_4->setObjectName("verticalLayout_4");
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 1, 0, 1, 1);

        customPlot = new QCustomPlot(page_3);
        customPlot->setObjectName("customPlot");
        customPlot->setStyleSheet(QString::fromUtf8("background-color: #1E1E2F;"));

        gridLayout_2->addWidget(customPlot, 0, 0, 1, 2);

        gridLayout_2->setRowStretch(0, 1);
        gridLayout_2->setRowStretch(1, 1);
        gridLayout_2->setColumnStretch(1, 9);

        verticalLayout_4->addLayout(gridLayout_2);

        stackWidget1->addWidget(page_3);

        verticalLayout_2->addWidget(stackWidget1);

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
        menuMenu->setFont(font2);
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

        retranslateUi(MainWindow);

        stackWidget1->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionac1->setText(QCoreApplication::translate("MainWindow", "ac1", nullptr));
        actionac2->setText(QCoreApplication::translate("MainWindow", "ac2", nullptr));
        actionac1_2->setText(QCoreApplication::translate("MainWindow", "ac1", nullptr));
        actionac2_2->setText(QCoreApplication::translate("MainWindow", "ac2", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Connection Here ", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "CONNECT", nullptr));
        lineEdit_2->setPlaceholderText(QCoreApplication::translate("MainWindow", "DB,StartAddress,ReadLengh", nullptr));
        lineEdit_3->setPlaceholderText(QCoreApplication::translate("MainWindow", "DB,StartAddress", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Write", nullptr));
        lineEdit_4->setPlaceholderText(QCoreApplication::translate("MainWindow", "DATA", nullptr));
#if QT_CONFIG(tooltip)
        lineEdit->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        lineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "ip,rack,slot", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "READ", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "DISCONNECT", nullptr));
        menuMenu->setTitle(QCoreApplication::translate("MainWindow", "Menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
