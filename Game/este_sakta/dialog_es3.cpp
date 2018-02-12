#include "dialog_es3.h"
#include "ui_dialog_es3.h"
#include "este_sakta.h"

Dialog_es3::Dialog_es3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_es3)
{
    ui->setupUi(this);
}

Dialog_es3::~Dialog_es3()
{
    delete ui;
}

void Dialog_es3::on_pushButton_clicked()
{
    este_sakta *e = new este_sakta;
    e->show();
}
