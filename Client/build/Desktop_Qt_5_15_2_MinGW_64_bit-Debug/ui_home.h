/********************************************************************************
** Form generated from reading UI file 'home.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOME_H
#define UI_HOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_home
{
public:
    QWidget *advertising_widget;
    QGridLayout *gridLayout;
    QLabel *advertising2;
    QLabel *advertising1;
    QScrollArea *goodsScrollArea;
    QWidget *scrollAreaWidgetContents;
    QWidget *my_center;
    QToolButton *profilePhoto;
    QLabel *label;

    void setupUi(QWidget *home)
    {
        if (home->objectName().isEmpty())
            home->setObjectName(QString::fromUtf8("home"));
        home->resize(2000, 1000);
        home->setStyleSheet(QString::fromUtf8("/* \345\205\250\345\261\200\346\240\267\345\274\217 */\n"
"QWidget {\n"
"    background-color: #FFFFFF;\n"
"    font-family: \"Microsoft YaHei\";\n"
"    font-size: 14px;\n"
"}\n"
"\n"
"/* \346\220\234\347\264\242\346\240\217\346\240\267\345\274\217 */\n"
"QLineEdit {\n"
"    border: 2px solid #FF6A00;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"    font-size: 16px;\n"
"    background-color: #FFFFFF;\n"
"}\n"
"\n"
"QLineEdit::placeholder {\n"
"    color: #AAAAAA;\n"
"}\n"
"\n"
"/* \346\214\211\351\222\256\346\240\267\345\274\217 */\n"
"QPushButton {\n"
"    background-color: #FF6A00;\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 10px;\n"
"    font-size: 14px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #FF4500;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #CC3700;\n"
"}\n"
"\n"
"/* \345\267\246\344\276\247\345\271\277\345\221\212\346\240\217\346\240\267\345\274\217 */\n"
"QLabel#ad1, QLabel#ad2 {\n"
"    border: 1px solid #FF6A00;\n"
"    border"
                        "-radius: 10px;\n"
"    margin: 10px;\n"
"}\n"
"\n"
"/* \345\225\206\345\223\201\346\250\241\345\235\227\346\240\267\345\274\217 */\n"
"QLabel {\n"
"    background-color: #FFF2E6;\n"
"    border: 1px solid #FF6A00;\n"
"    border-radius: 5px;\n"
"    padding: 10px;\n"
"    text-align: center;\n"
"}\n"
"\n"
"QLabel:hover {\n"
"    background-color: #FFEDD6;\n"
"}\n"
"\n"
"/* \346\273\232\345\212\250\345\214\272\346\240\267\345\274\217 */\n"
"QScrollArea {\n"
"    border: 1px solid #EEEEEE;\n"
"    background-color: #FFFFFF;\n"
"}\n"
"\n"
"QScrollArea QScrollBar:vertical {\n"
"    background: #F5F5F5;\n"
"    width: 10px;\n"
"}\n"
"\n"
"QScrollArea QScrollBar::handle:vertical {\n"
"    background: #FF6A00;\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
""));
        advertising_widget = new QWidget(home);
        advertising_widget->setObjectName(QString::fromUtf8("advertising_widget"));
        advertising_widget->setGeometry(QRect(40, 150, 221, 831));
        gridLayout = new QGridLayout(advertising_widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        advertising2 = new QLabel(advertising_widget);
        advertising2->setObjectName(QString::fromUtf8("advertising2"));
        advertising2->setPixmap(QPixmap(QString::fromUtf8(":/image/6.jpg")));
        advertising2->setScaledContents(true);

        gridLayout->addWidget(advertising2, 1, 0, 1, 1);

        advertising1 = new QLabel(advertising_widget);
        advertising1->setObjectName(QString::fromUtf8("advertising1"));
        advertising1->setPixmap(QPixmap(QString::fromUtf8(":/image/3.jpg")));
        advertising1->setScaledContents(true);

        gridLayout->addWidget(advertising1, 0, 0, 1, 1);

        goodsScrollArea = new QScrollArea(home);
        goodsScrollArea->setObjectName(QString::fromUtf8("goodsScrollArea"));
        goodsScrollArea->setGeometry(QRect(311, 40, 1671, 951));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(goodsScrollArea->sizePolicy().hasHeightForWidth());
        goodsScrollArea->setSizePolicy(sizePolicy);
        goodsScrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1669, 949));
        goodsScrollArea->setWidget(scrollAreaWidgetContents);
        my_center = new QWidget(home);
        my_center->setObjectName(QString::fromUtf8("my_center"));
        my_center->setGeometry(QRect(30, 30, 261, 101));
        profilePhoto = new QToolButton(my_center);
        profilePhoto->setObjectName(QString::fromUtf8("profilePhoto"));
        profilePhoto->setGeometry(QRect(10, 0, 91, 81));
        profilePhoto->setStyleSheet(QString::fromUtf8(""));
        label = new QLabel(my_center);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, 20, 111, 61));

        retranslateUi(home);

        QMetaObject::connectSlotsByName(home);
    } // setupUi

    void retranslateUi(QWidget *home)
    {
        home->setWindowTitle(QCoreApplication::translate("home", "Form", nullptr));
        advertising2->setText(QString());
        advertising1->setText(QString());
        profilePhoto->setText(QString());
        label->setText(QCoreApplication::translate("home", "Hi~\344\270\213\345\215\210\345\245\275", nullptr));
    } // retranslateUi

};

namespace Ui {
    class home: public Ui_home {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOME_H
