/********************************************************************************
** Form generated from reading UI file 'chatmessage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATMESSAGE_H
#define UI_CHATMESSAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChatMessage
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *avatar;
    QLabel *messageLabel;

    void setupUi(QWidget *ChatMessage)
    {
        if (ChatMessage->objectName().isEmpty())
            ChatMessage->setObjectName(QString::fromUtf8("ChatMessage"));
        ChatMessage->resize(400, 80);
        ChatMessage->setStyleSheet(QString::fromUtf8("\n"
"/* \346\266\210\346\201\257\345\206\205\345\256\271\346\240\267\345\274\217 */\n"
"QLabel#messageLabel {\n"
"    font-size: 14px;\n"
"    padding: 10px;\n"
"    border-radius: 10px;\n"
"    max-width: 250px;\n"
"    word-wrap: break-word;\n"
"}\n"
"\n"
"/* \345\244\264\345\203\217\346\240\267\345\274\217 */\n"
"QLabel#avatar {\n"
"    border-radius: 25px;\n"
"    background-color: #CCCCCC;\n"
"    min-width: 50px;\n"
"    min-height: 50px;\n"
"    max-width: 50px;\n"
"    max-height: 50px;\n"
"}\n"
"\n"
"/* \345\217\221\351\200\201\350\200\205\357\274\210\345\256\242\346\210\267\357\274\211\347\232\204\346\266\210\346\201\257 */\n"
"QWidget#rightMessage {\n"
"    background-color: #FF6A00; /* \346\251\231\350\211\262\350\203\214\346\231\257 */\n"
"    color: #FFFFFF;\n"
"}\n"
"\n"
"/* \346\216\245\346\224\266\350\200\205\357\274\210\350\201\224\347\263\273\344\272\272\357\274\211\347\232\204\346\266\210\346\201\257 */\n"
"QWidget#leftMessage {\n"
"    background-color: #FFFFFF; /* \347\231\275\350\211\262"
                        "\350\203\214\346\231\257 */\n"
"    color: #333333;\n"
"    border: 1px solid #FF6A00; /* \346\251\231\350\211\262\350\276\271\346\241\206 */\n"
"}\n"
"   "));
        horizontalLayout = new QHBoxLayout(ChatMessage);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        avatar = new QLabel(ChatMessage);
        avatar->setObjectName(QString::fromUtf8("avatar"));
        avatar->setMinimumSize(QSize(50, 50));
        avatar->setMaximumSize(QSize(50, 50));
        avatar->setScaledContents(true);
        avatar->setPixmap(QPixmap(QString::fromUtf8(":/default_avatar.png")));

        horizontalLayout->addWidget(avatar);

        messageLabel = new QLabel(ChatMessage);
        messageLabel->setObjectName(QString::fromUtf8("messageLabel"));
        messageLabel->setAlignment(Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout->addWidget(messageLabel);


        retranslateUi(ChatMessage);

        QMetaObject::connectSlotsByName(ChatMessage);
    } // setupUi

    void retranslateUi(QWidget *ChatMessage)
    {
        messageLabel->setText(QCoreApplication::translate("ChatMessage", "\346\266\210\346\201\257\345\206\205\345\256\271", nullptr));
        (void)ChatMessage;
    } // retranslateUi

};

namespace Ui {
    class ChatMessage: public Ui_ChatMessage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATMESSAGE_H
