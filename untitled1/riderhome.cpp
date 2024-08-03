#include "riderhome.h"
#include "ui_riderhome.h"

riderhome::riderhome(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::riderhome)
{
    ui->setupUi(this);
}

riderhome::~riderhome()
{
    delete ui;
}
