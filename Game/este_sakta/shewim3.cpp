#include "shewim3.h"
#include "ui_shewim3.h"
#include "mainwindow.h"
#include "dialog_sh3.h"
#include <QTime>

shewim3::shewim3(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::shewim3)
{
    qsrand(QTime::currentTime().msec());
    ui->setupUi(this);
    count = 0;
    ui->label_2->setText("0");
    esep();

}

shewim3::~shewim3()
{
    delete ui;
}

void shewim3::on_pushButton_6_clicked()
{
    MainWindow *m = new MainWindow;
    m->show();
}

void shewim3::esep()
{
    a = (rand() % 10)+1;
    b = (rand() % 10)+1;
    c = (rand() % 10)+1;
    oper = (rand() % 3)+1;

    if(oper == 1){
        r0 = a+b;
        str = QString("(%1 + %2)").arg(a).arg(b);
    }
    else if(oper == 2){
        if (a>b){
            r0 = a-b;
            str = QString("(%1 - %2)").arg(a).arg(b);
        }
        else {
            r0 = b-a;
            str = QString("(%1 - %2)").arg(b).arg(a);
        }
    }
    else if(oper == 3){
        r0 = a*b;
        str = QString("(%1 * %2)").arg(a).arg(b);
    }

    oper = (rand() % 3)+1;
    if(oper == 1){
        r = r0+c;
        str2 = QString("%1 + %2").arg(str).arg(c);
    }
    else if(oper == 2){
        if (r>c){
            r = r0-c;
            str2 = QString("%1 - %2").arg(str).arg(c);
        }
        else {
            r = c-r0;
            str2 = QString("%1 - %2").arg(c).arg(str);
        }
    }
    else if(oper == 3){
        r = r0*c;
        str2 = QString("%1 * %2").arg(str).arg(c);
    }
    ui->pushButton_esep->setText(str2);

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

int shewim3::result(){
    int t2 = (rand() % 100);
    while (t2 == r)
        t2 = (rand() % 100);
    return t2;
}

void shewim3::on_pushButton_2_clicked()
{
    if(l == 1)
        count ++;
    ui->label_2->setText(QString("%1").arg(count));
    if (count == 5)
        exit();
    else
        esep();
}

void shewim3::on_pushButton_4_clicked()
{
    if(l == 2)
        count ++;
    ui->label_2->setText(QString("%1").arg(count));
    if (count == 5)
        exit();
    else
        esep();
}

void shewim3::on_pushButton_3_clicked()
{
    if(l == 3)
        count ++;
    ui->label_2->setText(QString("%1").arg(count));
    if (count == 5)
        exit();
    else
        esep();
}

void shewim3::on_pushButton_5_clicked()
{
    if(l == 4)
        count ++;
    ui->label_2->setText(QString("%1").arg(count));
    if (count == 5)
        exit();
    else
        esep();
}

void shewim3::exit(){
    Dialog_sh3 *d = new Dialog_sh3;
    d->show();
}
