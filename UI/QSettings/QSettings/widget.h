#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QVariant>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

protected:
    void closeEvent(QCloseEvent *e);

private:
    Ui::Widget *ui;
};

void guardarAjustes(const QString &llave,
                    const QVariant &valor,
                    const QString &gpo);

QVariant cargaAjustes(const QString &llave,
                      const QString &gpo,
                      const QVariant &valDefecto = QVariant());

#endif // WIDGET_H
