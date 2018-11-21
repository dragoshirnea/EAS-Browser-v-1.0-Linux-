#include "dialog.h"
#include "ui_dialog.h"
#include "dialog1.h"
#include "dialog2.h"
#include "dialog4.h"
#include "dialog5.h"
#include "dialog6.h"
#include "dialog7.h"
#include "dialog8.h"
#include <QSound>


Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);


}



Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{QSound::play(":/click4.wav");
    Dialog8 dialog8;
    dialog8.setModal(true);
    dialog8.exec();

}

void Dialog::on_pushButton_2_clicked()
{QSound::play(":/click4.wav");
    Dialog1 dialog1;
    dialog1.setModal(true);
    dialog1.exec();

}

void Dialog::on_pushButton_3_clicked()
{QSound::play(":/click4.wav");
    Dialog7 dialog7;
    dialog7.setModal(true);
    dialog7.exec();

}

void Dialog::on_pushButton_4_clicked()
{QSound::play(":/click4.wav");
    Dialog4 dialog4;
    dialog4.setModal(true);
    dialog4.exec();

}

void Dialog::on_pushButton_6_clicked()
{QSound::play(":/click4.wav");
    Dialog5 dialog5;
    dialog5.setModal(true);
    dialog5.exec();

}

void Dialog::on_pushButton_7_clicked()
{QSound::play(":/click4.wav");
    Dialog6 dialog6;
    dialog6.setModal(true);
    dialog6.exec();

}

void Dialog::on_pushButton_8_clicked()
{
    QSound::play(":/click4.wav");
    Dialog2 dialog2;
    dialog2.setModal(true);
    dialog2.exec();
}

void Dialog::on_pushButton_5_clicked()
{
    QSound::play(":/click6.wav");
}
