#include "Dupushbutton.h"

DuPushButton::DuPushButton(QWidget *parent)
    :   QPushButton(parent)
{
    connect(this, &DuPushButton::clicked, [&]() {
        emit KeyPressed(this);
    });
}
