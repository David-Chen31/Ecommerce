/********************************************************************************
** Form generated from reading UI file 'contact.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTACT_H
#define UI_CONTACT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Contact
{
public:
    QHBoxLayout *horizontalLayout;
    QPushButton *avatarButton;
    QPushButton *nameButton;

    void setupUi(QWidget *Contact)
    {
        if (Contact->objectName().isEmpty())
            Contact->setObjectName(QString::fromUtf8("Contact"));
        Contact->resize(684, 168);
        Contact->setStyleSheet(QString::fromUtf8("/* \345\205\250\345\261\200\350\256\276\347\275\256 */\n"
"QWidget {\n"
"    background-color: #FFFFFF; /* \345\205\250\345\261\200\350\203\214\346\231\257\347\231\275\350\211\262 */\n"
"    font-family: \"Microsoft YaHei\";\n"
"    font-size: 14px;\n"
"    color: #333333; /* \351\273\230\350\256\244\345\255\227\344\275\223\351\242\234\350\211\262 */\n"
"}\n"
"\n"
"/* \345\244\264\345\203\217\346\214\211\351\222\256\346\240\267\345\274\217 */\n"
"QPushButton#avatarButton {\n"
"    border: none; /* \345\216\273\346\216\211\346\214\211\351\222\256\350\276\271\346\241\206 */\n"
"    border-radius: 75px; /* \345\234\206\345\275\242\345\244\264\345\203\217 */\n"
"    background-color: transparent; /* \350\203\214\346\231\257\351\200\217\346\230\216 */\n"
"}\n"
"\n"
"QPushButton#avatarButton:hover {\n"
"    background-color: rgba(255, 106, 0, 0.1); /* \346\202\254\345\201\234\346\227\266\346\251\230\350\211\262\345\215\212\351\200\217\346\230\216\350\203\214\346\231\257 */\n"
"}\n"
"\n"
"/* \345\220\215\345\255\227\346"
                        "\214\211\351\222\256\346\240\267\345\274\217 */\n"
"QPushButton#nameButton {\n"
"    border: none; /* \345\216\273\346\216\211\346\214\211\351\222\256\350\276\271\346\241\206 */\n"
"    text-align: left; /* \345\267\246\345\257\271\351\275\220\346\226\207\345\255\227 */\n"
"    font-size: 18px; /* \345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"    font-weight: bold; /* \345\212\240\347\262\227\345\255\227\344\275\223 */\n"
"    color: #333333; /* \345\255\227\344\275\223\351\242\234\350\211\262\346\267\261\347\201\260 */\n"
"    padding-left: 10px; /* \345\242\236\345\212\240\346\226\207\345\255\227\345\267\246\344\276\247\351\227\264\350\267\235 */\n"
"    background-color: transparent; /* \350\203\214\346\231\257\351\200\217\346\230\216 */\n"
"}\n"
"\n"
"QPushButton#nameButton:hover {\n"
"    background-color: rgba(255, 106, 0, 0.1); /* \346\202\254\345\201\234\346\227\266\346\251\230\350\211\262\345\215\212\351\200\217\346\230\216\350\203\214\346\231\257 */\n"
"}\n"
"\n"
"/* \346\214\211\344\270\213"
                        "\346\225\210\346\236\234 */\n"
"QPushButton#avatarButton:pressed, QPushButton#nameButton:pressed {\n"
"    background-color: rgba(255, 106, 0, 0.2); /* \346\214\211\344\270\213\346\227\266\346\233\264\346\267\261\347\232\204\346\251\230\350\211\262\345\215\212\351\200\217\346\230\216\350\203\214\346\231\257 */\n"
"}\n"
""));
        horizontalLayout = new QHBoxLayout(Contact);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        avatarButton = new QPushButton(Contact);
        avatarButton->setObjectName(QString::fromUtf8("avatarButton"));
        avatarButton->setMinimumSize(QSize(150, 150));
        avatarButton->setMaximumSize(QSize(150, 150));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/default_avatar.png"), QSize(), QIcon::Normal, QIcon::Off);
        avatarButton->setIcon(icon);
        avatarButton->setIconSize(QSize(140, 140));

        horizontalLayout->addWidget(avatarButton);

        nameButton = new QPushButton(Contact);
        nameButton->setObjectName(QString::fromUtf8("nameButton"));
        nameButton->setMinimumSize(QSize(510, 150));

        horizontalLayout->addWidget(nameButton);


        retranslateUi(Contact);

        QMetaObject::connectSlotsByName(Contact);
    } // setupUi

    void retranslateUi(QWidget *Contact)
    {
        Contact->setWindowTitle(QCoreApplication::translate("Contact", "Contact", nullptr));
        avatarButton->setStyleSheet(QCoreApplication::translate("Contact", "\n"
"       QPushButton {\n"
"           border: none; /* \345\216\273\346\216\211\346\214\211\351\222\256\350\276\271\346\241\206 */\n"
"           border-radius: 75px; /* \345\234\206\345\275\242\345\244\264\345\203\217 */\n"
"           background-color: transparent;\n"
"       }\n"
"       QPushButton:hover {\n"
"           background-color: rgba(255, 106, 0, 0.1); /* \346\202\254\345\201\234\346\227\266\346\251\230\350\211\262\345\215\212\351\200\217\346\230\216\350\203\214\346\231\257 */\n"
"       }\n"
"      ", nullptr));
        nameButton->setStyleSheet(QCoreApplication::translate("Contact", "\n"
"       QPushButton {\n"
"           border: none; /* \345\216\273\346\216\211\346\214\211\351\222\256\350\276\271\346\241\206 */\n"
"           text-align: left; /* \345\267\246\345\257\271\351\275\220\346\226\207\345\255\227 */\n"
"           font-size: 18px; /* \345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"           font-weight: bold;\n"
"           color: #333333;\n"
"           padding-left: 10px; /* \345\242\236\345\212\240\346\226\207\345\255\227\345\267\246\344\276\247\351\227\264\350\267\235 */\n"
"           background-color: transparent;\n"
"       }\n"
"       QPushButton:hover {\n"
"           background-color: rgba(255, 106, 0, 0.1); /* \346\202\254\345\201\234\346\227\266\346\251\230\350\211\262\345\215\212\351\200\217\346\230\216\350\203\214\346\231\257 */\n"
"       }\n"
"      ", nullptr));
        nameButton->setText(QCoreApplication::translate("Contact", "\345\256\242\346\210\267\345\220\215\347\247\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Contact: public Ui_Contact {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTACT_H
