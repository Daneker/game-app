#ifndef DIALOG_ZH1_H
#define DIALOG_ZH1_H

#include <QDialog>

namespace Ui {
    class Dialog_zh1;
}

class Dialog_zh1 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_zh1(QWidget *parent = 0);
    ~Dialog_zh1();

private:
    Ui::Dialog_zh1 *ui;

private slots:
    void on_pushButton_clicked();
};

#endif // DIALOG_ZH1_H
