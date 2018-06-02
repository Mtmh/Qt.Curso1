#include "DuKeyForm.h"
#include "ui_DuKeyForm.h"
#include "Dupushbutton.h"
#include <QHBoxLayout>
#include <QVBoxLayout>

DuKeyForm::DuKeyForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DuKeyForm)
{
    ui->setupUi(this);

    auto vbox = new QVBoxLayout;
    vbox->addLayout(loadKeys('A', 'M'));
    vbox->addLayout(loadKeys('N', 'Z'));
    setLayout(vbox);
}

DuKeyForm::~DuKeyForm()
{
    delete ui;
}

QHBoxLayout *DuKeyForm::loadKeys(char x, char y)
{
    auto hbox = new QHBoxLayout;

    for (char ix = x; ix <= y; ++ix){
        auto key = new DuPushButton(this);
        key->setText(QString("%1").arg(ix));
        hbox->addWidget(key);

        connect(key, &DuPushButton::KeyPressed, [&](DuPushButton *key){
            emit keyPressed(key->text());
        });

    }

    return hbox;
}
