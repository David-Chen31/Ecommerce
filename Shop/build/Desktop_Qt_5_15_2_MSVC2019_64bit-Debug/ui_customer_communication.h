/********************************************************************************
** Form generated from reading UI file 'customer_communication.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMER_COMMUNICATION_H
#define UI_CUSTOMER_COMMUNICATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CustomerCommunication
{
public:
    QHBoxLayout *mainLayout;
    QListWidget *customerList;
    QVBoxLayout *chatLayout;
    QLabel *customerNameLabel;
    QWidget *messageArea;
    QPushButton *emojiButton;
    QHBoxLayout *messageInputLayout;
    QTextEdit *messageInputBox;
    QPushButton *sendButton;

    void setupUi(QWidget *CustomerCommunication)
    {
        if (CustomerCommunication->objectName().isEmpty())
            CustomerCommunication->setObjectName(QString::fromUtf8("CustomerCommunication"));
        CustomerCommunication->resize(2010, 1060);
        CustomerCommunication->setStyleSheet(QString::fromUtf8("/* General UI Styles */\n"
"QWidget {\n"
"    background-color: #f0f8ff; /* \345\244\251\350\223\235\350\211\262 */\n"
"    border-radius: 12px; /* \346\233\264\345\234\206\346\266\246\347\232\204\345\244\226\350\247\202 */\n"
"}\n"
"\n"
"QScrollArea {\n"
"    background-color: white;\n"
"    border-radius: 12px;\n"
"    box-shadow: 0px 2px 10px rgba(0, 0, 0, 0.1); /* \345\276\256\345\246\231\351\230\264\345\275\261\346\225\210\346\236\234 */\n"
"}\n"
"\n"
"QListWidget {\n"
"    background-color: white;\n"
"    border: 1px solid #87cefa; /* \346\265\205\345\244\251\350\223\235\350\211\262 */\n"
"    border-radius: 12px;\n"
"    font-size: 16px;\n"
"    color: #333;\n"
"    box-shadow: 0px 2px 5px rgba(0, 0, 0, 0.05); /* \350\275\273\345\276\256\351\230\264\345\275\261\346\225\210\346\236\234 */\n"
"    transition: all 0.3s ease; /* \345\271\263\346\273\221\350\277\207\346\270\241\346\225\210\346\236\234 */\n"
"}\n"
"\n"
"QListWidget::item {\n"
"    padding: 12px 16px;\n"
"    margin: 4px 0;\n"
"    border-radi"
                        "us: 8px;\n"
"}\n"
"\n"
"QListWidget::item:hover {\n"
"    background-color: #e6f7ff; /* \346\233\264\346\237\224\345\222\214\347\232\204\350\223\235\350\211\262 */\n"
"    transform: scale(1.03); /* \346\224\276\345\244\247\346\225\210\346\236\234 */\n"
"}\n"
"\n"
"QListWidget::item:selected {\n"
"    background-color: #87cefa; /* \346\265\205\345\244\251\350\223\235\350\211\262\351\200\211\344\270\255 */\n"
"    color: white;\n"
"    transform: scale(1.05); /* \351\200\211\344\270\255\346\227\266\346\224\276\345\244\247\346\225\210\346\236\234 */\n"
"}\n"
"\n"
"/* Label Styles */\n"
"QLabel {\n"
"    font-size: 20px;\n"
"    color: #333;\n"
"    font-weight: bold;\n"
"    padding: 10px;\n"
"}\n"
"\n"
"/* Button Styles */\n"
"QPushButton {\n"
"    background-color: #87cefa; /* \345\244\251\350\223\235\350\211\262 */\n"
"    border: 2px solid #87cefa;\n"
"    border-radius: 20px;\n"
"    padding: 12px 24px;\n"
"    font-size: 18px;\n"
"    color: white;\n"
"    font-weight: bold;\n"
"    transition: all 0.3s ea"
                        "se;\n"
"    box-shadow: 0px 4px 10px rgba(0, 0, 0, 0.1); /* \346\233\264\345\244\247\347\232\204\351\230\264\345\275\261\346\225\210\346\236\234 */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #b0e0e6; /* \346\265\205\350\223\235\350\211\262 hover */\n"
"    transform: translateY(-4px); /* \345\220\221\344\270\212\347\247\273\345\212\250\346\225\210\346\236\234 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #4682b4; /* \351\222\242\350\223\235\350\211\262 */\n"
"    transform: translateY(2px); /* \346\214\211\344\270\213\346\227\266\344\270\213\347\247\273\346\225\210\346\236\234 */\n"
"}\n"
"\n"
"/* Emoji Button Styles */\n"
"QPushButton#emojiButton {\n"
"    background-color: #ffffff;\n"
"    border: 2px solid #87cefa;\n"
"    border-radius: 50%;\n"
"    padding: 12px;\n"
"    font-size: 24px;\n"
"    color: #87cefa;\n"
"    transition: all 0.3s ease;\n"
"    box-shadow: 0px 4px 8px rgba(0, 0, 0, 0.1);\n"
"}\n"
"\n"
"QPushButton#emojiButton:hover {\n"
"    background-color:"
                        " #e6f7ff;\n"
