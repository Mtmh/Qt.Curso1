#include <QCoreApplication>
#include <QDebug>
#include <QProcess>
#include <QTextStream>
#include <QTime>
#include <QFile>



int main(int argc, char *argv[])
{
    if  (argc == 1)

    {

        qDebug() << QString("Use '%1' programa resultado.txt").arg(argv[0]);
        return 1;

     }

    int res; // resultado

    QTime inicio;

    QFile arch;

    QTextStream io;

    QProcess proc; // proceso

    QString programa  = argv[1];
    QString resultado = argv[2];

    QCoreApplication  a (argc, argv);

    inicio = QTime::currentTime();
    proc.start(programa);
    proc.waitForFinished();
    res = inicio.msecsTo(QTime::currentTime()); // milisegundos de inicio y cierre

    arch.setFileName(resultado);
    arch.open(QIODevice::WriteOnly | QIODevice:: Text); // abrir texto de excritura

    io.setDevice(&arch);
    io << "El programa: " << programa << "ha tardado: " << res << "milisegundos";

    arch.flush(); //limpia memoria
    arch.close(); // cerramos archivo

    qDebug() << "Listo......... Presione Ctrl+C para terminar";

    return a.exec();
}


// esta hecho para win hay que modificar es medidor de inicio y cierre del
// en paralelo
