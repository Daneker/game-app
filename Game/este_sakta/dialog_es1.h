#ifndef DIALOG_ES1_H
#define DIALOG_ES1_H

#include <QDialog>

namespace Ui {
    class Dialog_es1;
}

class Dialog_es1 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_es1(QWidget *parent = 0);
    ~Dialog_es1();

private:
    Ui::Dialog_es1 *ui;

private slots:
    void on_pushButton_clicked();
};

#endif // DIALOG_ES1_H
