#include "dialog_sh3.h"
#include "ui_dialog_sh3.h"
#include "seshim.h"

Dialog_sh3::Dialog_sh3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_sh3)
{
    ui->setupUi(this);
}

Dialog_sh3::~Dialog_sh3()
{
    delete ui;
}

void Dialog_sh3::on_pushButton_clicked()
{
    seshim *s = new seshim;
    s->show();
}
