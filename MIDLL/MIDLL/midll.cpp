#include "midll.h"
#include <QDebug>


MIDLL::MIDLL()
{
}


void MIDLL::saluda() const
{
    qDebug()  << "hola desde una DLL";
}
