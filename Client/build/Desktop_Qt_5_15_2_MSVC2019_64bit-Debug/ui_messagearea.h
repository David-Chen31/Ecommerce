/********************************************************************************
** Form generated from reading UI file 'messagearea.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESSAGEAREA_H
#define UI_MESSAGEAREA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MessageArea
{
public:
    QGridLayout *gridLayout;
    QScrollArea *messageScrollArea;
    QWidget *scrollAreaWidgetContents;

    void setupUi(QWidget *MessageArea)
    {
        if (MessageArea->objectName().isEmpty())
            MessageArea->setObjectName(QString::fromUtf8("MessageArea"));
        MessageArea->resize(1530, 590);
        MessageArea->setStyleSheet(QString::fromUtf8("/* \345\205\250\345\261\200\350\256\276\347\275\256 */\n"
"QWidget {\n"
"    background-color: #FFFFFF; /* \345\205\250\345\261\200\350\203\214\346\231\257\347\231\275\350\211\262 */\n"
"    font-family: \"Microsoft YaHei\";\n"
"    font-size: 14px;\n"
"    color: #333333; /* \351\273\230\350\256\244\345\255\227\344\275\223\351\242\234\350\211\262 */\n"
"}\n"
"\n"
"/* \346\214\211\351\222\256\346\240\267\345\274\217 */\n"
"QPushButton {\n"
"    background-color: #FF6A00; /* \346\214\211\351\222\256\350\203\214\346\231\257\346\251\230\350\211\262 */\n"
"    color: white; /* \346\214\211\351\222\256\346\226\207\345\255\227\351\242\234\350\211\262 */\n"
"    border-radius: 8px; /* \345\234\206\350\247\222 */\n"
"    padding: 8px 16px; /* \345\206\205\350\276\271\350\267\235 */\n"
"    font-size: 14px;\n"
"    border: 2px solid transparent; /* \351\273\230\350\256\244\351\200\217\346\230\216\350\276\271\346\241\206 */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #FF4500; /* \346\202\254\345\201\234"
                        "\346\251\230\347\272\242\350\211\262 */\n"
"	border: 2px solid #FF6A00; /* \346\267\273\345\212\240\350\276\271\346\241\206 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #CC3700; /* \346\214\211\344\270\213\346\267\261\346\251\230\350\211\262 */\n"
"    \n"
"}\n"
"\n"
"/* \347\246\201\347\224\250\347\212\266\346\200\201 */\n"
"QPushButton:disabled {\n"
"    background-color: #F5F5F5; /* \347\201\260\350\211\262\350\203\214\346\231\257 */\n"
"    color: #AAAAAA; /* \345\255\227\344\275\223\347\201\260\350\211\262 */\n"
"    border: 2px solid #DDDDDD; /* \346\265\205\347\201\260\350\276\271\346\241\206 */\n"
"}\n"
"\n"
"/* \350\276\223\345\205\245\346\241\206\346\240\267\345\274\217 */\n"
"QLineEdit, QTextEdit {\n"
"\n"
"    border: 2px solid #FF6A00; /* \346\251\230\350\211\262\350\276\271\346\241\206 */\n"
"    border-radius: 5px; /* \345\234\206\350\247\222 */\n"
"    padding: 6px 10px;\n"
"    font-size: 14px;\n"
"    color: #333333;\n"
"}\n"
"\n"
"QLineEdit:focus, QTextEdit:focus {\n"
" "
                        "   border: 2px solid #FF4500; /* \350\201\232\347\204\246\346\251\230\347\272\242\350\211\262\350\276\271\346\241\206 */\n"
