#ifndef OBJECT_H
#define OBJECT_H

#include <QObject>

class QTimer;

class Object : public QObject
{
    Q_OBJECT
public:
    explicit Object(QObject *parent = nullptr);

    void inicia();

public slots:

    void onTimeOut(); // Tiempo acabado

private:
    QTimer *m_timer;

};

#endif // OBJECT_H
