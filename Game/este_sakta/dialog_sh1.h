#ifndef DIALOG_SH1_H
#define DIALOG_SH1_H

#include <QDialog>

namespace Ui {
    class Dialog_sh1;
}

class Dialog_sh1 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_sh1(QWidget *parent = 0);
    ~Dialog_sh1();

private:
    Ui::Dialog_sh1 *ui;

private slots:
    void on_pushButton_clicked();
};

#endif // DIALOG_SH1_H
