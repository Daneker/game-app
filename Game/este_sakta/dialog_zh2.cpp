#include "dialog_zh2.h"
#include "ui_dialog_zh2.h"
#include "zhyldam3.h"

Dialog_zh2::Dialog_zh2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_zh2)
{
    ui->setupUi(this);
}

Dialog_zh2::~Dialog_zh2()
{
    delete ui;
}

void Dialog_zh2::on_pushButton_clicked()
{
    zhyldam3 *z = new zhyldam3;
    z->show();
}
