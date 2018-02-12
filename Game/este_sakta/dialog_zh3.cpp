#include "dialog_zh3.h"
#include "ui_dialog_zh3.h"
#include "zhyldam.h"

Dialog_zh3::Dialog_zh3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_zh3)
{
    ui->setupUi(this);
}

Dialog_zh3::~Dialog_zh3()
{
    delete ui;
}

void Dialog_zh3::on_pushButton_clicked()
{
    zhyldam *z = new zhyldam;
    z->show();
}
