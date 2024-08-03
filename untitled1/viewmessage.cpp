#include "viewmessage.h"
#include "ui_viewmessage.h"
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>


viewmessage::viewmessage(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::viewmessage)
{
    ui->setupUi(this);
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/sqlite/db.sqlite");
    if (!db.open()) {
        QMessageBox::critical(this, "Error", "Failed to open the database.");
}
}
    void viewmessage::setCurrentPhoneNumber(const QString &phoneNumber) {
        currentPhoneNumber = phoneNumber;
        loadMessages();  // Load messages when the phone number is set
    }
    void viewmessage::loadMessages()
    {
        QSqlQuery query;
        query.prepare("SELECT message FROM messages WHERE phonenumber = :phonenumber ORDER BY timestamp ASC");
        query.bindValue(":phonenumber", currentPhoneNumber);

        if (!query.exec()) {
            QMessageBox::critical(this, "Error", "Failed to load messages.");
            qDebug() << "Error loading messages: " << query.lastError();
            return;
        }

        while (query.next()) {
            QString message = query.value(0).toString();
            ui->lineEdit->append(message);
        }
    }

viewmessage::~viewmessage()
{
    delete ui;
}
