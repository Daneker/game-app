#ifndef ZHYLDAM3_H
#define ZHYLDAM3_H

#include <QMainWindow>

namespace Ui {
    class zhyldam3;
}

class zhyldam3 : public QMainWindow
{
    Q_OBJECT

public:
    explicit zhyldam3(QWidget *parent = 0);
    ~zhyldam3();

private:
    Ui::zhyldam3 *ui;
    int f, s, count;
    QTimer *timer;

private slots:
    void on_pushButton_jok_clicked();
    void on_pushButton_ia_clicked();
    void on_pushButton_clicked();
    void setImg();
    void showButton();
};

#endif // ZHYLDAM3_H
