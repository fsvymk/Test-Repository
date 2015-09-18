#include "pntrs.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    pntrs w;
    w.show();

    return a.exec();
}
