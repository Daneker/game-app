#include "zhyldam2.h"
#include "ui_zhyldam2.h"

#include "mainwindow.h"
#include "dialog_zh2.h"
#include <QTime>
#include <QTimer>

zhyldam2::zhyldam2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::zhyldam2)
{
    ui->setupUi(this);
    count = 0;
    ui->label_2->setText("0");
    f = (rand() % 7)+1;
    ui->label_3->setStyleSheet(QString("border-image: url(:/z2%1);").arg(f));
    ui->pushButton_ia->setVisible(false);
    ui->pushButton_jok->setVisible(false);
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(showButton()));
    timer->start(2000);
    qApp->processEvents();


}

void zhyldam2::showButton(){
    ui->pushButton_ia->setVisible(true);
    ui->pushButton_jok->setVisible(true);
    setImg();
    timer->stop();
}


zhyldam2::~zhyldam2()
{
    delete ui;
}

void zhyldam2::on_pushButton_clicked()
{
    MainWindow *m = new MainWindow;
    m->show();
}

void zhyldam2::setImg(){
    s = (rand() % 7)+1;
    ui->label_3->setStyleSheet(QString("border-image: url(:/z2%1);").arg(s));
}

void zhyldam2::on_pushButton_ia_clicked()
{
    if(f==s)
        count++;
    ui->label_2->setText(QString("%1").arg(count));
    if(count==15){
        Dialog_zh2 *d = new Dialog_zh2;
        d->show();
    }
    f=s;
    setImg();

}

void zhyldam2::on_pushButton_jok_clicked()
{
    if(f!=s)
        count++;
    ui->label_2->setText(QString("%1").arg(count));
    if(count==15){
        Dialog_zh2 *d = new Dialog_zh2;
        d->show();
    }
    f=s;
    setImg();
}
