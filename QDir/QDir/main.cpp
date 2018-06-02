#include <QCoreApplication>
#include <QDir>
#include <QDebug>



int main(int argc, char *argv[])
{
    QCoreApplication a (argc, argv);
    QDir directorio;
    int cantidad;
    directorio.setPath("/Users/tizianomartinhernando/Desktop/");
    cantidad = directorio.count();
    for (int i = 2; i < cantidad; ++i)
        qDebug() << directorio[i];
    return a.exec();
}
