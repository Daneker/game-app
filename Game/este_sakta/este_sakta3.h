#ifndef ESTE_SAKTA3_H
#define ESTE_SAKTA3_H

#include <QMainWindow>

namespace Ui {
    class este_sakta3;
}

class este_sakta3 : public QMainWindow
{
    Q_OBJECT

public:
    explicit este_sakta3(QWidget *parent = 0);
    ~este_sakta3();

private:
    Ui::este_sakta3 *ui;
    int l1, l2, l3, l4, count, push, check;
    QTimer *timer;

private slots:
    void on_pushButton_17_clicked();
    void on_pushButton_16_clicked();
    void on_pushButton_15_clicked();
    void on_pushButton_14_clicked();
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

#endif // ESTE_SAKTA3_H
