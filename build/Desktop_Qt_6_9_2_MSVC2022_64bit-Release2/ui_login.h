/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_5;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *horizontalSpacer_4;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_6;
    QLineEdit *lineEdit_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QWidget *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName("Login");
        Login->resize(600, 400);
        Login->setStyleSheet(QString::fromUtf8("    background-color: qlineargradient(\n"
"        x1: 0, y1: 0, x2: 0, y2: 1,\n"
"        stop: 0 #1E1E2F,\n"
"        stop: 1 #2A2A3F\n"
"    );\n"
"\n"
"  border: 1px solid  rgb(44, 53, 94);\n"
"\n"
"    border-radius: 20px;\n"
"\n"
""));
        gridLayout_2 = new QGridLayout(Login);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 2, 0, 1, 1);

        groupBox = new QGroupBox(Login);
        groupBox->setObjectName("groupBox");
        groupBox->setStyleSheet(QString::fromUtf8("    QGroupBox {\n"
"        font-size: 16px;\n"
"        font-weight: bold;\n"
"        color: rgb(205, 221, 255); /* \346\240\207\351\242\230\351\242\234\350\211\262 */\n"
"        border: 3px solid #2c3e50;  \n"
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
        gridLayout_5 = new QGridLayout(groupBox);
        gridLayout_5->setObjectName("gridLayout_5");
        gridLayout_5->setContentsMargins(-1, -1, 9, -1);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"color: rgb(213, 245, 255);\n"
"border-color: transparent;"));
        label_2->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout_5->addWidget(label_2, 3, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_2, 1, 4, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_8, 3, 2, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_7, 1, 2, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_4, 3, 4, 1, 1);

        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName("comboBox");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy1);
        comboBox->setStyleSheet(QString::fromUtf8("  border: 1px solid rgb(180, 180, 180);\n"
"background-color: rgb(224, 249, 255);\n"
"    border-radius: 6px;\n"
"    padding: 4px 8px;\n"
"    font-size: 14px;\n"
"    color: #333;\n"
"border-color: rgb(193, 223, 255);"));

        gridLayout_5->addWidget(comboBox, 1, 3, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName("pushButton_2");
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setBold(true);
        pushButton_2->setFont(font1);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {color: rgb(187, 240, 255)}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(74, 186, 255);       /* \351\274\240\346\240\207\346\202\254\346\265\256\346\227\266\357\274\232\347\225\245\346\267\261\347\273\277\350\211\262 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(123, 132, 255);       /* \351\274\240\346\240\207\347\202\271\345\207\273\346\227\266\357\274\232\346\233\264\346\267\261\347\273\277\350\211\262 */\n"
"}\n"
"\n"
""));

        horizontalLayout->addWidget(pushButton_2);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_9);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {color: rgb(187, 240, 255)}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(74, 186, 255);       /* \351\274\240\346\240\207\346\202\254\346\265\256\346\227\266\357\274\232\347\225\245\346\267\261\347\273\277\350\211\262 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(123, 132, 255);       /* \351\274\240\346\240\207\347\202\271\345\207\273\346\227\266\357\274\232\346\233\264\346\267\261\347\273\277\350\211\262 */\n"
"}\n"
"\n"
""));

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);

        horizontalLayout->setStretch(0, 9);
        horizontalLayout->setStretch(1, 4);
        horizontalLayout->setStretch(2, 1);
        horizontalLayout->setStretch(3, 4);
        horizontalLayout->setStretch(4, 9);

        gridLayout_5->addLayout(horizontalLayout, 5, 0, 1, 5);

        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName("lineEdit_2");
        sizePolicy1.setHeightForWidth(lineEdit_2->sizePolicy().hasHeightForWidth());
        lineEdit_2->setSizePolicy(sizePolicy1);
        lineEdit_2->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(180, 180, 180);\n"
"\n"
"    border-radius: 6px;\n"
"    padding: 4px 8px;\n"
"    font-size: 14px;\n"
"    color: lightgray;\n"
"border-color: rgb(193, 223, 255);\n"
"\n"
"\n"
"\n"
"\n"
""));
        lineEdit_2->setEchoMode(QLineEdit::EchoMode::Password);

        gridLayout_5->addWidget(lineEdit_2, 3, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_5->addItem(horizontalSpacer, 1, 0, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName("label");
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"color: rgb(213, 245, 255);\n"
"border-color: transparent;"));
        label->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout_5->addWidget(label, 1, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_3, 3, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_5->addItem(verticalSpacer_3, 0, 3, 1, 1);

        gridLayout_5->setRowStretch(2, 1);
        gridLayout_5->setRowStretch(3, 1);
        gridLayout_5->setRowStretch(4, 1);
        gridLayout_5->setRowStretch(5, 4);
        gridLayout_5->setColumnStretch(0, 4);
        gridLayout_5->setColumnStretch(1, 6);
        gridLayout_5->setColumnStretch(2, 1);
        gridLayout_5->setColumnStretch(3, 8);
        gridLayout_5->setColumnStretch(4, 9);

        gridLayout->addWidget(groupBox, 1, 0, 1, 1);

        gridLayout->setRowStretch(0, 1);
        gridLayout->setRowStretch(1, 6);
        gridLayout->setRowStretch(2, 1);

        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QWidget *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Form", nullptr));
        groupBox->setTitle(QString());
        label_2->setText(QCoreApplication::translate("Login", "Password", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Login", "Cancel", nullptr));
        pushButton->setText(QCoreApplication::translate("Login", "Login", nullptr));
        label->setText(QCoreApplication::translate("Login", "User", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
