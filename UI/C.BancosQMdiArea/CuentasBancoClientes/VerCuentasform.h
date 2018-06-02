#ifndef VERCUENTASFORM_H
#define VERCUENTASFORM_H

#include <QWidget>

namespace Ui
{
class VerCuentasForm;
}

class VerCuentasForm : public QWidget
{
    Q_OBJECT

public:
    explicit VerCuentasForm(QWidget *parent = nullptr);
    ~VerCuentasForm();

private slots:
    void on_recargarPushButton_clicked();

private:
    Ui::VerCuentasForm *ui;
};

#endif // VERCUENTASFORM_H
