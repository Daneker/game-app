#ifndef ESTE_SAKTA_H
#define ESTE_SAKTA_H

#include <QMainWindow>

namespace Ui {
    class este_sakta;
}

class este_sakta : public QMainWindow
{
    Q_OBJECT

public:
    explicit este_sakta(QWidget *parent = 0);
    ~este_sakta();

private:
    Ui::este_sakta *ui;
    int l1, l2, l3, count, push, check;
    QTimer *timer;

private slots:
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

#endif // ESTE_SAKTA_H
