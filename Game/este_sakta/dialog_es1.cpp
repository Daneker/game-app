#include "dialog_es1.h"
#include "ui_dialog_es1.h"
#include "este_sakta2.h"

Dialog_es1::Dialog_es1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_es1)
{
    ui->setupUi(this);
}

Dialog_es1::~Dialog_es1()
{
    delete ui;
}

void Dialog_es1::on_pushButton_clicked()
{
    este_sakta2 *e = new este_sakta2;
    e->show();
}
