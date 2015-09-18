#ifndef PNTRS_H
#define PNTRS_H

#include <QMainWindow>

namespace Ui {
class pntrs;
}

class pntrs : public QMainWindow
{
    Q_OBJECT

public:
    explicit pntrs(QWidget *parent = 0);
    ~pntrs();

private:
    Ui::pntrs *ui;
};

#endif // PNTRS_H
