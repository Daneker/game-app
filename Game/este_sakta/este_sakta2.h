#ifndef ESTE_SAKTA2_H
#define ESTE_SAKTA2_H

#include <QMainWindow>

namespace Ui {
    class este_sakta2;
}

class este_sakta2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit este_sakta2(QWidget *parent = 0);
    ~este_sakta2();

private:
    Ui::este_sakta2 *ui;
    int l1, l2, l3, count, push, check;
    QTimer *timer;

private slots:
    void on_pushButton_13_clicked();
    void on_pushButton_11_clicked();
    void on_pushButton_12_clicked();
    void on_pushButton_10_clicked();
    void on_pushButton_7_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_9_clicked();
    void on_pushButton_6_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_8_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_clicked();
    void set();
    void hideButton();
};

#endif // ESTE_SAKTA2_H
