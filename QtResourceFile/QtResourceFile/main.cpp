#include <QCoreApplication>
#include <QFile>
#include <QTextStream>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QTextStream io;
    QFile arch;
    QString contenido;


    arch.setFileName(":/archivo"); // crea en recursos, es para crear archivos binarios
    arch.open(QIODevice::Text | QIODevice::ReadOnly);
    io.setDevice(&arch);
    contenido = io.readAll();
    arch.close();
    qDebug() << contenido;



    return a.exec();
}
