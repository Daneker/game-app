#include "dialog_es.h"
#include "ui_dialog_es.h"
#include "este_sakta.h"

Dialog_es::Dialog_es(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_es)
{
    ui->setupUi(this);
}

Dialog_es::~Dialog_es()
{
    delete ui;
}

void Dialog_es::on_pushButton_clicked()
{
    este_sakta *e = new este_sakta;
    e->show();
}
