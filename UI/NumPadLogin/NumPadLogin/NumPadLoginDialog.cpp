#include "NumPadLoginDialog.h"
#include "ui_NumPadLoginDialog.h"

#if defined(MY_DEBUG)
#include <QDebug>
#include <QResizeEvent>
#endif

#define PASSWORD 12345

NumPadLoginDialog::NumPadLoginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NumPadLoginDialog)
{
    ui->setupUi(this);

    resizeKey(ui->enterPushButton, QSize(100, 100));
    resizeKey(ui->clearPushButton, QSize(100, 100));
    resize(334, 618);

    connectKeys();
}

NumPadLoginDialog::~NumPadLoginDialog()
{
    delete ui;
}

void NumPadLoginDialog::on_clearPushButton_clicked()
{
    ui->lcdNumber->display(0);
}

void NumPadLoginDialog::on_enterPushButton_clicked()
{
    const double password = ui->lcdNumber->value();

    if  (password == PASSWORD) {
        accept();
        return;
    }

    reject();
}

void NumPadLoginDialog::onKeyWasClicked(const QString &number)
{
    ui->lcdNumber->display(QString::number(ui->lcdNumber->value())+number);
}

#if defined(MY_DEBUG)

void NumPadLoginDialog::resizeEvent(QResizeEvent *e)
{
     qDebug() << e->size();
     QDialog::resizeEvent(e);
}

#endif

void NumPadLoginDialog::resizeKey(QPushButton *key, const QSize &size) const
{

    key->setMaximumSize(size);
}

void NumPadLoginDialog::connectKeys()
{
    connect(ui->ceroPushButton,&DuNumericKeyPushButton::keyWasClicked,
            this, &NumPadLoginDialog::onKeyWasClicked);

    connect(ui->unoPushButton,&DuNumericKeyPushButton::keyWasClicked,
            this, &NumPadLoginDialog::onKeyWasClicked);

    connect(ui->dosPushButton,&DuNumericKeyPushButton::keyWasClicked,
            this, &NumPadLoginDialog::onKeyWasClicked);

    connect(ui->tresPushButton,&DuNumericKeyPushButton::keyWasClicked,
            this, &NumPadLoginDialog::onKeyWasClicked);

    connect(ui->cuatroPushButton,&DuNumericKeyPushButton::keyWasClicked,
            this, &NumPadLoginDialog::onKeyWasClicked);

    connect(ui->cincoPushButton,&DuNumericKeyPushButton::keyWasClicked,
            this, &NumPadLoginDialog::onKeyWasClicked);

    connect(ui->seisPushButton,&DuNumericKeyPushButton::keyWasClicked,
            this, &NumPadLoginDialog::onKeyWasClicked);

    connect(ui->sietePushButton,&DuNumericKeyPushButton::keyWasClicked,
            this, &NumPadLoginDialog::onKeyWasClicked);

    connect(ui->ochoPushButton,&DuNumericKeyPushButton::keyWasClicked,
            this, &NumPadLoginDialog::onKeyWasClicked);

    connect(ui->nuevePushButton,&DuNumericKeyPushButton::keyWasClicked,
            this, &NumPadLoginDialog::onKeyWasClicked);
}
