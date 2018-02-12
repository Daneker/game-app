#ifndef SHESHIM2_H
#define SHESHIM2_H

#include <QMainWindow>

namespace Ui {
    class sheshim2;
}

class sheshim2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit sheshim2(QWidget *parent = 0);
    ~sheshim2();

private:
    Ui::sheshim2 *ui;
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

#endif // SHESHIM2_H
