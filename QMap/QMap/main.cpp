#include <QCoreApplication>
#include <QTextStream>
#include <QDebug>
#include <QFile>
#include <QMap>
#include <ctime>

#define TOTAL 10000

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QMap<int, int>::Iterator it; // iterador del registro , int izq genera int izq y deracha genera int derecha
    QMap<int, int> registro;
    QTextStream io;
    QFile arch;
    int n, valor, suma = 0;



    // Salida del archivo de numeros

    qsrand(time(NULL));

    arch.setFileName("/Users/tizianomartinhernando/desktop/numeros.txt"); //ruta creacion archivo

    arch.open(QIODevice::WriteOnly | QIODevice::Text); //Abrir archivo permiso escritura de texto

    io.setDevice(&arch); // io le ponemos el dispositivo con el archivo

    for (int i = 0; i < TOTAL; ++i) // numero aleatorio hasta 10000
        io << qrand() % 10 + 1 << ' ';

    arch.flush(); // limpiar flush
    arch.close(); // cerrar


    arch.open(QIODevice::ReadOnly | QIODevice::Text);
    while (!io.atEnd()) {
        io >> n;
        ++registro[n];
    }

    registro.erase(registro.find(0)); // registro encuentra el cero y elemina

    for (it = registro.begin(); it != registro.end(); ++it){
         valor =  it.value();
         suma += valor;
         qDebug() << it.key() << ":" << valor;
    }

    qDebug() << "Suma: "  << suma;
    qDebug() << "Total: " << TOTAL;



    return a.exec();
}
