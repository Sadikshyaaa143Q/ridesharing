/********************************************************************************
** Form generated from reading UI file 'viewmessage.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWMESSAGE_H
#define UI_VIEWMESSAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_viewmessage
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *viewmessage)
    {
        if (viewmessage->objectName().isEmpty())
            viewmessage->setObjectName("viewmessage");
        viewmessage->resize(800, 600);
        centralwidget = new QWidget(viewmessage);
        centralwidget->setObjectName("centralwidget");
        viewmessage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(viewmessage);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        viewmessage->setMenuBar(menubar);
        statusbar = new QStatusBar(viewmessage);
        statusbar->setObjectName("statusbar");
        viewmessage->setStatusBar(statusbar);

        retranslateUi(viewmessage);

        QMetaObject::connectSlotsByName(viewmessage);
    } // setupUi

    void retranslateUi(QMainWindow *viewmessage)
    {
        viewmessage->setWindowTitle(QCoreApplication::translate("viewmessage", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class viewmessage: public Ui_viewmessage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWMESSAGE_H
