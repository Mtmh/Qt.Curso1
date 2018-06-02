#ifndef OBJETO_H
#define OBJETO_H

#include <QObject>

class Objeto : public QObject
{
    Q_OBJECT
public:
    explicit Objeto(QObject *parent = 0);

    void emiteTodasLasSenyales();

signals:

    void senyal();
    void senyal(int);
    void senyal(char);
    void senyal(QString);

public slots:

    void onSenyal();
    void onSenyal(int e);
    void onSenyal(char c);
    void onSenyal(const QString &s);



};

#endif // OBJETO_H
