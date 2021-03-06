#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPushButton>
#include <QDialog>
#include "helloworlddialog.h"
#include "colorchangingdialog.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->pushButton->setText("Click me!");

    connect(ui->pushButton,SIGNAL(clicked()),this, SLOT(on_helloWorld_button_click()));
    connect(ui->pushButton_2,SIGNAL(clicked()),this, SLOT(on_colorChange_button_click()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_helloWorld_button_click() {
    hDialog = new HelloWorldDialog(this);
    hDialog->show();
}
void MainWindow::on_colorChange_button_click() {
    cDialog = new colorChangingDialog(this);
    cDialog->show();
}
