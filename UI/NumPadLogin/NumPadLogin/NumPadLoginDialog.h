#ifndef NUMPADLOGINDIALOG_H
#define NUMPADLOGINDIALOG_H

#include <QDialog>

namespace Ui {
class NumPadLoginDialog;
}

class NumPadLoginDialog : public QDialog
{
    Q_OBJECT

public:
    explicit NumPadLoginDialog(QWidget *parent = nullptr);
    ~NumPadLoginDialog();

private slots:
    void on_clearPushButton_clicked();
    void on_enterPushButton_clicked();
    void onKeyWasClicked(const QString &number);

protected:
#if defined(MY_DEBUG)

    void resizeEvent(QResizeEvent *e) override;

#endif

private:
    void resizeKey(QPushButton *key, const QSize &size) const;
    void connectKeys();

    Ui::NumPadLoginDialog *ui;
};

#endif // NUMPADLOGINDIALOG_H
