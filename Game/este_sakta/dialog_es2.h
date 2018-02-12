#ifndef DIALOG_ES2_H
#define DIALOG_ES2_H

#include <QDialog>

namespace Ui {
    class Dialog_es2;
}

class Dialog_es2 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_es2(QWidget *parent = 0);
    ~Dialog_es2();

private:
    Ui::Dialog_es2 *ui;

private slots:
    void on_pushButton_clicked();
};

#endif // DIALOG_ES2_H
