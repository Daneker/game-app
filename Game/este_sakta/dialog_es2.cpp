#include "dialog_es2.h"
#include "ui_dialog_es2.h"
#include "este_sakta3.h"

Dialog_es2::Dialog_es2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_es2)
{
    ui->setupUi(this);
}

Dialog_es2::~Dialog_es2()
{
    delete ui;
}

void Dialog_es2::on_pushButton_clicked()
{
    este_sakta3 *e = new este_sakta3;
    e->show();
}
