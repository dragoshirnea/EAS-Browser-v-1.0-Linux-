#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog.h"

#include <QSound>

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

void MainWindow::on_pushButton_clicked()
{
    QSound::play(":/click3.wav");
    Dialog dialog;
    dialog.setModal(true);
    dialog.exec();
   ;
}



void MainWindow::on_pushButton_3_clicked()
{
    QSound::play(":/click6.wav");
}
