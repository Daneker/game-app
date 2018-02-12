#include "dialog_zh.h"
#include "ui_dialog_zh.h"
#include "zhyldam.h"

Dialog_zh::Dialog_zh(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_zh)
{
    ui->setupUi(this);
}

Dialog_zh::~Dialog_zh()
{
    delete ui;
}

void Dialog_zh::on_pushButton_clicked()
{
    zhyldam *z = new zhyldam;
    z->show();
}
