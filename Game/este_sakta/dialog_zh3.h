#ifndef DIALOG_ZH3_H
#define DIALOG_ZH3_H

#include <QDialog>

namespace Ui {
    class Dialog_zh3;
}

class Dialog_zh3 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_zh3(QWidget *parent = 0);
    ~Dialog_zh3();

private:
    Ui::Dialog_zh3 *ui;

private slots:
    void on_pushButton_clicked();
};

#endif // DIALOG_ZH3_H