"    background-color: #FFFFFF; /* \350\201\232\347\204\246\350\203\214\346\231\257\347\231\275\350\211\262 */\n"
"}\n"
"\n"
"/* \346\240\207\347\255\276\346\240\267\345\274\217 */\n"
"QLabel {\n"
"    background-color: transparent; /* \351\273\230\350\256\244\351\200\217\346\230\216\350\203\214\346\231\257 */\n"
"    color: #333333; /* \345\255\227\344\275\223\351\242\234\350\211\262\346\267\261\347\201\260 */\n"
"    font-size: 14px;\n"
"    font-weight: normal;\n"
"}\n"
"\n"
"QLabel#titleLabel {\n"
"    font-size: 18px;\n"
"    font-weight: bold;\n"
"    color: #FF6A00; /* \346\240\207\351\242\230\346\240\207\347\255\276\346\251\230\350\211\262 */\n"
"    border-bottom: 2px solid #FFEDD6; /* \344\270\213\350\276\271\346\241\206\346\265\205\346\251\230\350\211\262 */\n"
"    padding: 5px 0;\n"
"}\n"
"\n"
"/* \346\273\232\345\212\250\346\235\241\346\240\267\345\274\217 */\n"
"QScrollBar:"
                        "vertical {\n"
"    background: #F5F5F5; /* \346\273\232\345\212\250\346\235\241\350\203\214\346\231\257\347\201\260\350\211\262 */\n"
"    width: 12px; /* \346\273\232\345\212\250\346\235\241\345\256\275\345\272\246 */\n"
"    border-radius: 6px; /* \345\234\206\350\247\222 */\n"
"    margin: 2px 0; /* \345\206\205\350\276\271\350\267\235 */\n"
"}\n"
"\n"
"QScrollBar::handle:vertical {\n"
"    background: #FF6A00; /* \346\273\232\345\212\250\346\235\241\346\251\230\350\211\262 */\n"
"    border-radius: 6px; /* \345\234\206\350\247\222 */\n"
"}\n"
"\n"
"QScrollBar::handle:vertical:hover {\n"
"    background: #FF4500; /* \346\202\254\345\201\234\346\251\230\347\272\242\350\211\262 */\n"
"}\n"
"\n"
"QScrollBar::add-line:vertical, QScrollBar::sub-line:vertical {\n"
"    height: 0px; /* \345\216\273\351\231\244\344\270\212\344\270\213\346\214\211\351\222\256 */\n"
"}\n"
"\n"
"QScrollBar:horizontal {\n"
"    background: #F5F5F5; /* \346\250\252\345\220\221\346\273\232\345\212\250\346\235\241\350\203\214\346\231\257\347"
                        "\201\260\350\211\262 */\n"
"    height: 12px; /* \351\253\230\345\272\246 */\n"
"    border-radius: 6px; /* \345\234\206\350\247\222 */\n"
"}\n"
"\n"
"QScrollBar::handle:horizontal {\n"
"    background: #FF6A00; /* \346\273\232\345\212\250\346\235\241\346\251\230\350\211\262 */\n"
"    border-radius: 6px; /* \345\234\206\350\247\222 */\n"
"}\n"
"\n"
"QScrollBar::handle:horizontal:hover {\n"
"    background: #FF4500; /* \346\202\254\345\201\234\346\251\230\347\272\242\350\211\262 */\n"
"}\n"
"\n"
"QScrollBar::add-line:horizontal, QScrollBar::sub-line:horizontal {\n"
"    width: 0px; /* \345\216\273\351\231\244\345\267\246\345\217\263\346\214\211\351\222\256 */\n"
"}\n"
"\n"
"/* \345\210\227\350\241\250\346\216\247\344\273\266\346\240\267\345\274\217 */\n"
"QListWidget {\n"
"    background-color: #FFF2E6; /* \346\265\205\346\251\230\350\203\214\346\231\257 */\n"
"    border: 1px solid #FF6A00; /* \346\251\230\350\211\262\350\276\271\346\241\206 */\n"
"    border-radius: 5px; /* \345\234\206\350\247\222 */\n"
"  "
                        "  padding: 5px;\n"
