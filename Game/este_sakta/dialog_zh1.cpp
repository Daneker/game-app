#include "dialog_zh1.h"
#include "ui_dialog_zh1.h"
#include "zhyldam2.h"

Dialog_zh1::Dialog_zh1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_zh1)
{
    ui->setupUi(this);
}

Dialog_zh1::~Dialog_zh1()
{
    delete ui;
}

void Dialog_zh1::on_pushButton_clicked()
{
    zhyldam2 *z = new zhyldam2;
    z->show();
}
