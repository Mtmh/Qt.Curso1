#include <QCoreApplication>
#include <QDebug>
#include <QVector>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QVector<int> v;
    v << 1 << 2 << 8 << 9 << 10;
    qDebug() << v;

    return a.exec();
}
