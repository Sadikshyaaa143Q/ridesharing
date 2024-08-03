/********************************************************************************
** Form generated from reading UI file 'rideaccepted.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RIDEACCEPTED_H
#define UI_RIDEACCEPTED_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_rideaccepted
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *rideaccepted)
    {
        if (rideaccepted->objectName().isEmpty())
            rideaccepted->setObjectName("rideaccepted");
        rideaccepted->resize(800, 600);
        centralwidget = new QWidget(rideaccepted);
        centralwidget->setObjectName("centralwidget");
        rideaccepted->setCentralWidget(centralwidget);
        menubar = new QMenuBar(rideaccepted);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        rideaccepted->setMenuBar(menubar);
        statusbar = new QStatusBar(rideaccepted);
        statusbar->setObjectName("statusbar");
        rideaccepted->setStatusBar(statusbar);

        retranslateUi(rideaccepted);

        QMetaObject::connectSlotsByName(rideaccepted);
    } // setupUi

    void retranslateUi(QMainWindow *rideaccepted)
    {
        rideaccepted->setWindowTitle(QCoreApplication::translate("rideaccepted", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class rideaccepted: public Ui_rideaccepted {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RIDEACCEPTED_H
