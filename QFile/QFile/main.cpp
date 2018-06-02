#include <QCoreApplication>
#include <QFile>
#include <QDebug>


int main(int argc, char *argv[])
{
    QCoreApplication ap (argc, argv);
    QByteArray contenido = "Estoy escribiendo un archivo";
    QFile a;
    a.setFileName("/Users/tizianomartinhernando/Desktop/documento.txt");
    if  (!a.exists())
    {
        qDebug() << "El archivo seleccionado no existe";
        return 1;
    }

    a.open(QIODevice::WriteOnly | QIODevice::Text);
    if (!a.isOpen())
    {
        qDebug() << "El archivo no se ha podido abrir";
        return 2;
    }

    a.write(contenido);
    a.flush();
    a.close();
    return ap.exec();
}
