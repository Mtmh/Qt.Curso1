#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class QSystemTrayIcon;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionSalir_triggered();

    void on_actionAbout_Qt_triggered();

    void on_showMessagePushButton_clicked();

private:
    Ui::MainWindow *ui;
    QSystemTrayIcon *mSystemTrayIcon;
};

#endif // MAINWINDOW_H
