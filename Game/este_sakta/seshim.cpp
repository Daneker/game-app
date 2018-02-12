#include "seshim.h"
#include "ui_seshim.h"
#include "mainwindow.h"
#include "dialog_sh1.h"
#include <QTime>

seshim::seshim(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::seshim)
{
    qsrand(QTime::currentTime().msec());
    ui->setupUi(this);
    count = 0;
    ui->label_2->setText("0");
    esep();

}

seshim::~seshim()
{
    delete ui;
}

void seshim::on_pushButton_6_clicked()
{
    MainWindow *m = new MainWindow;
    m->show();
}

void seshim::esep()
{
    a = (rand() % 10)+1;
    b = (rand() % 10)+1;
    oper = (rand() % 2)+1;
    if(oper == 1){
        r = a+b;
        ui->pushButton_esep->setText(QString("%1 + %2").arg(a).arg(b));
    }
    else if(oper == 2){
        if (a>b){
            r = a-b;
            ui->pushButton_esep->setText(QString("%1 - %2").arg(a).arg(b));
        }
        else {
            r = b-a;
            ui->pushButton_esep->setText(QString("%1 - %2").arg(b).arg(a));
        }
    }

    l = (rand() % 4)+1;
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

int seshim::result(){
    int t2 = (rand() % 20);
    while (t2 == r)
        t2 = (rand() % 20);
    return t2;
}

void seshim::on_pushButton_2_clicked()
{
    if(l == 1)
        count ++;
    ui->label_2->setText(QString("%1").arg(count));
    if (count == 5)
        exit();
    else
        esep();
}

void seshim::on_pushButton_4_clicked()
{
    if(l == 2)
        count ++;
    ui->label_2->setText(QString("%1").arg(count));
    if (count == 5)
        exit();
    else
        esep();
}

void seshim::on_pushButton_3_clicked()
{
    if(l == 3)
        count ++;
    ui->label_2->setText(QString("%1").arg(count));
    if (count == 5)
        exit();
    else
        esep();
}

void seshim::on_pushButton_5_clicked()
{
    if(l == 4)
        count ++;
    ui->label_2->setText(QString("%1").arg(count));
    if (count == 5)
        exit();
    else
        esep();
}

void seshim::exit(){
    Dialog_sh1 *d = new Dialog_sh1;
    d->show();
}
