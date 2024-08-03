/********************************************************************************
** Form generated from reading UI file 'chat.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHAT_H
#define UI_CHAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_chat
{
public:
    QWidget *centralwidget;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit_display;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *chat)
    {
        if (chat->objectName().isEmpty())
            chat->setObjectName("chat");
        chat->resize(800, 600);
        centralwidget = new QWidget(chat);
        centralwidget->setObjectName("centralwidget");
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(120, 110, 113, 26));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(240, 110, 93, 29));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(250, 150, 93, 29));
        lineEdit_display = new QLineEdit(centralwidget);
        lineEdit_display->setObjectName("lineEdit_display");
        lineEdit_display->setGeometry(QRect(210, 260, 113, 26));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(360, 240, 321, 87));
        chat->setCentralWidget(centralwidget);
        menubar = new QMenuBar(chat);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        chat->setMenuBar(menubar);
        statusbar = new QStatusBar(chat);
        statusbar->setObjectName("statusbar");
        chat->setStatusBar(statusbar);

        retranslateUi(chat);

        QMetaObject::connectSlotsByName(chat);
    } // setupUi

    void retranslateUi(QMainWindow *chat)
    {
        chat->setWindowTitle(QCoreApplication::translate("chat", "MainWindow", nullptr));
        lineEdit->setText(QCoreApplication::translate("chat", "Message", nullptr));
        pushButton->setText(QCoreApplication::translate("chat", "Enter", nullptr));
        pushButton_2->setText(QCoreApplication::translate("chat", "Exit", nullptr));
        lineEdit_display->setText(QCoreApplication::translate("chat", "Display Message:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class chat: public Ui_chat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHAT_H
