#include <QCoreApplication>
#include <QTextStream>
#include <QDebug>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QString S; // tambien lo puedes hacer con variables con QString =
    QTextStream io; //Puedes hacerlo con el constructor tambien QTextStream io(&S);
    io.setString(&S);
    io << "Hola  Mundo" << " " << 8 << " " << 9.45;
    qDebug() << S;



    return a.exec();
}
