#ifndef DIALOG_ES3_H
#define DIALOG_ES3_H

#include <QDialog>

namespace Ui {
    class Dialog_es3;
}

class Dialog_es3 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_es3(QWidget *parent = 0);
    ~Dialog_es3();

private:
    Ui::Dialog_es3 *ui;

private slots:
    void on_pushButton_clicked();
};

#endif // DIALOG_ES3_H
