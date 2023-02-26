#include "fccapplication.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    FCCApplication w;
    w.show();
    return a.exec();
}
