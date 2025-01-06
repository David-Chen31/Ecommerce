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
    QLineEdit *PhoneLineEdit;
    QLabel *NicknameLabel;
    QLineEdit *NicknameLineEdit;
    QLineEdit *PasswordLineEdit;
    QLabel *PhoneLabel;
    QLabel *PasswordLabel;
    QLabel *ComfirmPwdLabel;
    QLineEdit *ConfirmPwdLineEdit;
    QRadioButton *AgreementRadioButton;
    QPushButton *RegisterButton;
    QLabel *VersionLabel;

    void setupUi(QWidget *Register)
    {
        if (Register->objectName().isEmpty())
            Register->setObjectName(QString::fromUtf8("Register"));
        Register->resize(488, 617);
        Register->setStyleSheet(QString::fromUtf8("/* \345\205\250\345\261\200\346\240\267\345\274\217 */\n"
"QWidget {\n"
"    background-color: #FFFFFF;\n"
"    font-family: \"Microsoft YaHei\";\n"
"    font-size: 14px;\n"
"}\n"
"\n"
"/* Logo \346\240\267\345\274\217 */\n"
"QLabel#LogoLabel {\n"
"    font-size: 20px;\n"
"    font-weight: bold;\n"
"    color: #FF6A00;\n"
"    border: 2px solid #FF6A00;\n"
"    border-radius: 10px;\n"
"    background-color: #FFF2E6;\n"
"    padding: 10px;\n"
"    text-align: center;\n"
"}\n"
"\n"
"/* \346\240\207\351\242\230\346\240\267\345\274\217 */\n"
"QLabel#WelcomeLabel {\n"
"    font-size: 18px;\n"
"    font-weight: bold;\n"
"    color: #333333;\n"
"}\n"
"\n"
"/* \350\241\250\345\215\225\346\240\207\347\255\276\346\240\267\345\274\217 */\n"
"QLabel {\n"
"    font-size: 14px;\n"
"    color: #333333;\n"
"}\n"
"\n"
"/* \350\276\223\345\205\245\346\241\206\346\240\267\345\274\217 */\n"
"QLineEdit {\n"
"    border: 1px solid #CCCCCC;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"    font-size: 14px;\n"
"    background"
                        "-color: #FAFAFA;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 1px solid #FF6A00;\n"
"}\n"
"\n"
"/* \346\214\211\351\222\256\346\240\267\345\274\217 */\n"
"QPushButton {\n"
"    background-color: #FF6A00;\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 8px;\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
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
"/* \347\224\250\346\210\267\345\215\217\350\256\256\345\244\215\351\200\211\346\241\206 */\n"
"QRadioButton#AgreementRadioButton {\n"
"    font-size: 12px;\n"
"    color: #555555;\n"
"}\n"
"\n"
"QRadioButton::indicator {\n"
"    width: 16px;\n"
"    height: 16px;\n"
"}\n"
"\n"
"QRadioButton::indicator:checked {\n"
"    background-color: #FF6A00;\n"
"    border: 1px solid #FF6A00;\n"
"}\n"
""));
        LogoLabel = new QLabel(Register);
        LogoLabel->setObjectName(QString::fromUtf8("LogoLabel"));
        LogoLabel->setGeometry(QRect(30, 30, 100, 50));
        LogoLabel->setAlignment(Qt::AlignCenter);
        GoBack = new QPushButton(Register);
        GoBack->setObjectName(QString::fromUtf8("GoBack"));
        GoBack->setGeometry(QRect(330, 30, 121, 31));
        WelcomeLabel = new QLabel(Register);
        WelcomeLabel->setObjectName(QString::fromUtf8("WelcomeLabel"));
        WelcomeLabel->setGeometry(QRect(180, 90, 150, 50));
        WelcomeLabel->setAlignment(Qt::AlignCenter);
        FormWidget = new QWidget(Register);
        FormWidget->setObjectName(QString::fromUtf8("FormWidget"));
        FormWidget->setGeometry(QRect(80, 150, 329, 271));
        FormLayout = new QGridLayout(FormWidget);
        FormLayout->setObjectName(QString::fromUtf8("FormLayout"));
        FormLayout->setContentsMargins(0, 0, 0, 0);
        PhoneLineEdit = new QLineEdit(FormWidget);
        PhoneLineEdit->setObjectName(QString::fromUtf8("PhoneLineEdit"));

        FormLayout->addWidget(PhoneLineEdit, 3, 1, 1, 1);

        NicknameLabel = new QLabel(FormWidget);
        NicknameLabel->setObjectName(QString::fromUtf8("NicknameLabel"));

        FormLayout->addWidget(NicknameLabel, 0, 0, 1, 1);

        NicknameLineEdit = new QLineEdit(FormWidget);
        NicknameLineEdit->setObjectName(QString::fromUtf8("NicknameLineEdit"));

        FormLayout->addWidget(NicknameLineEdit, 0, 1, 1, 1);

        PasswordLineEdit = new QLineEdit(FormWidget);
        PasswordLineEdit->setObjectName(QString::fromUtf8("PasswordLineEdit"));
        PasswordLineEdit->setEchoMode(QLineEdit::Password);

        FormLayout->addWidget(PasswordLineEdit, 1, 1, 1, 1);

        PhoneLabel = new QLabel(FormWidget);
        PhoneLabel->setObjectName(QString::fromUtf8("PhoneLabel"));

        FormLayout->addWidget(PhoneLabel, 3, 0, 1, 1);

        PasswordLabel = new QLabel(FormWidget);
        PasswordLabel->setObjectName(QString::fromUtf8("PasswordLabel"));

        FormLayout->addWidget(PasswordLabel, 1, 0, 1, 1);

        ComfirmPwdLabel = new QLabel(FormWidget);
        ComfirmPwdLabel->setObjectName(QString::fromUtf8("ComfirmPwdLabel"));

        FormLayout->addWidget(ComfirmPwdLabel, 2, 0, 1, 1);

        ConfirmPwdLineEdit = new QLineEdit(FormWidget);
        ConfirmPwdLineEdit->setObjectName(QString::fromUtf8("ConfirmPwdLineEdit"));
        ConfirmPwdLineEdit->setEchoMode(QLineEdit::Password);

        FormLayout->addWidget(ConfirmPwdLineEdit, 2, 1, 1, 1);

        AgreementRadioButton = new QRadioButton(Register);
        AgreementRadioButton->setObjectName(QString::fromUtf8("AgreementRadioButton"));
        AgreementRadioButton->setGeometry(QRect(130, 440, 221, 21));
        RegisterButton = new QPushButton(Register);
        RegisterButton->setObjectName(QString::fromUtf8("RegisterButton"));
        RegisterButton->setGeometry(QRect(160, 480, 161, 31));
        VersionLabel = new QLabel(Register);
        VersionLabel->setObjectName(QString::fromUtf8("VersionLabel"));
        VersionLabel->setGeometry(QRect(220, 540, 51, 31));
        VersionLabel->setAlignment(Qt::AlignCenter);

        retranslateUi(Register);

        QMetaObject::connectSlotsByName(Register);
    } // setupUi

    void retranslateUi(QWidget *Register)
    {
        Register->setWindowTitle(QCoreApplication::translate("Register", "\347\224\250\346\210\267\346\263\250\345\206\214", nullptr));
        LogoLabel->setText(QCoreApplication::translate("Register", "LOGO", nullptr));
        GoBack->setText(QCoreApplication::translate("Register", "\350\277\224\345\233\236\347\231\273\345\275\225", nullptr));
        WelcomeLabel->setText(QCoreApplication::translate("Register", "\346\254\242\350\277\216\346\263\250\345\206\214", nullptr));
        PhoneLineEdit->setPlaceholderText(QCoreApplication::translate("Register", "\350\257\267\350\276\223\345\205\245\346\211\213\346\234\272\345\217\267", nullptr));
        NicknameLabel->setText(QCoreApplication::translate("Register", "\346\230\265\347\247\260", nullptr));
        NicknameLineEdit->setPlaceholderText(QCoreApplication::translate("Register", "\350\257\267\350\276\223\345\205\245\346\230\265\347\247\260", nullptr));
        PasswordLineEdit->setPlaceholderText(QCoreApplication::translate("Register", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
        PhoneLabel->setText(QCoreApplication::translate("Register", "\346\211\213\346\234\272\345\217\267", nullptr));
        PasswordLabel->setText(QCoreApplication::translate("Register", "\345\257\206\347\240\201", nullptr));
        ComfirmPwdLabel->setText(QCoreApplication::translate("Register", "\347\241\256\350\256\244\345\257\206\347\240\201", nullptr));
        ConfirmPwdLineEdit->setPlaceholderText(QCoreApplication::translate("Register", "\345\206\215\346\254\241\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
        AgreementRadioButton->setText(QCoreApplication::translate("Register", "\346\210\221\345\267\262\351\230\205\350\257\273\345\271\266\345\220\214\346\204\217\347\224\250\346\210\267\345\215\217\350\256\256", nullptr));
        RegisterButton->setText(QCoreApplication::translate("Register", "\347\253\213\345\215\263\346\263\250\345\206\214", nullptr));
        VersionLabel->setText(QCoreApplication::translate("Register", "\347\211\210\346\234\254\345\217\267", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Register: public Ui_Register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
