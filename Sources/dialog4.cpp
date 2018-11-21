#include "dialog4.h"
#include "ui_dialog4.h"
#include <QTextEdit>
#include <QSound>
#include <QObject>


Dialog4::Dialog4(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog4)
{
    ui->setupUi(this);
    setStyleSheet("background-image:url(:bk2.jpg)");
}

Dialog4::~Dialog4()
{
    delete ui;
}


void Dialog4::on_pushButton_clicked()
{
    QSound::play(":/click6.wav");
}
