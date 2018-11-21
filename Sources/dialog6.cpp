#include "dialog6.h"
#include "ui_dialog6.h"
#include <QSound>

Dialog6::Dialog6(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog6)
{
    ui->setupUi(this);
    setStyleSheet("background-image:url(:bk2.jpg)");
}

Dialog6::~Dialog6()
{
    delete ui;
}

void Dialog6::on_pushButton_clicked()
{
    QSound::play(":/click6.wav");
}
