#ifndef DIALOG_SH_H
#define DIALOG_SH_H

#include <QDialog>

namespace Ui {
    class Dialog_sh;
}

class Dialog_sh : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_sh(QWidget *parent = 0);
    ~Dialog_sh();

private:
    Ui::Dialog_sh *ui;

private slots:
    void on_pushButton_clicked();
};

#endif // DIALOG_SH_H
