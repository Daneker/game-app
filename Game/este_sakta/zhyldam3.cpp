#include "zhyldam3.h"
#include "ui_zhyldam3.h"
#include "mainwindow.h"
#include "dialog_zh3.h"
#include <QTime>
#include <QTimer>

zhyldam3::zhyldam3(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::zhyldam3)
{
    qsrand(QTime::currentTime().msec());
    ui->setupUi(this);
    count = 0;
    ui->label_2->setText("0");
    f = (rand() % 4)+1;
    ui->label_3->setStyleSheet(QString("border-image: url(:/z3%1);").arg(f));
    ui->pushButton_ia->setVisible(false);
    ui->pushButton_jok->setVisible(false);
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(showButton()));
    timer->start(2000);
    qApp->processEvents();

}

void zhyldam3::showButton(){
    ui->pushButton_ia->setVisible(true);
    ui->pushButton_jok->setVisible(true);
    setImg();
    timer->stop();
}


zhyldam3::~zhyldam3()
{
    delete ui;
}

void zhyldam3::on_pushButton_clicked()
{
    MainWindow *m = new MainWindow;
    m->show();
}

void zhyldam3::setImg(){
    s = (rand() % 4)+1;
    ui->label_3->setStyleSheet(QString("border-image: url(:/z3%1);").arg(s));
}

void zhyldam3::on_pushButton_ia_clicked()
{
    if(f==s)
        count++;
    ui->label_2->setText(QString("%1").arg(count));
    if(count==20){
        Dialog_zh3 *d = new Dialog_zh3;
        d->show();
    }
    f=s;
    setImg();

}

void zhyldam3::on_pushButton_jok_clicked()
{
    if(f!=s)
        count++;
    ui->label_2->setText(QString("%1").arg(count));
    if(count==20){
        Dialog_zh3 *d = new Dialog_zh3;
        d->show();
    }
    f=s;
    setImg();
}

