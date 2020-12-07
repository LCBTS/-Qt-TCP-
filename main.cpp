#include "sev.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    sev w;
    w.show();

    return a.exec();
}