"}\n"
"\n"
"QListWidget::item {\n"
"    background-color: transparent; /* \351\273\230\350\256\244\351\200\217\346\230\216 */\n"
"    padding: 10px;\n"
"    font-size: 14px;\n"
"    color: #333333; /* \345\255\227\344\275\223\346\267\261\347\201\260 */\n"
"}\n"
"\n"
"QListWidget::item:hover {\n"
"    background-color: #FFEDD6; /* \346\265\205\346\251\230\350\211\262\346\202\254\345\201\234\350\203\214\346\231\257 */\n"
"    border-radius: 5px; /* \345\234\206\350\247\222 */\n"
"}\n"
"\n"
"QListWidget::item:selected {\n"
"    background-color: #FF6A00; /* \346\251\230\350\211\262\351\200\211\344\270\255\350\203\214\346\231\257 */\n"
"    color: white; /* \351\200\211\344\270\255\346\226\207\345\255\227\347\231\275\350\211\262 */\n"
"    border-radius: 5px; /* \345\234\206\350\247\222 */\n"
"}\n"
"\n"
"/* \345\267\245\345\205\267\346\214\211\351\222\256\346\240\267\345\274\217 */\n"
"QToolButton {\n"
"    background-color: #FF6A00; /* \346\251\230\350\211\262\350\203\214\346\231\257 */\n"
"   "
                        " color: white; /* \346\214\211\351\222\256\346\226\207\345\255\227\347\231\275\350\211\262 */\n"
"    border-radius: 5px; /* \345\234\206\350\247\222 */\n"
"    padding: 8px 12px; /* \345\206\205\350\276\271\350\267\235 */\n"
"    font-size: 14px;\n"
"}\n"
"\n"
"QToolButton:hover {\n"
"    background-color: #FF4500; /* \346\251\230\347\272\242\350\211\262\346\202\254\345\201\234\346\225\210\346\236\234 */\n"
"}\n"
"\n"
"QToolButton:pressed {\n"
"    background-color: #CC3700; /* \346\267\261\346\251\230\350\211\262\346\214\211\344\270\213\346\225\210\346\236\234 */\n"
"}\n"
"\n"
"/* \345\210\206\345\211\262\347\272\277\346\240\267\345\274\217 */\n"
"QFrame#line {\n"
"    background-color: #FF6A00; /* \346\251\230\350\211\262\347\272\277\346\235\241 */\n"
"    height: 2px; /* \347\272\277\346\235\241\351\253\230\345\272\246 */\n"
"    border: none;\n"
"    margin: 5px 0;\n"
"}\n"
"\n"
"/* \350\241\250\346\203\205\345\222\214\345\212\237\350\203\275\346\214\211\351\222\256 */\n"
"QPushButton#emojiButton, QPushBu"
                        "tton#attachmentButton {\n"
"    background-color: #FFFFFF; /* \346\214\211\351\222\256\350\203\214\346\231\257\347\231\275\350\211\262 */\n"
"    border: 2px solid #FF6A00; /* \346\251\230\350\211\262\350\276\271\346\241\206 */\n"
"    border-radius: 5px; /* \345\234\206\350\247\222 */\n"
"    padding: 5px;\n"
"    font-size: 18px; /* \345\233\276\346\240\207\345\244\247\345\260\217 */\n"
"    color: #FF6A00; /* \345\255\227\344\275\223\346\251\230\350\211\262 */\n"
"}\n"
"\n"
"QPushButton#emojiButton:hover, QPushButton#attachmentButton:hover {\n"
"    background-color: #FFEDD6; /* \346\265\205\346\251\230\350\211\262\346\202\254\345\201\234\350\203\214\346\231\257 */\n"
"}\n"
"\n"
"QPushButton#emojiButton:pressed, QPushButton#attachmentButton:pressed {\n"
"    background-color: #FF6A00; /* \346\251\230\350\211\262\350\203\214\346\231\257 */\n"
"    color: white; /* \346\214\211\344\270\213\346\226\207\345\255\227\345\217\230\347\231\275 */\n"
"}\n"
""));
        gridLayout = new QGridLayout(MessageArea);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        messageScrollArea = new QScrollArea(MessageArea);
        messageScrollArea->setObjectName(QString::fromUtf8("messageScrollArea"));
        messageScrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1510, 570));
        messageScrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(messageScrollArea, 0, 0, 1, 1);


        retranslateUi(MessageArea);

        QMetaObject::connectSlotsByName(MessageArea);
    } // setupUi

    void retranslateUi(QWidget *MessageArea)
    {
        MessageArea->setWindowTitle(QCoreApplication::translate("MessageArea", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MessageArea: public Ui_MessageArea {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESSAGEAREA_H
