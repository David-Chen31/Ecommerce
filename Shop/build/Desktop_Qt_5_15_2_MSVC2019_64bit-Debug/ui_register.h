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
    QLabel *LogoLabel;
    QPushButton *GoBack;
    QLabel *WelcomeLabel;
    QWidget *FormWidget;
    QGridLayout *FormLayout;
    QLineEdit *ConfirmPwdLineEdit;
    QLineEdit *BusinessLicenseLineEdit;
    QLabel *PasswordLabel;
    QLabel *ConfirmPwdLabel;
    QLabel *ShopNameLabel;
    QLabel *BusinessLicenseLabel;
    QLineEdit *PasswordLineEdit;
    QLineEdit *ShopNameLineEdit;
    QLabel *EmailLabel;
    QLineEdit *EmailLineEdit;
    QRadioButton *AgreementRadioButton;
    QPushButton *RegisterButton;
    QLabel *VersionLabel;

    void setupUi(QWidget *Register)
    {
        if (Register->objectName().isEmpty())
            Register->setObjectName(QString::fromUtf8("Register"));
        Register->resize(550, 660);
        Register->setStyleSheet(QString::fromUtf8("/* \345\205\250\345\261\200\346\240\267\345\274\217 */\n"
"QWidget {\n"
"    background-color: #FFFFFF; /* \347\231\275\350\211\262\350\203\214\346\231\257 */\n"
"    font-family: \"Microsoft YaHei\";\n"
"    font-size: 16px;\n"
"}\n"
"\n"
"/* Logo \346\240\267\345\274\217 */\n"
"QLabel#LogoLabel {\n"
"    font-size: 20px;\n"
"    font-weight: bold;\n"
"    color: #0099FF; /* \345\244\251\350\223\235\350\211\262\345\255\227\344\275\223 */\n"
"    border: 2px solid #0099FF; /* \345\244\251\350\223\235\350\211\262\350\276\271\346\241\206 */\n"
"    border-radius: 10px; /* \345\234\206\350\247\222\350\276\271\346\241\206 */\n"
"    background-color: #E6F7FF; /* \346\265\205\345\244\251\350\223\235\350\203\214\346\231\257 */\n"
"    padding: 10px;\n"
"    text-align: center;\n"
"}\n"
"\n"
"/* \346\254\242\350\277\216\346\240\207\351\242\230\346\240\267\345\274\217 */\n"
"QLabel#WelcomeLabel {\n"
"    font-size: 18px;\n"
"    font-weight: bold;\n"
"    color: #333333; /* \346\267\261\347\201\260\350\211\262\345\255"
                        "\227\344\275\223 */\n"
"}\n"
"\n"
"/* \350\276\223\345\205\245\346\241\206\346\240\267\345\274\217 */\n"
"QLineEdit {\n"
"    border: 1px solid #CCCCCC; /* \346\265\205\347\201\260\350\276\271\346\241\206 */\n"
"    border-radius: 5px;\n"
"    padding: 6px;\n"
"    font-size: 16px;\n"
"    background-color: #F7FAFD; /* \346\265\205\347\231\275\350\223\235\350\203\214\346\231\257 */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 2px solid #0099FF; /* \350\201\232\347\204\246\345\244\251\350\223\235\350\276\271\346\241\206 */\n"
"}\n"
"\n"
"/* \346\214\211\351\222\256\346\240\267\345\274\217 */\n"
"QPushButton {\n"
"    background-color: #0099FF; /* \345\244\251\350\223\235\350\211\262\346\214\211\351\222\256\350\203\214\346\231\257 */\n"
"    color: white; /* \347\231\275\350\211\262\346\226\207\345\255\227 */\n"
"    border-radius: 5px;\n"
"    padding: 8px 16px;\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #007ACC; /* \346\267\261\350\223\235"
                        "\350\211\262\346\202\254\345\201\234\350\203\214\346\231\257 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #005F99; /* \346\267\261\350\223\235\350\211\262\346\214\211\344\270\213\350\203\214\346\231\257 */\n"
"}\n"
"\n"
"/* \350\277\224\345\233\236\346\214\211\351\222\256 */\n"
"QPushButton#GoBack {\n"
"    background-color: transparent; /* \351\200\217\346\230\216\350\203\214\346\231\257 */\n"
"    color: #0099FF; /* \345\244\251\350\223\235\350\211\262\346\226\207\345\255\227 */\n"
"    font-size: 14px;\n"
"    border: none;\n"
"    text-decoration: underline;\n"
"}\n"
"\n"
"QPushButton#GoBack:hover {\n"
"    color: #005F99; /* \346\267\261\350\223\235\350\211\262\346\202\254\345\201\234 */\n"
"}\n"
"\n"
"/* \350\241\250\345\215\225\346\240\207\347\255\276\346\240\267\345\274\217 */\n"
"QLabel {\n"
"    font-size: 16px;\n"
"    color: #333333; /* \346\267\261\347\201\260\350\211\262\345\255\227\344\275\223 */\n"
"}\n"
"\n"
"/* \347\224\250\346\210\267\345\215\217\350\256\256\345\244\215\351"
                        "\200\211\346\241\206\346\240\267\345\274\217 */\n"
"QRadioButton#AgreementRadioButton {\n"
"    font-size: 14px;\n"
"    color: #555555; /* \344\270\255\347\201\260\350\211\262\345\255\227\344\275\223 */\n"
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
"\n"
"/* \347\211\210\346\234\254\345\217\267\346\240\267\345\274\217 */\n"
"QLabel#VersionLabel {\n"
"    font-size: 12px;\n"
"    color: #AAAAAA; /* \346\265\205\347\201\260\350\211\262\345\255\227\344\275\223 */\n"
"}\n"
""));
        LogoLabel = new QLabel(Register);
        LogoLabel->setObjectName(QString::fromUtf8("LogoLabel"));
        LogoLabel->setGeometry(QRect(30, 30, 100, 50));
        LogoLabel->setAlignment(Qt::AlignCenter);
        GoBack = new QPushButton(Register);
        GoBack->setObjectName(QString::fromUtf8("GoBack"));
        GoBack->setGeometry(QRect(410, 30, 121, 31));
        WelcomeLabel = new QLabel(Register);
        WelcomeLabel->setObjectName(QString::fromUtf8("WelcomeLabel"));
        WelcomeLabel->setGeometry(QRect(180, 80, 200, 50));
        WelcomeLabel->setAlignment(Qt::AlignCenter);
        FormWidget = new QWidget(Register);
        FormWidget->setObjectName(QString::fromUtf8("FormWidget"));
        FormWidget->setGeometry(QRect(50, 140, 450, 400));
        FormLayout = new QGridLayout(FormWidget);
        FormLayout->setObjectName(QString::fromUtf8("FormLayout"));
        FormLayout->setContentsMargins(0, 0, 0, 0);
        ConfirmPwdLineEdit = new QLineEdit(FormWidget);
        ConfirmPwdLineEdit->setObjectName(QString::fromUtf8("ConfirmPwdLineEdit"));
        ConfirmPwdLineEdit->setEchoMode(QLineEdit::Password);

        FormLayout->addWidget(ConfirmPwdLineEdit, 4, 1, 1, 1);

        BusinessLicenseLineEdit = new QLineEdit(FormWidget);
        BusinessLicenseLineEdit->setObjectName(QString::fromUtf8("BusinessLicenseLineEdit"));

        FormLayout->addWidget(BusinessLicenseLineEdit, 1, 1, 1, 1);

        PasswordLabel = new QLabel(FormWidget);
        PasswordLabel->setObjectName(QString::fromUtf8("PasswordLabel"));

        FormLayout->addWidget(PasswordLabel, 3, 0, 1, 1);

        ConfirmPwdLabel = new QLabel(FormWidget);
        ConfirmPwdLabel->setObjectName(QString::fromUtf8("ConfirmPwdLabel"));

        FormLayout->addWidget(ConfirmPwdLabel, 4, 0, 1, 1);

        ShopNameLabel = new QLabel(FormWidget);
        ShopNameLabel->setObjectName(QString::fromUtf8("ShopNameLabel"));

        FormLayout->addWidget(ShopNameLabel, 0, 0, 1, 1);

        BusinessLicenseLabel = new QLabel(FormWidget);
        BusinessLicenseLabel->setObjectName(QString::fromUtf8("BusinessLicenseLabel"));

        FormLayout->addWidget(BusinessLicenseLabel, 1, 0, 1, 1);

        PasswordLineEdit = new QLineEdit(FormWidget);
        PasswordLineEdit->setObjectName(QString::fromUtf8("PasswordLineEdit"));
        PasswordLineEdit->setEchoMode(QLineEdit::Password);

        FormLayout->addWidget(PasswordLineEdit, 3, 1, 1, 1);

        ShopNameLineEdit = new QLineEdit(FormWidget);
        ShopNameLineEdit->setObjectName(QString::fromUtf8("ShopNameLineEdit"));

        FormLayout->addWidget(ShopNameLineEdit, 0, 1, 1, 1);

        EmailLabel = new QLabel(FormWidget);
        EmailLabel->setObjectName(QString::fromUtf8("EmailLabel"));

        FormLayout->addWidget(EmailLabel, 5, 0, 1, 1);

        EmailLineEdit = new QLineEdit(FormWidget);
        EmailLineEdit->setObjectName(QString::fromUtf8("EmailLineEdit"));

        FormLayout->addWidget(EmailLineEdit, 5, 1, 1, 1);

        AgreementRadioButton = new QRadioButton(Register);
        AgreementRadioButton->setObjectName(QString::fromUtf8("AgreementRadioButton"));
        AgreementRadioButton->setGeometry(QRect(150, 560, 240, 21));
        RegisterButton = new QPushButton(Register);
        RegisterButton->setObjectName(QString::fromUtf8("RegisterButton"));
        RegisterButton->setGeometry(QRect(180, 600, 161, 41));
        VersionLabel = new QLabel(Register);
        VersionLabel->setObjectName(QString::fromUtf8("VersionLabel"));
        VersionLabel->setGeometry(QRect(270, 660, 71, 31));
        VersionLabel->setAlignment(Qt::AlignCenter);

        retranslateUi(Register);

        QMetaObject::connectSlotsByName(Register);
    } // setupUi

    void retranslateUi(QWidget *Register)
    {
        Register->setWindowTitle(QCoreApplication::translate("Register", "\345\225\206\345\256\266\346\263\250\345\206\214", nullptr));
        LogoLabel->setText(QCoreApplication::translate("Register", "LOGO", nullptr));
        GoBack->setText(QCoreApplication::translate("Register", "\350\277\224\345\233\236\347\231\273\345\275\225", nullptr));
        WelcomeLabel->setText(QCoreApplication::translate("Register", "\346\254\242\350\277\216\346\263\250\345\206\214\345\225\206\345\256\266\350\264\246\345\217\267", nullptr));
        ConfirmPwdLineEdit->setPlaceholderText(QCoreApplication::translate("Register", "\345\206\215\346\254\241\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
        BusinessLicenseLineEdit->setPlaceholderText(QCoreApplication::translate("Register", "\350\257\267\350\276\223\345\205\245\350\220\245\344\270\232\346\211\247\347\205\247\347\274\226\345\217\267", nullptr));
        PasswordLabel->setText(QCoreApplication::translate("Register", "\345\257\206\347\240\201", nullptr));
        ConfirmPwdLabel->setText(QCoreApplication::translate("Register", "\347\241\256\350\256\244\345\257\206\347\240\201", nullptr));
        ShopNameLabel->setText(QCoreApplication::translate("Register", "\345\272\227\351\223\272\345\220\215\347\247\260", nullptr));
        BusinessLicenseLabel->setText(QCoreApplication::translate("Register", "\350\220\245\344\270\232\346\211\247\347\205\247\347\274\226\345\217\267", nullptr));
        PasswordLineEdit->setPlaceholderText(QCoreApplication::translate("Register", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
        ShopNameLineEdit->setPlaceholderText(QCoreApplication::translate("Register", "\350\257\267\350\276\223\345\205\245\345\272\227\351\223\272\345\220\215\347\247\260", nullptr));
        EmailLabel->setText(QCoreApplication::translate("Register", "\351\202\256\347\256\261", nullptr));
        EmailLineEdit->setPlaceholderText(QCoreApplication::translate("Register", "\350\257\267\350\276\223\345\205\245\351\202\256\347\256\261", nullptr));
        AgreementRadioButton->setText(QCoreApplication::translate("Register", "\346\210\221\345\267\262\351\230\205\350\257\273\345\271\266\345\220\214\346\204\217\345\225\206\345\256\266\345\215\217\350\256\256", nullptr));
        RegisterButton->setText(QCoreApplication::translate("Register", "\347\253\213\345\215\263\346\263\250\345\206\214", nullptr));
        VersionLabel->setText(QCoreApplication::translate("Register", "\347\211\210\346\234\254\345\217\267", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Register: public Ui_Register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
