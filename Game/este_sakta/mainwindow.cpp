#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog_sh.h"
#include "dialog_zh.h"
#include "dialog_es.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_3_clicked()
{
    Dialog_sh *s = new Dialog_sh;
    s->show();
}

void MainWindow::on_pushButton_2_clicked()
{
    Dialog_zh *z = new Dialog_zh;
    z->show();
}


void MainWindow::on_pushButton_clicked()
{
    Dialog_es *e = new Dialog_es;
    e->show();
}
