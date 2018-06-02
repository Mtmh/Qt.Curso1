#include <QCoreApplication>
#include "objeto.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Objeto o;
    o.emiteTodasLasSenyales();

    return a.exec();
}
