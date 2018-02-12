#ifndef DIALOG_ZH2_H
#define DIALOG_ZH2_H

#include <QDialog>

namespace Ui {
    class Dialog_zh2;
}

class Dialog_zh2 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_zh2(QWidget *parent = 0);
    ~Dialog_zh2();

private:
    Ui::Dialog_zh2 *ui;

private slots:
    void on_pushButton_clicked();
};

#endif // DIALOG_ZH2_H
