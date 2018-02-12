#ifndef DIALOG_SH3_H
#define DIALOG_SH3_H

#include <QDialog>

namespace Ui {
    class Dialog_sh3;
}

class Dialog_sh3 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_sh3(QWidget *parent = 0);
    ~Dialog_sh3();

private:
    Ui::Dialog_sh3 *ui;

private slots:
    void on_pushButton_clicked();
};

#endif // DIALOG_SH3_H
