#ifndef DIALOG_ZH_H
#define DIALOG_ZH_H

#include <QDialog>

namespace Ui {
    class Dialog_zh;
}

class Dialog_zh : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_zh(QWidget *parent = 0);
    ~Dialog_zh();

private:
    Ui::Dialog_zh *ui;

private slots:
    void on_pushButton_clicked();
};

#endif // DIALOG_ZH_H
