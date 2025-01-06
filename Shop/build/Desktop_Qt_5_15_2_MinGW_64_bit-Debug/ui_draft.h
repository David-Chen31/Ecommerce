/********************************************************************************
** Form generated from reading UI file 'draft.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DRAFT_H
#define UI_DRAFT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CustomerCommunication
{
public:
    QHBoxLayout *mainLayout;
    QScrollArea *customerListArea;
    QWidget *customerListWidget;
    QVBoxLayout *customerListLayout;
    QListWidget *customerList;
    QVBoxLayout *chatLayout;
    QLabel *customerNameLabel;
    QScrollArea *chatScrollArea;
    QWidget *chatContentWidget;
    QVBoxLayout *chatMessagesLayout;
    QPushButton *emojiButton;
    QHBoxLayout *messageInputLayout;
    QTextEdit *messageInputBox;
    QPushButton *sendButton;

    void setupUi(QWidget *CustomerCommunication)
    {
        if (CustomerCommunication->objectName().isEmpty())
            CustomerCommunication->setObjectName(QString::fromUtf8("CustomerCommunication"));
        CustomerCommunication->resize(2000, 1000);
        mainLayout = new QHBoxLayout(CustomerCommunication);
        mainLayout->setObjectName(QString::fromUtf8("mainLayout"));
        customerListArea = new QScrollArea(CustomerCommunication);
        customerListArea->setObjectName(QString::fromUtf8("customerListArea"));
        customerListArea->setMaximumSize(QSize(500, 16777215));
        customerListArea->setWidgetResizable(true);
        customerListWidget = new QWidget();
        customerListWidget->setObjectName(QString::fromUtf8("customerListWidget"));
        customerListWidget->setGeometry(QRect(0, 0, 498, 986));
        customerListLayout = new QVBoxLayout(customerListWidget);
        customerListLayout->setObjectName(QString::fromUtf8("customerListLayout"));
        customerList = new QListWidget(customerListWidget);
        customerList->setObjectName(QString::fromUtf8("customerList"));

        customerListLayout->addWidget(customerList);

        customerListArea->setWidget(customerListWidget);

        mainLayout->addWidget(customerListArea);

        chatLayout = new QVBoxLayout();
        chatLayout->setObjectName(QString::fromUtf8("chatLayout"));
        customerNameLabel = new QLabel(CustomerCommunication);
        customerNameLabel->setObjectName(QString::fromUtf8("customerNameLabel"));

        chatLayout->addWidget(customerNameLabel);

        chatScrollArea = new QScrollArea(CustomerCommunication);
        chatScrollArea->setObjectName(QString::fromUtf8("chatScrollArea"));
        chatScrollArea->setWidgetResizable(true);
        chatContentWidget = new QWidget();
        chatContentWidget->setObjectName(QString::fromUtf8("chatContentWidget"));
        chatContentWidget->setGeometry(QRect(0, 0, 1480, 453));
        chatMessagesLayout = new QVBoxLayout(chatContentWidget);
        chatMessagesLayout->setObjectName(QString::fromUtf8("chatMessagesLayout"));
        chatScrollArea->setWidget(chatContentWidget);

        chatLayout->addWidget(chatScrollArea);

        emojiButton = new QPushButton(CustomerCommunication);
        emojiButton->setObjectName(QString::fromUtf8("emojiButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(emojiButton->sizePolicy().hasHeightForWidth());
        emojiButton->setSizePolicy(sizePolicy);

        chatLayout->addWidget(emojiButton);

        messageInputLayout = new QHBoxLayout();
        messageInputLayout->setObjectName(QString::fromUtf8("messageInputLayout"));
        messageInputBox = new QTextEdit(CustomerCommunication);
        messageInputBox->setObjectName(QString::fromUtf8("messageInputBox"));

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
        customerList->setStyleSheet(QCoreApplication::translate("CustomerCommunication", "\n"
"           QListWidget {\n"
"               background-color: #FFF2E6;\n"
"               border: 1px solid #FF6A00;\n"
"               border-radius: 5px;\n"
"               font-size: 16px;\n"
"               color: #333333;\n"
"           }\n"
"           QListWidget::item {\n"
"               padding: 10px;\n"
"           }\n"
"           QListWidget::item:hover {\n"
"               background-color: #FFEDD6;\n"
"           }\n"
"           QListWidget::item:selected {\n"
"               background-color: #FF6A00;\n"
"               color: white;\n"
"           }\n"
"          ", nullptr));
        customerNameLabel->setStyleSheet(QCoreApplication::translate("CustomerCommunication", "\n"
"         QLabel {\n"
"             font-size: 20px;\n"
"             font-weight: bold;\n"
"             color: #333333;\n"
"         }\n"
"        ", nullptr));
        customerNameLabel->setText(QCoreApplication::translate("CustomerCommunication", "\345\256\242\346\210\267\345\220\215\347\247\260\357\274\232\345\274\240\344\270\211", nullptr));
        emojiButton->setStyleSheet(QCoreApplication::translate("CustomerCommunication", "\n"
"           QPushButton {\n"
"               background-color: #FFFFFF;\n"
"               border: 2px solid #FF6A00;\n"
"               border-radius: 5px;\n"
"               padding: 5px;\n"
"               font-size: 18px;\n"
"               color: #FF6A00;\n"
"           }\n"
"           QPushButton:hover {\n"
"               background-color: #FFEDD6;\n"
"           }\n"
"           QPushButton:pressed {\n"
"               background-color: #FF6A00;\n"
"               color: white;\n"
"           }\n"
"          ", nullptr));
        emojiButton->setText(QCoreApplication::translate("CustomerCommunication", "\360\237\230\212", nullptr));
        messageInputBox->setStyleSheet(QCoreApplication::translate("CustomerCommunication", "\n"
"           QTextEdit {\n"
"               font-size: 16px;\n"
"               padding: 8px;\n"
"               border: 2px solid #FF6A00;\n"
"               border-radius: 5px;\n"
"           }\n"
"           QTextEdit:focus {\n"
"               border: 2px solid #FF4500;\n"
"           }\n"
"          ", nullptr));
        messageInputBox->setPlaceholderText(QCoreApplication::translate("CustomerCommunication", "\350\257\267\350\276\223\345\205\245\346\266\210\346\201\257...", nullptr));
        sendButton->setStyleSheet(QCoreApplication::translate("CustomerCommunication", "\n"
"           QPushButton {\n"
"               background-color: #FF6A00;\n"
"               color: white;\n"
"               font-size: 18px;\n"
"               border-radius: 5px;\n"
"               padding: 8px 16px;\n"
"           }\n"
"           QPushButton:hover {\n"
"               background-color: #FF4500;\n"
"           }\n"
"          ", nullptr));
        sendButton->setText(QCoreApplication::translate("CustomerCommunication", "\345\217\221\351\200\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CustomerCommunication: public Ui_CustomerCommunication {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRAFT_H
