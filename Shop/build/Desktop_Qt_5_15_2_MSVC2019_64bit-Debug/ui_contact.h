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
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Contact
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *avatar;
    QVBoxLayout *infoLayout;
    QLabel *nameLabel;
    QLabel *unreadCount;

    void setupUi(QWidget *Contact)
    {
        if (Contact->objectName().isEmpty())
            Contact->setObjectName(QString::fromUtf8("Contact"));
        Contact->resize(684, 168);
        Contact->setStyleSheet(QString::fromUtf8("\n"
"/* \350\201\224\347\263\273\344\272\272\350\203\214\346\231\257\346\240\267\345\274\217 */\n"
"QWidget#Contact {\n"
"    background-color: #FFFFFF;  /* \347\231\275\350\211\262\350\203\214\346\231\257 */\n"
"    border: 1px solid #E5E5E5;\n"
"    border-radius: 8px;\n"
"    padding: 10px;\n"
"}\n"
"QWidget#Contact:hover {\n"
"    background-color: rgba(0, 191, 255, 0.1);  /* \345\244\251\350\223\235\350\211\262\346\202\254\345\201\234\350\203\214\346\231\257 */\n"
"}\n"
"QWidget#Contact[selected=\"true\"] {\n"
"    background-color: rgba(0, 191, 255, 0.2);  /* \345\244\251\350\223\235\350\211\262\351\200\211\344\270\255\350\203\214\346\231\257 */\n"
"}\n"
"\n"
"/* \345\244\264\345\203\217\346\240\267\345\274\217 */\n"
"QLabel#avatar {\n"
"    border-radius: 50px;\n"
"    background-color: #CCCCCC;\n"
"    border: 1px solid #E5E5E5;\n"
"}\n"
"\n"
"/* \345\220\215\345\255\227\346\240\267\345\274\217 */\n"
"QLabel#nameLabel {\n"
"    font-size: 20px;  /* \344\277\256\346\224\271\345\255\227\344\275\223\345\244"
                        "\247\345\260\217\344\270\27220px */\n"
"    font-weight: bold;\n"
"    color: #333333;\n"
"    padding-left: 10px;\n"
"}\n"
"\n"
"/* \346\234\252\350\257\273\346\266\210\346\201\257\346\240\207\350\256\260\346\240\267\345\274\217 */\n"
"QLabel#unreadCount {\n"
"    font-size: 20px;  /* \344\277\256\346\224\271\345\255\227\344\275\223\345\244\247\345\260\217\344\270\27220px */\n"
"    font-weight: bold;\n"
"    color: #FFFFFF;\n"
"    background-color: #00BFFF;  /* \345\244\251\350\223\235\350\211\262\350\203\214\346\231\257 */\n"
"    border-radius: 10px;\n"
"    padding: 2px 6px;\n"
"    min-width: 20px;\n"
"    text-align: center;\n"
"}\n"
"   "));
        horizontalLayout = new QHBoxLayout(Contact);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        avatar = new QLabel(Contact);
        avatar->setObjectName(QString::fromUtf8("avatar"));
        avatar->setMinimumSize(QSize(100, 100));
        avatar->setMaximumSize(QSize(100, 100));
        avatar->setPixmap(QPixmap(QString::fromUtf8(":/default_avatar.png")));
        avatar->setScaledContents(true);

        horizontalLayout->addWidget(avatar);

        infoLayout = new QVBoxLayout();
        infoLayout->setObjectName(QString::fromUtf8("infoLayout"));
        nameLabel = new QLabel(Contact);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));
        nameLabel->setAlignment(Qt::AlignVCenter|Qt::AlignLeft);

        infoLayout->addWidget(nameLabel);

        unreadCount = new QLabel(Contact);
        unreadCount->setObjectName(QString::fromUtf8("unreadCount"));
        unreadCount->setAlignment(Qt::AlignCenter);
        unreadCount->setVisible(false);

        infoLayout->addWidget(unreadCount);


        horizontalLayout->addLayout(infoLayout);


        retranslateUi(Contact);

        QMetaObject::connectSlotsByName(Contact);
    } // setupUi

    void retranslateUi(QWidget *Contact)
    {
        nameLabel->setText(QCoreApplication::translate("Contact", "\345\256\242\346\210\267\345\220\215\347\247\260", nullptr));
        unreadCount->setText(QCoreApplication::translate("Contact", "0", nullptr));
        (void)Contact;
    } // retranslateUi

};

namespace Ui {
    class Contact: public Ui_Contact {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTACT_H
