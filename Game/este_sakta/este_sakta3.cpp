#include "este_sakta3.h"
#include "ui_este_sakta3.h"
#include "mainwindow.h"
#include "dialog_es3.h"
#include <QTime>
#include <QTimer>

este_sakta3::este_sakta3(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::este_sakta3)
{
    ui->setupUi(this);
    qsrand(QTime::currentTime().msec());
    count =0;
    push = 0;
    check = 0;
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(hideButton()));
    set();

}

este_sakta3::~este_sakta3()
{
    delete ui;
}

void este_sakta3::set(){
    timer->start(1000);
    qApp->processEvents();
    if( count == 5){
        Dialog_es3 *e = new Dialog_es3;
        e->show();
    }
    else{
        push = 0;
        check = 0;
        l1 = (rand() % 16)+1;
        l2 = (rand() % 16)+1;
        while(l2 == l1)
            l2 = (rand() % 12)+1;
        l3 = (rand() % 12)+1;
        while(l3 == l1 || l3==l2)
            l3 = (rand() % 12)+1;
        l4 = (rand() % 12)+1;
        while(l4 == l1 || l4==l2 || l4==l3)
            l4 = (rand() % 12)+1;
        if(l1 == 1 || l2 == 1 || l3 == 1 || l4 == 1)
            ui->pushButton_2->setStyleSheet("border-image: url(:/e2);");
        if(l1 == 2 || l2 == 2 || l3 == 2 || l4 == 2)
            ui->pushButton_3->setStyleSheet("border-image: url(:/e2);");
        if(l1 == 3 || l2 == 3 || l3 == 3 || l4 == 3)
            ui->pushButton_4->setStyleSheet("border-image: url(:/e2);");
        if(l1 == 4 || l2 == 4 || l3 == 4 || l4 == 4)
            ui->pushButton_5->setStyleSheet("border-image: url(:/e2);");
        if(l1 == 5 || l2 == 5 || l3 == 5 || l4 == 5)
            ui->pushButton_6->setStyleSheet("border-image: url(:/e2);");
        if(l1 == 6 || l2 == 6 || l3 == 6 || l4 == 6)
            ui->pushButton_7->setStyleSheet("border-image: url(:/e2);");
        if(l1 == 7 || l2 == 7 || l3 == 7 || l4 == 7)
            ui->pushButton_8->setStyleSheet("border-image: url(:/e2);");
        if(l1 == 8 || l2 == 8 || l3 == 8 || l4 == 8)
            ui->pushButton_9->setStyleSheet("border-image: url(:/e2);");
        if(l1 == 9 || l2 == 9 || l3 == 9 || l4 == 9)
            ui->pushButton_10->setStyleSheet("border-image: url(:/e2);");
        if(l1 == 10 || l2 == 10 || l3 == 10 || l4 == 10)
            ui->pushButton_11->setStyleSheet("border-image: url(:/e2);");
        if(l1 == 11 || l2 == 11 || l3 == 11 || l4 == 11)
            ui->pushButton_12->setStyleSheet("border-image: url(:/e2);");
        if(l1 == 12 || l2 == 12 || l3 == 12 || l4 == 12)
            ui->pushButton_13->setStyleSheet("border-image: url(:/e2);");
        if(l1 == 13 || l2 == 13 || l3 == 13 || l4 == 13)
            ui->pushButton_14->setStyleSheet("border-image: url(:/e2);");
        if(l1 == 14 || l2 == 14 || l3 == 14 || l4 == 14)
            ui->pushButton_15->setStyleSheet("border-image: url(:/e2);");
        if(l1 == 15 || l2 == 15 || l3 == 15 || l4 == 15)
            ui->pushButton_16->setStyleSheet("border-image: url(:/e2);");
        if(l1 == 16 || l2 == 16 || l3 == 16 || l4 == 16)
            ui->pushButton_17->setStyleSheet("border-image: url(:/e2);");
    }
}

void este_sakta3::on_pushButton_clicked()
{
    MainWindow *m = new MainWindow;
    m->show();
}

