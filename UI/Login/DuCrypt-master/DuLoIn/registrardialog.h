#ifndef REGISTRARDIALOG_H
#define REGISTRARDIALOG_H

#include <QDialog>

namespace Ui {
class RegistrarDialog;
}

class RegistrarDialog : public QDialog
{
    Q_OBJECT

public:
    explicit RegistrarDialog(QWidget *parent = nullptr);
    ~RegistrarDialog();
private:
    Ui::RegistrarDialog *ui;
};

#endif // REGISTRARDIALOG_H
