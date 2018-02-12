#ifndef ZHYLDAM_H
#define ZHYLDAM_H

#include <QMainWindow>

namespace Ui {
    class zhyldam;
}

class zhyldam : public QMainWindow
{
    Q_OBJECT

public:
    explicit zhyldam(QWidget *parent = 0);
    ~zhyldam();

private:
    Ui::zhyldam *ui;
    int f, s, count;
    QTimer *timer;

private slots:
    void on_pushButton_jok_clicked();
    void on_pushButton_ia_clicked();
    void on_pushButton_clicked();
    void setImg();
    void showButton();
};

#endif // ZHYLDAM_H
