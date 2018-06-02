#ifndef AGREGARFORM_H
#define AGREGARFORM_H

#include <QWidget>

namespace Ui
{
class AgregarForm;
}

class QFileSystemModel;

class AgregarForm : public QWidget
{
    Q_OBJECT

public:
    explicit AgregarForm(QWidget *parent = nullptr);
    ~AgregarForm();

signals:
    void selectedFile(const QModelIndex &);

private slots:
    void on_agregarPushButton_clicked();

private:
    Ui::AgregarForm *ui;
    QFileSystemModel *mModel;
};

#endif // AGREGARFORM_H