"    transform: scale(1.1);\n"
"}\n"
"\n"
"/* Text Edit Styles */\n"
"QTextEdit {\n"
"    font-size: 16px;\n"
"    padding: 12px;\n"
"    border: 1px solid #87cefa;\n"
"    border-radius: 12px;\n"
"    background-color: white;\n"
"    color: #333;\n"
"    transition: all 0.3s ease;\n"
"}\n"
"\n"
"QTextEdit:focus {\n"
"    border: 1px solid #4682b4; /* \351\222\242\350\223\235\350\211\262 focus */\n"
"    box-shadow: 0px 0px 8px rgba(70, 130, 180, 0.5); /* \350\201\232\347\204\246\346\227\266\347\232\204\351\230\264\345\275\261 */\n"
"}\n"
"\n"
"/* Scroll Area Styles */\n"
"QScrollBar:vertical, QScrollBar:horizontal {\n"
"    background-color: #f0f8ff;\n"
"    width: 12px;\n"
"    border-radius: 6px;\n"
"}\n"
"\n"
"QScrollBar::handle:vertical, QScrollBar::handle:horizontal {\n"
"    background-color: #87cefa;\n"
"    border-radius: 6px;\n"
"}\n"
"\n"
"QScrollBar::handle:vertical:hover, QScrollBar::handle:horizontal:hover {\n"
"    background-color: #4682b4; /* \351\222\242\350\223\235\350\211\262 h"
                        "over */\n"
"}\n"
""));
        mainLayout = new QHBoxLayout(CustomerCommunication);
        mainLayout->setObjectName(QString::fromUtf8("mainLayout"));
        customerList = new QListWidget(CustomerCommunication);
        customerList->setObjectName(QString::fromUtf8("customerList"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(customerList->sizePolicy().hasHeightForWidth());
        customerList->setSizePolicy(sizePolicy);
        customerList->setMinimumSize(QSize(450, 0));

        mainLayout->addWidget(customerList);

        chatLayout = new QVBoxLayout();
        chatLayout->setObjectName(QString::fromUtf8("chatLayout"));
        customerNameLabel = new QLabel(CustomerCommunication);
        customerNameLabel->setObjectName(QString::fromUtf8("customerNameLabel"));

        chatLayout->addWidget(customerNameLabel);

        messageArea = new QWidget(CustomerCommunication);
        messageArea->setObjectName(QString::fromUtf8("messageArea"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(messageArea->sizePolicy().hasHeightForWidth());
        messageArea->setSizePolicy(sizePolicy1);

        chatLayout->addWidget(messageArea);

        emojiButton = new QPushButton(CustomerCommunication);
        emojiButton->setObjectName(QString::fromUtf8("emojiButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(emojiButton->sizePolicy().hasHeightForWidth());
        emojiButton->setSizePolicy(sizePolicy2);

        chatLayout->addWidget(emojiButton);

        messageInputLayout = new QHBoxLayout();
        messageInputLayout->setObjectName(QString::fromUtf8("messageInputLayout"));
        messageInputBox = new QTextEdit(CustomerCommunication);
        messageInputBox->setObjectName(QString::fromUtf8("messageInputBox"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(messageInputBox->sizePolicy().hasHeightForWidth());
        messageInputBox->setSizePolicy(sizePolicy3);
        messageInputBox->setMinimumSize(QSize(0, 300));

        messageInputLayout->addWidget(messageInputBox);

        sendButton = new QPushButton(CustomerCommunication);
        sendButton->setObjectName(QString::fromUtf8("sendButton"));

        messageInputLayout->addWidget(sendButton);


        chatLayout->addLayout(messageInputLayout);


        mainLayout->addLayout(chatLayout);


        retranslateUi(CustomerCommunication);

        QMetaObject::connectSlotsByName(CustomerCommunication);
    } // setupUi

    void retranslateUi(QWidget *CustomerCommunication)
    {
        CustomerCommunication->setWindowTitle(QCoreApplication::translate("CustomerCommunication", "\344\270\216\345\256\242\346\210\267\350\201\212\345\244\251", nullptr));
        customerNameLabel->setText(QCoreApplication::translate("CustomerCommunication", "\345\256\242\346\210\267\345\220\215\347\247\260\357\274\232\345\274\240\344\270\211", nullptr));
        emojiButton->setText(QCoreApplication::translate("CustomerCommunication", "\360\237\230\212", nullptr));
        messageInputBox->setPlaceholderText(QCoreApplication::translate("CustomerCommunication", "\350\257\267\350\276\223\345\205\245\346\266\210\346\201\257...", nullptr));
        sendButton->setText(QCoreApplication::translate("CustomerCommunication", "\345\217\221\351\200\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CustomerCommunication: public Ui_CustomerCommunication {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMER_COMMUNICATION_H
