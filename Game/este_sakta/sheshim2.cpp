#include "sheshim2.h"
#include "ui_sheshim2.h"
#include "mainwindow.h"
#include "dialog_sh2.h"
#include <QTime>

sheshim2::sheshim2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::sheshim2)
{
    qsrand(QTime::currentTime().msec());
    ui->setupUi(this);
    count = 0;
    ui->label_2->setText("0");
    esep();

}

sheshim2::~sheshim2()
{
    delete ui;
}

void sheshim2::on_pushButton_6_clicked()
{
    MainWindow *m = new MainWindow;
    m->show();
}

void sheshim2::esep()
{
    a = (rand() % 10)+1;
    b = (rand() % 10)+1;
    oper = (rand() % 2)+1;
    if(oper == 1){
        r = a*b;
        ui->pushButton_esep->setText(QString("%1 * %2").arg(a).arg(b));
    }
    else if(oper == 2){
        while (!(a % b == 0)){
            a = (qrand() % 10)+1;
        }
        r = a/b;
        ui->pushButton_esep->setText(QString("%1 : %2").arg(a).arg(b));
    }

    l = (qrand() % 4)+1;
    int t;
    if(l == 1)
        t = r;
    else
        t = result();
    ui->pushButton_2->setText(QString("%1").arg(t));
    if(l == 2)
        t = r;
    else
        t = result();
    ui->pushButton_4->setText(QString("%1").arg(t));
    if(l == 3)
        t = r;
    else
        t = result();
    ui->pushButton_3->setText(QString("%1").arg(t));
    if(l == 4)
        t = r;
    else
        t = result();
    ui->pushButton_5->setText(QString("%1").arg(t));
}

int sheshim2::result(){
    int t2 = (qrand() % 100);
    while (t2 == r)
        t2 = (qrand() % 100);
    return t2;
}

void sheshim2::on_pushButton_2_clicked()
{
    if(l == 1)
        count ++;
    ui->label_2->setText(QString("%1").arg(count));
    if (count == 5)
        exit();
    else
        esep();
}

void sheshim2::on_pushButton_4_clicked()
{
    if(l == 2)
        count ++;
    ui->label_2->setText(QString("%1").arg(count));
    if (count == 5)
        exit();
    else
        esep();
}

void sheshim2::on_pushButton_3_clicked()
{
    if(l == 3)
        count ++;
    ui->label_2->setText(QString("%1").arg(count));
    if (count == 5)
        exit();
    else
        esep();
}

void sheshim2::on_pushButton_5_clicked()
{
    if(l == 4)
        count ++;
    ui->label_2->setText(QString("%1").arg(count));
    if (count == 5)
        exit();
    else
        esep();
}

void sheshim2::exit(){
    Dialog_sh2 *d = new Dialog_sh2;
    d->show();
}