void este_sakta3::on_pushButton_2_clicked()
{
    push++;
    if(l1 == 1 || l2 == 1 || l3 == 1 || l4 == 1){
        check ++;
        ui->pushButton_2->setStyleSheet("border-image: url(:/e2);");
    }
    if(check == 4){
        count++;
        ui->label_2->setText(QString("%1").arg(count));
    }
    if(push == 4){
        hideButton();
        set();
    }
}

void este_sakta3::on_pushButton_5_clicked()
{
    push++;
    if(l1 == 4 || l2 == 4 || l3 == 4 || l4 == 4){
        check ++;
        ui->pushButton_5->setStyleSheet("border-image: url(:/e2);");
    }
    if(check == 4){
        count++;
        ui->label_2->setText(QString("%1").arg(count));
    }
    if(push == 4){
        hideButton();
        set();
    }
}

void este_sakta3::on_pushButton_8_clicked()
{
    push++;
    if(l1 == 7 || l2 == 7 || l3 == 7 || l4 == 7){
        check ++;
        ui->pushButton_8->setStyleSheet("border-image: url(:/e2);");
    }
    if(check == 4){
        count++;
        ui->label_2->setText(QString("%1").arg(count));
    }
    if(push == 4){
        hideButton();
        set();
    }
}

void este_sakta3::on_pushButton_3_clicked()
{
    push++;
    if(l1 == 2 || l2 == 2 || l3 == 2 || l4 == 2){
        check ++;
        ui->pushButton_3->setStyleSheet("border-image: url(:/e2);");
    }
    if(check == 4){
        count++;
        ui->label_2->setText(QString("%1").arg(count));
    }
    if(push == 4){
        hideButton();
        set();
    }
}

void este_sakta3::on_pushButton_6_clicked()
{
    push++;
    if(l1 == 5 || l2 == 5 || l3 == 5 || l4 == 5){
        check ++;
        ui->pushButton_6->setStyleSheet("border-image: url(:/e2);");
    }
    if(check == 4){
        count++;
        ui->label_2->setText(QString("%1").arg(count));
    }
    if(push == 4){
        hideButton();
        set();
    }
}

void este_sakta3::on_pushButton_9_clicked()
{
    push++;
    if(l1 == 8 || l2 == 8 || l3 == 8 || l4 == 8){
        check ++;
        ui->pushButton_9->setStyleSheet("border-image: url(:/e2);");
    }
    if(check == 4){
        count++;
        ui->label_2->setText(QString("%1").arg(count));
    }
    if(push == 4){
        hideButton();
        set();
    }
}

void este_sakta3::on_pushButton_4_clicked()
{
    push++;
    if(l1 == 3 || l2 == 3 || l3 == 3 || l4 == 3){
        check ++;
        ui->pushButton_4->setStyleSheet("border-image: url(:/e2);");
    }
    if(check == 4){
        count++;
        ui->label_2->setText(QString("%1").arg(count));
    }
    if(push == 4){
        hideButton();
        set();
    }
}

void este_sakta3::on_pushButton_7_clicked()
{
    push++;
    if(l1 == 6 || l2 == 6 || l3 == 6 || l4 == 6){
        check ++;
        ui->pushButton_7->setStyleSheet("border-image: url(:/e2);");
    }
    if(check == 4){
        count++;
        ui->label_2->setText(QString("%1").arg(count));
    }
    if(push == 4){
        hideButton();
        set();
    }
}


void este_sakta3::on_pushButton_10_clicked()
{
    push++;
    if(l1 == 9 || l2 == 9 || l3 == 9 || l4 == 9){
        check ++;
        ui->pushButton_10->setStyleSheet("border-image: url(:/e2);");
    }
    if(check == 4){
        count++;
        ui->label_2->setText(QString("%1").arg(count));
    }
    if(push == 4){
        hideButton();
        set();
    }
}

void este_sakta3::on_pushButton_12_clicked()
{
    push++;
    if(l1 == 11 || l2 == 11 || l3 == 11 || l4 == 11){
        check ++;
        ui->pushButton_12->setStyleSheet("border-image: url(:/e2);");
    }
    if(check == 4){
        count++;
        ui->label_2->setText(QString("%1").arg(count));
    }
    if(push == 4){
        hideButton();
        set();
    }
}

