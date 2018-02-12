#ifndef SHEWIM3_H
#define SHEWIM3_H

#include <QMainWindow>

namespace Ui {
    class shewim3;
}

class shewim3 : public QMainWindow
{
    Q_OBJECT

public:
    explicit shewim3(QWidget *parent = 0);
    ~shewim3();

private:
    Ui::shewim3 *ui;
    int a, b, c, r, r0, oper;
    int l, count;
    QString str, str2;

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

#endif // SHEWIM3_H
