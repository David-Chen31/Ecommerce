/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Register
{
public:
    QPushButton *GoBack;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton_2;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit;
    QLabel *label_6;
    QRadioButton *radioButton;

    void setupUi(QWidget *Register)
    {
        if (Register->objectName().isEmpty())
            Register->setObjectName(QString::fromUtf8("Register"));
        Register->resize(488, 617);
        GoBack = new QPushButton(Register);
        GoBack->setObjectName(QString::fromUtf8("GoBack"));
        GoBack->setGeometry(QRect(330, 30, 121, 31));
        QFont font;
        font.setPointSize(12);
        GoBack->setFont(font);
        label = new QLabel(Register);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 30, 40, 12));
        label_2 = new QLabel(Register);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(200, 100, 121, 51));
        QFont font1;
        font1.setPointSize(15);
        label_2->setFont(font1);
        label_3 = new QLabel(Register);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(220, 540, 51, 31));
        label_3->setFont(font);
        pushButton_2 = new QPushButton(Register);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(160, 480, 161, 31));
        pushButton_2->setFont(font);
        widget = new QWidget(Register);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(80, 160, 329, 261));
        widget->setFont(font);
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 0, 0, 1, 1);

        lineEdit_3 = new QLineEdit(widget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        gridLayout->addWidget(lineEdit_3, 2, 1, 1, 1);

        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        gridLayout->addWidget(lineEdit_2, 1, 1, 1, 1);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 2, 0, 1, 1);

        radioButton = new QRadioButton(Register);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(130, 430, 221, 21));
        radioButton->setFont(font);

        retranslateUi(Register);

        QMetaObject::connectSlotsByName(Register);
    } // setupUi

    void retranslateUi(QWidget *Register)
    {
        Register->setWindowTitle(QCoreApplication::translate("Register", "Form", nullptr));
        GoBack->setText(QCoreApplication::translate("Register", "\350\277\224\345\233\236\347\231\273\345\275\225", nullptr));
        label->setText(QCoreApplication::translate("Register", "Logo", nullptr));
        label_2->setText(QCoreApplication::translate("Register", "\346\254\242\350\277\216\346\263\250\345\206\214", nullptr));
        label_3->setText(QCoreApplication::translate("Register", "\347\211\210\346\234\254\345\217\267", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Register", "\347\253\213\345\215\263\346\263\250\345\206\214", nullptr));
        label_4->setText(QCoreApplication::translate("Register", "\345\257\206\347\240\201", nullptr));
        label_5->setText(QCoreApplication::translate("Register", "\346\230\265\347\247\260", nullptr));
        label_6->setText(QCoreApplication::translate("Register", "\346\211\213\346\234\272\345\217\267", nullptr));
        radioButton->setText(QCoreApplication::translate("Register", "\345\215\217\350\256\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Register: public Ui_Register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
