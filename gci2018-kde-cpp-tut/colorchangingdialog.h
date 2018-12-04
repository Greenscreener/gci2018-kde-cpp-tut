#ifndef COLORCHANGINGDIALOG_H
#define COLORCHANGINGDIALOG_H

#include <QDialog>

namespace Ui {
class colorChangingDialog;
}

class colorChangingDialog : public QDialog
{
    Q_OBJECT

public:
    explicit colorChangingDialog(QWidget *parent = nullptr);
    ~colorChangingDialog();

public slots:
    void changeColor(int);

private:
    Ui::colorChangingDialog *ui;
};

#endif // COLORCHANGINGDIALOG_H
