/********************************************************************************
** Form generated from reading UI file 'log_in.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOG_IN_H
#define UI_LOG_IN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LogIn
{
public:
    QWidget *widget_2;
    QLabel *logo;
    QWidget *widget_4;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_2;
    QPushButton *register_button;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *username;
    QRadioButton *radioButton;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *password;
    QSpacerItem *verticalSpacer;
    QPushButton *LogInButton;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QWidget *LogIn)
    {
        if (LogIn->objectName().isEmpty())
            LogIn->setObjectName(QString::fromUtf8("LogIn"));
        LogIn->resize(488, 617);
        widget_2 = new QWidget(LogIn);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(90, 30, 331, 151));
        logo = new QLabel(widget_2);
        logo->setObjectName(QString::fromUtf8("logo"));
        logo->setGeometry(QRect(0, 30, 301, 101));
        logo->setPixmap(QPixmap(QString::fromUtf8(":/image/\345\276\256\344\277\241\345\233\276\347\211\207_20241125222833.jpg")));
        widget_4 = new QWidget(LogIn);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setGeometry(QRect(90, 190, 321, 391));
        gridLayout = new QGridLayout(widget_4);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_2, 6, 0, 1, 1);

        register_button = new QPushButton(widget_4);
        register_button->setObjectName(QString::fromUtf8("register_button"));

        gridLayout->addWidget(register_button, 7, 0, 1, 1);

        widget = new QWidget(widget_4);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(label);

        username = new QLineEdit(widget);
        username->setObjectName(QString::fromUtf8("username"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(username->sizePolicy().hasHeightForWidth());
        username->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(username);


        gridLayout->addWidget(widget, 1, 0, 1, 1);

        radioButton = new QRadioButton(widget_4);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        gridLayout->addWidget(radioButton, 3, 0, 1, 1);

        widget_3 = new QWidget(widget_4);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout_2 = new QHBoxLayout(widget_3);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(widget_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        password = new QLineEdit(widget_3);
        password->setObjectName(QString::fromUtf8("password"));

        horizontalLayout_2->addWidget(password);


        gridLayout->addWidget(widget_3, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Preferred);

        gridLayout->addItem(verticalSpacer, 2, 0, 1, 1);

        LogInButton = new QPushButton(widget_4);
        LogInButton->setObjectName(QString::fromUtf8("LogInButton"));

        gridLayout->addWidget(LogInButton, 5, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Preferred);

        gridLayout->addItem(verticalSpacer_3, 4, 0, 1, 1);


        retranslateUi(LogIn);

        QMetaObject::connectSlotsByName(LogIn);
    } // setupUi

    void retranslateUi(QWidget *LogIn)
    {
        LogIn->setWindowTitle(QCoreApplication::translate("LogIn", "Form", nullptr));
        logo->setText(QString());
        register_button->setText(QCoreApplication::translate("LogIn", "\346\234\252\346\234\211\350\264\246\346\210\267\357\274\214\347\253\213\345\215\263\346\263\250\345\206\214", nullptr));
        label->setText(QCoreApplication::translate("LogIn", "\350\264\246\346\210\267", nullptr));
        radioButton->setText(QCoreApplication::translate("LogIn", "\345\215\217\350\256\256", nullptr));
        label_3->setText(QCoreApplication::translate("LogIn", "\345\257\206\347\240\201", nullptr));
        LogInButton->setText(QCoreApplication::translate("LogIn", "\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LogIn: public Ui_LogIn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOG_IN_H
