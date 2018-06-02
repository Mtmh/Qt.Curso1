#include <QCoreApplication>
#include <QDateTime>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    //QDate fecha(2018, 3, 15);
    //QTime hora(20, 57, 0);
    //QDateTime fh(fecha, hora);
    //qDebug() << fh;
    qDebug() << QDateTime::currentDateTime();
    return a.exec();
}

//una es la fecha manual que tu le metes otra la del servidor
