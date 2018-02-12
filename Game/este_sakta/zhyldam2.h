#ifndef ZHYLDAM2_H
#define ZHYLDAM2_H

#include <QMainWindow>

namespace Ui {
    class zhyldam2;
}

class zhyldam2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit zhyldam2(QWidget *parent = 0);
    ~zhyldam2();

private:
    Ui::zhyldam2 *ui;
    int f, s, count;
    QTimer *timer;

private slots:
    void on_pushButton_jok_clicked();
    void on_pushButton_ia_clicked();
    void on_pushButton_clicked();
    void setImg();
    void showButton();
};

#endif // ZHYLDAM2_H
