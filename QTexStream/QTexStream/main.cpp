#include <QCoreApplication>
#include <QTextStream>
#include <QDebug>
#include <QFile>



int main(int argc, char *argv[])
{
    QCoreApplication ap (argc, argv);
    QString contenido;
    QTextStream io; // input & output (entrada y salida)
    QFile a;
    a.setFileName("/Users/tizianomartinhernando/Desktop/documento.txt"); //Donde tu quieras crearlo
    a.open(QIODevice::ReadWrite | QIODevice::Text);
    if (!a.isOpen())
    {
        qDebug() << "Error: archivo no abierto";
        return 1;
    }

    io.setDevice(&a);
    contenido = io.readAll();
    qDebug() << contenido;

    io << "Texto de prueba";
    a.flush();
    a.close();
    return ap.exec();
}
