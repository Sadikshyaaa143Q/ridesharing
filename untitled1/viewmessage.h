#ifndef VIEWMESSAGE_H
#define VIEWMESSAGE_H

#include <QMainWindow>
#include <QtSql>
#include <QString>

namespace Ui {
class viewmessage;
}

class viewmessage : public QMainWindow
{
    Q_OBJECT

public:
    explicit viewmessage(QWidget *parent = nullptr);
    ~viewmessage();

private:
    Ui::viewmessage *ui;
    QString currentPhoneNumber;
    QSqlDatabase db;
};

#endif // VIEWMESSAGE_H
