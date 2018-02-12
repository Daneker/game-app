#ifndef DIALOG_SH2_H
#define DIALOG_SH2_H

#include <QDialog>

namespace Ui {
    class Dialog_sh2;
}

class Dialog_sh2 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_sh2(QWidget *parent = 0);
    ~Dialog_sh2();

private:
    Ui::Dialog_sh2 *ui;

private slots:
    void on_pushButton_clicked();
};

#endif // DIALOG_SH2_H
