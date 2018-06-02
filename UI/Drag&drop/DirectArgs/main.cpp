#include "widget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w(argc, argv);//pasamos a w .....
    w.show();

    return a.exec();
}