void este_sakta3::on_pushButton_11_clicked()
{
    push++;
    if(l1 == 10 || l2 == 10 || l3 == 10 || l4 == 10){
        check ++;
        ui->pushButton_11->setStyleSheet("border-image: url(:/e2);");
    }
    if(check == 4){
        count++;
        ui->label_2->setText(QString("%1").arg(count));
    }
    if(push == 4){
        hideButton();
        set();
    }
}

void este_sakta3::on_pushButton_13_clicked()
{
    push++;
    if(l1 == 12 || l2 == 12 || l3 == 12 || l4 == 12){
        check ++;
        ui->pushButton_13->setStyleSheet("border-image: url(:/e2);");
    }
    if(check == 4){
        count++;
        ui->label_2->setText(QString("%1").arg(count));
    }
    if(push == 4){
        hideButton();
        set();
    }
}

void este_sakta3::on_pushButton_14_clicked()
{
    push++;
    if(l1 == 13 || l2 == 13 || l3 == 13 || l4 == 13){
        check ++;
        ui->pushButton_14->setStyleSheet("border-image: url(:/e2);");
    }
    if(check == 4){
        count++;
        ui->label_2->setText(QString("%1").arg(count));
    }
    if(push == 4){
        hideButton();
        set();
    }
}

void este_sakta3::on_pushButton_15_clicked()
{
    push++;
    if(l1 == 14 || l2 == 14 || l3 == 14 || l4 == 14){
        check ++;
        ui->pushButton_15->setStyleSheet("border-image: url(:/e2);");
    }
    if(check == 4){
        count++;
        ui->label_2->setText(QString("%1").arg(count));
    }
    if(push == 4){
        hideButton();
        set();
    }
}

void este_sakta3::on_pushButton_16_clicked()
{
    push++;
    if(l1 == 15 || l2 == 15 || l3 == 15 || l4 == 15){
        check ++;
        ui->pushButton_16->setStyleSheet("border-image: url(:/e2);");
    }
    if(check == 4){
        count++;
        ui->label_2->setText(QString("%1").arg(count));
    }
    if(push == 4){
        hideButton();
        set();
    }
}

void este_sakta3::on_pushButton_17_clicked()
{
    push++;
    if(l1 == 16 || l2 == 16 || l3 == 16 || l4 == 16){
        check ++;
        ui->pushButton_17->setStyleSheet("border-image: url(:/e2);");
    }
    if(check == 4){
        count++;
        ui->label_2->setText(QString("%1").arg(count));
    }
    if(push == 4){
        hideButton();
        set();
    }
}

void este_sakta3::hideButton(){
    ui->pushButton_2->setStyleSheet("border-image: url(:/e_b);");
    ui->pushButton_3->setStyleSheet("border-image: url(:/e_b);");
    ui->pushButton_4->setStyleSheet("border-image: url(:/e_b);");
    ui->pushButton_5->setStyleSheet("border-image: url(:/e_b);");
    ui->pushButton_6->setStyleSheet("border-image: url(:/e_b);");
    ui->pushButton_7->setStyleSheet("border-image: url(:/e_b);");
    ui->pushButton_8->setStyleSheet("border-image: url(:/e_b);");
    ui->pushButton_9->setStyleSheet("border-image: url(:/e_b);");
    ui->pushButton_10->setStyleSheet("border-image: url(:/e_b);");
    ui->pushButton_11->setStyleSheet("border-image: url(:/e_b);");
    ui->pushButton_12->setStyleSheet("border-image: url(:/e_b);");
    ui->pushButton_13->setStyleSheet("border-image: url(:/e_b);");
    ui->pushButton_14->setStyleSheet("border-image: url(:/e_b);");
    ui->pushButton_15->setStyleSheet("border-image: url(:/e_b);");
    ui->pushButton_16->setStyleSheet("border-image: url(:/e_b);");
    ui->pushButton_17->setStyleSheet("border-image: url(:/e_b);");
    timer->stop();
}

