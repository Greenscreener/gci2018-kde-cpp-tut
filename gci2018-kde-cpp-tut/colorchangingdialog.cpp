#include "colorchangingdialog.h"
#include "ui_colorchangingdialog.h"

colorChangingDialog::colorChangingDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::colorChangingDialog)
{
    ui->setupUi(this);

    connect(ui->horizontalSlider,SIGNAL(valueChanged(int)), this, SLOT(changeColor(int)));

}

colorChangingDialog::~colorChangingDialog()
{
    delete ui;
}

void colorChangingDialog::changeColor(int hue) {
    QString hueString = QString::number(hue);
    this->setStyleSheet("background-color: hsl(" + hueString + ", 100%, 100%)");
}
