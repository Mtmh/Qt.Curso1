#include "object.h"
#include <QDebug>
#include <QTimer>


Object::Object(QObject *parent) : QObject(parent)
{
    m_timer = new QTimer(this);
    connect(m_timer, SIGNAL(timeout()), this, SLOT(onTimeOut()));
}

void Object::inicia()
{
   m_timer ->start(1500); // Tiempo de salida en milisegundos
}

void Object::onTimeOut()
{
    qDebug() << "El tiempo ha terminado.....";
}
