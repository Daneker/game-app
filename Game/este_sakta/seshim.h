#ifndef SESHIM_H
#define SESHIM_H

#include <QMainWindow>

namespace Ui {
    class seshim;
}

class seshim : public QMainWindow
{
    Q_OBJECT

public:
    explicit seshim(QWidget *parent = 0);
    ~seshim();

private:
    Ui::seshim *ui;
    int a, b, r, oper;
    int l, count;

private slots:
    void on_pushButton_5_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_6_clicked();
    void esep();
    int result();
    void exit();
};

#endif // SESHIM_H
