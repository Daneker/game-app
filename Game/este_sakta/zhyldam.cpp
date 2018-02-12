#include "zhyldam.h"
#include "ui_zhyldam.h"
#include "mainwindow.h"
#include "dialog_zh1.h"
#include <QTime>
#include <QTimer>

zhyldam::zhyldam(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::zhyldam)
{
    qsrand(QTime::currentTime().msec());
    ui->setupUi(this);
    count = 0;
    ui->label_2->setText("0");
    f = (rand() % 7)+1;
    ui->label_3->setStyleSheet(QString("border-image: url(:/z1%1);").arg(f));
    ui->pushButton_ia->setVisible(false);
    ui->pushButton_jok->setVisible(false);
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(showButton()));
    timer->start(2000);
    qApp->processEvents();
}

void zhyldam::showButton(){
    ui->pushButton_ia->setVisible(true);
    ui->pushButton_jok->setVisible(true);
    setImg();
    timer->stop();
}

zhyldam::~zhyldam()
{
    delete ui;
}

void zhyldam::on_pushButton_clicked()
{
    MainWindow *m = new MainWindow;
    m->show();
}

void zhyldam::setImg(){
    s = (rand() % 7)+1;
    ui->label_3->setStyleSheet(QString("border-image: url(:/z1%1);").arg(s));
}

void zhyldam::on_pushButton_ia_clicked()
{
    if(f==s)
        count++;
    ui->label_2->setText(QString("%1").arg(count));
    if(count==10){
        Dialog_zh1 *d = new Dialog_zh1;
        d->show();
    }
    f=s;
    setImg();

}

void zhyldam::on_pushButton_jok_clicked()
{
    if(f!=s)
        count++;
    ui->label_2->setText(QString("%1").arg(count));
    if(count==10){
        Dialog_zh1 *d = new Dialog_zh1;
        d->show();
    }
    f=s;
    setImg();
}
