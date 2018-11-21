#include "dialog2.h"
#include "ui_dialog2.h"
#include <QVideoWidget>
#include <QtMultimedia>
#include <QMediaPlayer>
#include <QWidget>
#include <QLabel>
#include <QGraphicsScene>
#include <QUrl>

Dialog2::Dialog2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog2)
{
    ui->setupUi(this);
    setStyleSheet("background-image:url(:bk2.jpg)");

}

Dialog2::~Dialog2()
{

}

void Dialog2::on_pushButton_2_clicked()
{
    QSound::play(":/click4.wav");
    QGraphicsScene *scene = new QGraphicsScene(&view);
    view.setScene(scene);
    QLabel *gif_anim = new QLabel();
    QMovie *movie = new QMovie(":/test.gif");
    gif_anim->setMovie(movie);
    movie->start();
    QGraphicsProxyWidget *proxy = scene->addWidget(gif_anim);
    ui->graphicsView->setScene(scene);
    ui->label_2->setText("The development of an extensive air shower [P.1]");
}


void Dialog2::on_pushButton_3_clicked()
{
    QSound::play(":/click4.wav");
    QDesktopServices::openUrl(QUrl("https://www.youtube.com/watch?v=6rcvWcRMuzs", QUrl::TolerantMode));

}

void Dialog2::on_pushButton_clicked()
{
    QSound::play(":/click6.wav");
}

void Dialog2::on_pushButton_5_clicked()
{
    QSound::play(":/click4.wav");
    QGraphicsScene *scene1 = new QGraphicsScene(&view);
    view.setScene(scene1);
    QLabel *gif_anim1 = new QLabel();
    QMovie *movie1 = new QMovie(":/url.gif");
    gif_anim1->setMovie(movie1);
    movie1->start();
    QGraphicsProxyWidget *proxy = scene1->addWidget(gif_anim1);
    ui->graphicsView->setScene(scene1);
    ui->label_2->setText("A sky map showing a flash radio pulse of an extensive air shower [A.4]");
}

void Dialog2::on_pushButton_6_clicked()
{
    QSound::play(":/click4.wav");
    QDesktopServices::openUrl(QUrl("https://www.youtube.com/watch?v=6rcvWcRMuzs", QUrl::TolerantMode));
}

void Dialog2::on_pushButton_4_clicked()
{
    QSound::play(":/click4.wav");
    QDesktopServices::openUrl(QUrl("https://www.youtube.com/watch?v=91801Y1lsCg", QUrl::TolerantMode));
}

void Dialog2::on_pushButton_8_clicked()
{
    QSound::play(":/click4.wav");
    QDesktopServices::openUrl(QUrl("http://videotheque.cnrs.fr/doc=4681?langue=EN", QUrl::TolerantMode));
}

void Dialog2::on_pushButton_9_clicked()
{
    QSound::play(":/click4.wav");
    QDesktopServices::openUrl(QUrl("https://www.youtube.com/watch?v=SftngoJKkfQ", QUrl::TolerantMode));
}
