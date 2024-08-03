#ifndef VIEWREQUESTS_H
#define VIEWREQUESTS_H

#include <QMainWindow>
#include <QtSql>
#include <QMessageBox>
#include "rideaccepted.h"

namespace ui {
class viewrequests;
}

class viewrequests : public QMainWindow
{
    Q_OBJECT

public:
    explicit viewrequests(QWidget *parent = nullptr);
    ~viewrequests();



private slots:
    void on_pushButton_clicked();

    //void on_pushButton_2_clicked();

    void on_tableView_activated(const QModelIndex &index);

private:
    ui::viewrequests *ui;
    QSqlDatabase db;
    rideaccepted *rideacceptedwindow;
};

#endif // VIEWREQUESTS_H
