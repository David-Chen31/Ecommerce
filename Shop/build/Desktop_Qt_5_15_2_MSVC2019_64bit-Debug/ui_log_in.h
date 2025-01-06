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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LogIn
{
public:
    QLabel *LogoLabel;
    QWidget *FormWidget;
    QVBoxLayout *FormLayout;
    QGridLayout *gridLayout;
    QLabel *PasswordLabel;
    QLabel *UsernameLabel;
    QLineEdit *UsernameLineEdit;
    QLineEdit *PasswordLineEdit;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_3;
    QRadioButton *TermsOfServiceRadioButton;
    QSpacerItem *VerticalSpacer;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *RegisterButton;
    QPushButton *LogInButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *LogIn)
    {
        if (LogIn->objectName().isEmpty())
            LogIn->setObjectName(QString::fromUtf8("LogIn"));
        LogIn->resize(500, 650);
        LogIn->setStyleSheet(QString::fromUtf8("/* \345\205\250\345\261\200\346\240\267\345\274\217 */\n"
"QWidget {\n"
"    background-color: #FFFFFF; /* \347\231\275\350\211\262\350\203\214\346\231\257 */\n"
"    font-family: \"Microsoft YaHei\";\n"
"    font-size: 16px;\n"
"}\n"
"\n"
"/* Logo \346\240\267\345\274\217 */\n"
"QLabel#LogoLabel {\n"
"    font-size: 22px;\n"
"    font-weight: bold;\n"
"    color: #0099FF; /* \345\244\251\350\223\235\350\211\262\345\255\227\344\275\223 */\n"
"    border: 2px solid #0099FF; /* \345\244\251\350\223\235\350\211\262\350\276\271\346\241\206 */\n"
"    border-radius: 10px;\n"
"    padding: 10px;\n"
"    background-color: #E6F7FF; /* \346\265\205\345\244\251\350\223\235\350\203\214\346\231\257 */\n"
"    text-align: center;\n"
"}\n"
"\n"
"/* \350\276\223\345\205\245\346\241\206\346\240\267\345\274\217 */\n"
"QLineEdit {\n"
"    border: 1px solid #CCCCCC; /* \347\201\260\350\211\262\350\276\271\346\241\206 */\n"
"    border-radius: 5px;\n"
"    padding: 6px;\n"
"    background-color: #F7FAFD; /* \346\265\205\347\231\275"
                        "\350\223\235\350\203\214\346\231\257 */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 2px solid #0099FF; /* \350\201\232\347\204\246\345\244\251\350\223\235\350\276\271\346\241\206 */\n"
"}\n"
"\n"
"/* \346\214\211\351\222\256\346\240\267\345\274\217 */\n"
"QPushButton {\n"
"    background-color: #0099FF; /* \345\244\251\350\223\235\350\211\262\350\203\214\346\231\257 */\n"
"    color: white; /* \347\231\275\350\211\262\346\226\207\345\255\227 */\n"
"    border-radius: 5px;\n"
"    padding: 8px 16px;\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #007ACC; /* \346\267\261\350\223\235\350\211\262\346\202\254\345\201\234 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #005F99; /* \346\233\264\346\267\261\350\223\235\350\211\262\346\214\211\344\270\213\346\225\210\346\236\234 */\n"
"}\n"
"\n"
"/* \345\244\215\351\200\211\346\241\206\346\240\267\345\274\217 */\n"
"QRadioButton {\n"
"    font-size: 14px;\n"
"    color: #555555; /*"
                        " \344\270\255\347\201\260\350\211\262\345\255\227\344\275\223 */\n"
"}\n"
"\n"
"QRadioButton::indicator {\n"
"    width: 16px;\n"
"    height: 16px;\n"
"}\n"
"\n"
"QRadioButton::indicator:checked {\n"
"    background-color: #0099FF; /* \345\244\251\350\223\235\350\211\262\351\200\211\344\270\255\350\203\214\346\231\257 */\n"
"    border: 1px solid #0099FF; /* \345\244\251\350\223\235\350\211\262\350\276\271\346\241\206 */\n"
"}\n"
""));
        LogoLabel = new QLabel(LogIn);
        LogoLabel->setObjectName(QString::fromUtf8("LogoLabel"));
        LogoLabel->setGeometry(QRect(160, 50, 191, 131));
        LogoLabel->setAlignment(Qt::AlignCenter);
        FormWidget = new QWidget(LogIn);
        FormWidget->setObjectName(QString::fromUtf8("FormWidget"));
        FormWidget->setGeometry(QRect(70, 230, 351, 391));
        FormLayout = new QVBoxLayout(FormWidget);
        FormLayout->setObjectName(QString::fromUtf8("FormLayout"));
        FormLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        PasswordLabel = new QLabel(FormWidget);
        PasswordLabel->setObjectName(QString::fromUtf8("PasswordLabel"));

        gridLayout->addWidget(PasswordLabel, 2, 0, 1, 1);

        UsernameLabel = new QLabel(FormWidget);
        UsernameLabel->setObjectName(QString::fromUtf8("UsernameLabel"));

        gridLayout->addWidget(UsernameLabel, 0, 0, 1, 1);

        UsernameLineEdit = new QLineEdit(FormWidget);
        UsernameLineEdit->setObjectName(QString::fromUtf8("UsernameLineEdit"));

        gridLayout->addWidget(UsernameLineEdit, 0, 1, 1, 1);

        PasswordLineEdit = new QLineEdit(FormWidget);
        PasswordLineEdit->setObjectName(QString::fromUtf8("PasswordLineEdit"));
        PasswordLineEdit->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(PasswordLineEdit, 2, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer, 1, 1, 1, 1);


        FormLayout->addLayout(gridLayout);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        FormLayout->addItem(verticalSpacer_3);

        TermsOfServiceRadioButton = new QRadioButton(FormWidget);
        TermsOfServiceRadioButton->setObjectName(QString::fromUtf8("TermsOfServiceRadioButton"));

        FormLayout->addWidget(TermsOfServiceRadioButton);

        VerticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Preferred);

        FormLayout->addItem(VerticalSpacer);

        widget = new QWidget(FormWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 0, 1, 1);

        RegisterButton = new QPushButton(widget);
        RegisterButton->setObjectName(QString::fromUtf8("RegisterButton"));

        gridLayout_2->addWidget(RegisterButton, 1, 1, 1, 1);

        LogInButton = new QPushButton(widget);
        LogInButton->setObjectName(QString::fromUtf8("LogInButton"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LogInButton->sizePolicy().hasHeightForWidth());
        LogInButton->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(LogInButton, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 2, 1, 1);


        FormLayout->addWidget(widget);


        retranslateUi(LogIn);

        QMetaObject::connectSlotsByName(LogIn);
    } // setupUi

    void retranslateUi(QWidget *LogIn)
    {
        LogIn->setWindowTitle(QCoreApplication::translate("LogIn", "\345\225\206\345\256\266\347\231\273\345\275\225", nullptr));
        LogoLabel->setText(QCoreApplication::translate("LogIn", "\345\225\206\345\256\266\345\271\263\345\217\260 LOGO", nullptr));
        PasswordLabel->setText(QCoreApplication::translate("LogIn", "\345\257\206\347\240\201:   ", nullptr));
        UsernameLabel->setText(QCoreApplication::translate("LogIn", "\350\264\246\346\210\267\345\220\215:", nullptr));
        UsernameLineEdit->setPlaceholderText(QCoreApplication::translate("LogIn", "\350\257\267\350\276\223\345\205\245\350\264\246\346\210\267\345\220\215", nullptr));
        PasswordLineEdit->setPlaceholderText(QCoreApplication::translate("LogIn", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
        TermsOfServiceRadioButton->setText(QCoreApplication::translate("LogIn", "\345\215\217\350\256\256", nullptr));
        RegisterButton->setText(QCoreApplication::translate("LogIn", "\346\262\241\346\234\211\350\264\246\346\210\267\357\274\237\346\263\250\345\206\214", nullptr));
        LogInButton->setText(QCoreApplication::translate("LogIn", "\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LogIn: public Ui_LogIn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOG_IN_H
