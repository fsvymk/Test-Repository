#include "pntrs.h"
#include "ui_pntrs.h"

pntrs::pntrs(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::pntrs)
{
    ui->setupUi(this);
}

pntrs::~pntrs()
{
    delete ui;
}
