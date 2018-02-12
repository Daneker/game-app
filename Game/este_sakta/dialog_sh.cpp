#include "dialog_sh.h"
#include "ui_dialog_sh.h"
#include "seshim.h"

Dialog_sh::Dialog_sh(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_sh)
{
    ui->setupUi(this);
}

Dialog_sh::~Dialog_sh()
{
    delete ui;
}

void Dialog_sh::on_pushButton_clicked()
{
    seshim *s = new seshim;
    s->show();
}
