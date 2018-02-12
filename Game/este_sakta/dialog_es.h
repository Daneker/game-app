#ifndef DIALOG_ES_H
#define DIALOG_ES_H

#include <QDialog>

namespace Ui {
    class Dialog_es;
}

class Dialog_es : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_es(QWidget *parent = 0);
    ~Dialog_es();

private:
    Ui::Dialog_es *ui;

private slots:
    void on_pushButton_clicked();
};

#endif // DIALOG_ES_H
