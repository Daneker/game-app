#include "dialog_sh1.h"
#include "ui_dialog_sh1.h"
#include "sheshim2.h"

Dialog_sh1::Dialog_sh1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_sh1)
{
    ui->setupUi(this);
}

Dialog_sh1::~Dialog_sh1()
{
    delete ui;
}

void Dialog_sh1::on_pushButton_clicked()
{
    sheshim2 *s = new sheshim2;
    s->show();
}
