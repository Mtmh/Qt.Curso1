#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QList<int> L;
    L << 1 << 2 << 3 << 4 << 5;
    foreach (int i, L) {
       qDebug() << i;
    }
    return a.exec();
}

// es un macro de qt que es mas corto
