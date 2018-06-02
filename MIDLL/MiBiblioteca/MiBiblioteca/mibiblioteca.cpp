#include "mibiblioteca.h"
#include <QDebug>


MiBiblioteca::MiBiblioteca()
{
}

void MiBiblioteca::saluda() const
{
    qDebug() << "Saluda desde una biblioteca estatica ";
}
