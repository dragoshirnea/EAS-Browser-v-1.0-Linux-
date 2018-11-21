#include "dialog5.h"
#include "ui_dialog5.h"
#include <QLabel>

Dialog5::Dialog5(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog5)
{
    ui->setupUi(this);
    setStyleSheet("background-image:url(:bk2.jpg)");
}

Dialog5::~Dialog5()
{
    delete ui;

}
