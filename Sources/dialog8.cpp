#include "dialog8.h"
#include "ui_dialog8.h"
#include <QVideoWidget>
#include <QtMultimedia>
#include <QMediaPlayer>
#include <QWidget>
#include <QLabel>
#include <QGraphicsScene>
#include <QSound>

Dialog8::Dialog8(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog8)
{
    ui->setupUi(this);

    QGraphicsScene *scene = new QGraphicsScene(&view);
    view.setScene(scene);
    QLabel *gif_anim = new QLabel();
    QMovie *movie = new QMovie(":/Pair_Production.gif");
    gif_anim->setMovie(movie);
    movie->start();
    QGraphicsProxyWidget *proxy = scene->addWidget(gif_anim);
    ui->graphicsView->setScene(scene);

    QGraphicsScene *scene2 = new QGraphicsScene(&view);
    view.setScene(scene2);
    QLabel *gif_anim2 = new QLabel();
    QMovie *movie2 = new QMovie(":/Photoelectric_Effect.gif");
    gif_anim2->setMovie(movie2);
    movie2->start();
    QGraphicsProxyWidget *proxy2 = scene2->addWidget(gif_anim2);
    ui->graphicsView_2->setScene(scene2);


    QGraphicsScene *scene3 = new QGraphicsScene(&view);
    view.setScene(scene3);
    QLabel *gif_anim3 = new QLabel();
    QMovie *movie3 = new QMovie(":/Bremsstrahlung.gif");
    gif_anim3->setMovie(movie3);
    movie3->start();
    QGraphicsProxyWidget *proxy3 = scene3->addWidget(gif_anim3);
    ui->graphicsView_3->setScene(scene3);

    QGraphicsScene *scene4 = new QGraphicsScene(&view);
    view.setScene(scene4);
    QLabel *gif_anim4 = new QLabel();
    QMovie *movie4 = new QMovie(":/Compton_Scattering.gif");
    gif_anim4->setMovie(movie4);
    movie4->start();
    QGraphicsProxyWidget *proxy4 = scene4->addWidget(gif_anim4);
    ui->graphicsView_4->setScene(scene4);
}

Dialog8::~Dialog8()
{
    delete ui;
}

void Dialog8::on_pushButton_clicked()
{
    QSound::play(":/click6.wav");
}
