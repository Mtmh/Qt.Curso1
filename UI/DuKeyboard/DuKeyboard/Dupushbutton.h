#ifndef DUPUSHBUTTON_H
#define DUPUSHBUTTON_H

#include <QPushButton>

class DuPushButton :public QPushButton
{

    Q_OBJECT
public:
    DuPushButton(QWidget *parent = nullptr);

signals:
    void KeyPressed(DuPushButton *);
};

#endif // DUPUSHBUTTON_H
