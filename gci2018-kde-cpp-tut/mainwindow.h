#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "helloworlddialog.h"
#include "colorchangingdialog.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void on_helloWorld_button_click();
    void on_colorChange_button_click();

private:
    Ui::MainWindow *ui;
    HelloWorldDialog *hDialog;
    colorChangingDialog *cDialog;
};

#endif // MAINWINDOW_H
