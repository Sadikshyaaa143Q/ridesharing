/********************************************************************************
** Form generated from reading UI file 'viewrequests.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWREQUESTS_H
#define UI_VIEWREQUESTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_viewrequests
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *viewrequests)
    {
        if (viewrequests->objectName().isEmpty())
            viewrequests->setObjectName("viewrequests");
        viewrequests->resize(800, 600);
        centralwidget = new QWidget(viewrequests);
        centralwidget->setObjectName("centralwidget");
        viewrequests->setCentralWidget(centralwidget);
        menubar = new QMenuBar(viewrequests);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        viewrequests->setMenuBar(menubar);
        statusbar = new QStatusBar(viewrequests);
        statusbar->setObjectName("statusbar");
        viewrequests->setStatusBar(statusbar);

        retranslateUi(viewrequests);

        QMetaObject::connectSlotsByName(viewrequests);
    } // setupUi

    void retranslateUi(QMainWindow *viewrequests)
    {
        viewrequests->setWindowTitle(QCoreApplication::translate("viewrequests", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class viewrequests: public Ui_viewrequests {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWREQUESTS_H
