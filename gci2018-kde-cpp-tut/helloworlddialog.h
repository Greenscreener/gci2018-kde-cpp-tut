#ifndef HELLOWORLDDIALOG_H
#define HELLOWORLDDIALOG_H

#include <QDialog>

namespace Ui {
class HelloWorldDialog;
}

class HelloWorldDialog : public QDialog
{
    Q_OBJECT

public:
    explicit HelloWorldDialog(QWidget *parent = nullptr);
    ~HelloWorldDialog();

private:
    Ui::HelloWorldDialog *ui;
};

#endif // HELLOWORLDDIALOG_H
