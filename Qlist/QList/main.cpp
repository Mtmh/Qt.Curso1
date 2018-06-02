#include <QCoreApplication>
#include <QDebug>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int suma = 0;
    QList<int> L;
    L << 1 << 2 << 3 << 4 << 5 << 6 << 7 << 8;
    QList <int>::Iterator i;
    for (i = L.begin(); i != L.end(); ++i)
        suma += *i;
    qDebug() << suma;


    return a.exec();
}
