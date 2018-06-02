#include "objeto.h"
#include <QDebug>

Objeto::Objeto(QObject *parent) : QObject(parent)
{
    auto senyal1 = static_cast<void(Objeto::*)(void)>(senyal); // convertir
    auto slot1   = static_cast<void(Objeto::*)(void)>(onSenyal);
    auto senyal2 = static_cast<void(Objeto::*)(int)>(senyal);
    auto slot2   = static_cast<void(Objeto::*)(int)>(onSenyal);
    auto senyal3 = static_cast<void(Objeto::*)(char)>(senyal);
    auto slot3   = static_cast<void(Objeto::*)(char)>(onSenyal);
    auto senyal4 = static_cast<void(Objeto::*)(QString)>(senyal);
    auto slot4   = static_cast<void(Objeto::*)(const QString &)>(onSenyal);

    connect(this, senyal1, this, slot1); // Metodo nuevo QT5
    connect(this, senyal2, this, slot2);
    connect(this, senyal3, this, slot3);
    connect(this, senyal4, this, slot4);

    //connect(this, SIGNAL(senyal()), this, SLOT(onSenyal()));// Metodoviejo
    //connect(this, SIGNAL(senyal(int)), this, SLOT(onSenyal(int)));
    //connect(this, SIGNAL(senyal(char)), this, SLOT(onSenyal(char)));
    //connect(this, SIGNAL(senyal(QString)), this, SLOT(onSenyal(QString)));



}


void Objeto::emiteTodasLasSenyales()
{
    emit senyal();
    emit senyal(-5);
    emit senyal('@');
    emit senyal("Hola, mundo");

}


void Objeto::onSenyal()
{
    qDebug() << "onSenyal()";
}
void Objeto::onSenyal(int e)
{
    qDebug() << "onSenyal(int e)" << e;
}
void Objeto::onSenyal(char c)
{
    qDebug() << "onSenyal(char c)" << c;
}
void Objeto::onSenyal(const QString &s)
{
    qDebug() << "onSenyal(const QString s)"  << s;
}
