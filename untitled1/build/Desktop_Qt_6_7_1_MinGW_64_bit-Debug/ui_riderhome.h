/********************************************************************************
** Form generated from reading UI file 'riderhome.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RIDERHOME_H
#define UI_RIDERHOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_riderhome
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *riderhome)
    {
        if (riderhome->objectName().isEmpty())
            riderhome->setObjectName("riderhome");
        riderhome->resize(800, 600);
        centralwidget = new QWidget(riderhome);
        centralwidget->setObjectName("centralwidget");
        riderhome->setCentralWidget(centralwidget);
        menubar = new QMenuBar(riderhome);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        riderhome->setMenuBar(menubar);
        statusbar = new QStatusBar(riderhome);
        statusbar->setObjectName("statusbar");
        riderhome->setStatusBar(statusbar);

        retranslateUi(riderhome);

        QMetaObject::connectSlotsByName(riderhome);
    } // setupUi

    void retranslateUi(QMainWindow *riderhome)
    {
        riderhome->setWindowTitle(QCoreApplication::translate("riderhome", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class riderhome: public Ui_riderhome {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RIDERHOME_H
