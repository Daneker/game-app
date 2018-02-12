#include "este_sakta.h"
#include "ui_este_sakta.h"
#include "mainwindow.h"
#include "dialog_es1.h"
#include <QTime>
#include <QTimer>

este_sakta::este_sakta(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::este_sakta)
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

este_sakta::~este_sakta()
{
    delete ui;
}

void este_sakta::set(){
    timer->start(1000);
    qApp->processEvents();
    if( count == 5){
        Dialog_es1 *e = new Dialog_es1;
        e->show();
    }
    else{
        push = 0;
        check = 0;
        l1 = (rand() % 9)+1;
        l2 = (rand() % 9)+1;
        while(l2 == l1)
            l2 = (rand() % 9)+1;
        l3 = (rand() % 9)+1;
        while(l3 == l1 || l3==l2)
            l3 = (rand() % 9)+1;
        if(l1 == 1 || l2 == 1 || l3 == 1)
            ui->pushButton_2->setStyleSheet("border-image: url(:/e3);");
        if(l1 == 2 || l2 == 2 || l3 == 2)
            ui->pushButton_3->setStyleSheet("border-image: url(:/e3);");
        if(l1 == 3 || l2 == 3 || l3 == 3)
            ui->pushButton_4->setStyleSheet("border-image: url(:/e3);");
        if(l1 == 4 || l2 == 4 || l3 == 4)
            ui->pushButton_5->setStyleSheet("border-image: url(:/e3);");
        if(l1 == 5 || l2 == 5 || l3 == 5)
            ui->pushButton_6->setStyleSheet("border-image: url(:/e3);");
        if(l1 == 6 || l2 == 6 || l3 == 6)
            ui->pushButton_7->setStyleSheet("border-image: url(:/e3);");
        if(l1 == 7 || l2 == 7 || l3 == 7)
            ui->pushButton_8->setStyleSheet("border-image: url(:/e3);");
        if(l1 == 8 || l2 == 8 || l3 == 8)
            ui->pushButton_9->setStyleSheet("border-image: url(:/e3);");
        if(l1 == 9 || l2 == 9 || l3 == 9)
            ui->pushButton_10->setStyleSheet("border-image: url(:/e3);");
    }
}

void este_sakta::on_pushButton_clicked()
{
    MainWindow *m = new MainWindow;
    m->show();
}

void este_sakta::on_pushButton_2_clicked()
{
    push++;
    if(l1 == 1 || l2 == 1 || l3 == 1){
        check ++;
        ui->pushButton_2->setStyleSheet("border-image: url(:/e3);");
    }
    if(check == 3){
        count++;
        ui->label_2->setText(QString("%1").arg(count));
    }
    if(push == 3){
        hideButton();
        set();
    }
}

void este_sakta::on_pushButton_5_clicked()
{
    push++;
    if(l1 == 4 || l2 == 4 || l3 == 4){
        check ++;
        ui->pushButton_5->setStyleSheet("border-image: url(:/e3);");
    }
    if(check == 3){
        count++;
        ui->label_2->setText(QString("%1").arg(count));
    }
    if(push == 3){
        hideButton();
        set();
    }
}

void este_sakta::on_pushButton_8_clicked()
{
    push++;
    if(l1 == 7 || l2 == 7 || l3 == 7){
        check ++;
        ui->pushButton_8->setStyleSheet("border-image: url(:/e3);");
    }
    if(check == 3){
        count++;
        ui->label_2->setText(QString("%1").arg(count));
    }
    if(push == 3){
        hideButton();
        set();
    }
}

void este_sakta::on_pushButton_3_clicked()
{
    push++;
    if(l1 == 2 || l2 == 2 || l3 == 2){
        check ++;
        ui->pushButton_3->setStyleSheet("border-image: url(:/e3);");
    }
    if(check == 3){
        count++;
        ui->label_2->setText(QString("%1").arg(count));
    }
    if(push == 3){
        hideButton();
        set();
    }
}

void este_sakta::on_pushButton_6_clicked()
{
    push++;
    if(l1 == 5 || l2 == 5 || l3 == 5){
        check ++;
        ui->pushButton_6->setStyleSheet("border-image: url(:/e3);");
    }
    if(check == 3){
        count++;
        ui->label_2->setText(QString("%1").arg(count));
    }
    if(push == 3){
        hideButton();
        set();
    }
}

void este_sakta::on_pushButton_9_clicked()
{
    push++;
    if(l1 == 8 || l2 == 8 || l3 == 8){
        check ++;
        ui->pushButton_9->setStyleSheet("border-image: url(:/e3);");
    }
    if(check == 3){
        count++;
        ui->label_2->setText(QString("%1").arg(count));
    }
    if(push == 3){
        hideButton();
        set();
    }
}

void este_sakta::on_pushButton_4_clicked()
{
    push++;
    if(l1 == 3 || l2 == 3 || l3 == 3){
        check ++;
        ui->pushButton_4->setStyleSheet("border-image: url(:/e3);");
    }
    if(check == 3){
        count++;
        ui->label_2->setText(QString("%1").arg(count));
    }
    if(push == 3){
        hideButton();
        set();
    }
}

void este_sakta::on_pushButton_7_clicked()
{
    push++;
    if(l1 == 6 || l2 == 6 || l3 == 6){
        check ++;
        ui->pushButton_7->setStyleSheet("border-image: url(:/e3);");
    }
    if(check == 3){
        count++;
        ui->label_2->setText(QString("%1").arg(count));
    }
    if(push == 3){
        hideButton();
        set();
    }
}

void este_sakta::on_pushButton_10_clicked()
{
    push++;
    if(l1 == 9 || l2 == 9 || l3 == 9){
        check ++;
        ui->pushButton_10->setStyleSheet("border-image: url(:/e3);");
    }
    if(check == 3){
        count++;
        ui->label_2->setText(QString("%1").arg(count));
    }
    if(push == 3){
        hideButton();
        set();
    }
}

void este_sakta::hideButton(){
    ui->pushButton_2->setStyleSheet("border-image: url(:/e_b);");
    ui->pushButton_3->setStyleSheet("border-image: url(:/e_b);");
    ui->pushButton_4->setStyleSheet("border-image: url(:/e_b);");
    ui->pushButton_5->setStyleSheet("border-image: url(:/e_b);");
    ui->pushButton_6->setStyleSheet("border-image: url(:/e_b);");
    ui->pushButton_7->setStyleSheet("border-image: url(:/e_b);");
    ui->pushButton_8->setStyleSheet("border-image: url(:/e_b);");
    ui->pushButton_9->setStyleSheet("border-image: url(:/e_b);");
    ui->pushButton_10->setStyleSheet("border-image: url(:/e_b);");
    timer->stop();
}
