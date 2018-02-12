#include "dialog_sh2.h"
#include "ui_dialog_sh2.h"
#include "shewim3.h"

Dialog_sh2::Dialog_sh2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_sh2)
{
    ui->setupUi(this);
}

Dialog_sh2::~Dialog_sh2()
{
    delete ui;
}

void Dialog_sh2::on_pushButton_clicked()
{
    shewim3 *s = new shewim3;
    s->show();
}
