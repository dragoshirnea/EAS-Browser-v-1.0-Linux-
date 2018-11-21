#include "dialog7.h"
#include "ui_dialog7.h"
#include <QGraphicsView>
#include <QImage>
#include <QGraphicsView>
#include <QSound>
#include <QLabel>
#include <QTextStream>

Dialog7::Dialog7(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog7)
{
    ui->setupUi(this);
}

Dialog7::~Dialog7()
{
    delete ui;
}

void Dialog7::on_pushButton_5_clicked()
{
    QSound::play(":/click4.wav");
    QGraphicsScene *scene =  new QGraphicsScene;
    QPixmap pixmap(":/gr1.jpg");
    scene->addPixmap(pixmap);
    scene->setSceneRect(pixmap.rect());
    ui->graphicsView->setScene(scene);


    QFile myFile(":/file5.txt");
        myFile.open(QIODevice::ReadOnly);
        QTextStream textStream(&myFile);
        QString line = textStream.readAll();
        myFile.close();
        ui->textEdit->setPlainText(line);
}

void Dialog7::on_pushButton_clicked()
{
    QSound::play(":/click4.wav");
    QGraphicsScene *scene =  new QGraphicsScene;
    QPixmap pixmap(":/gr4.jpg");
    scene->addPixmap(pixmap);
    scene->setSceneRect(pixmap.rect());
    ui->graphicsView->setScene(scene);



    QFile myFile(":/file6.txt");
        myFile.open(QIODevice::ReadOnly);
        QTextStream textStream(&myFile);
        QString line = textStream.readAll();
        myFile.close();
        ui->textEdit->setPlainText(line);
}

void Dialog7::on_pushButton_2_clicked()
{
    QSound::play(":/click4.wav");
    QGraphicsScene *scene =  new QGraphicsScene;
    QPixmap pixmap(":/gr5.jpg");
    scene->addPixmap(pixmap);
    scene->setSceneRect(pixmap.rect());
    ui->graphicsView->setScene(scene);



    QFile myFile(":/file7.txt");
        myFile.open(QIODevice::ReadOnly);
        QTextStream textStream(&myFile);
        QString line = textStream.readAll();
        myFile.close();
        ui->textEdit->setPlainText(line);
}

void Dialog7::on_pushButton_3_clicked()
{
    QSound::play(":/click4.wav");
    QGraphicsScene *scene =  new QGraphicsScene;
    QPixmap pixmap(":/gr6.jpg");
    scene->addPixmap(pixmap);
    scene->setSceneRect(pixmap.rect());
    ui->graphicsView->setScene(scene);


    QFile myFile(":/file8.txt");
        myFile.open(QIODevice::ReadOnly);
        QTextStream textStream(&myFile);
        QString line = textStream.readAll();
        myFile.close();
        ui->textEdit->setPlainText(line);
}

void Dialog7::on_pushButton_4_clicked()
{
    QSound::play(":/click4.wav");
    QGraphicsScene *scene =  new QGraphicsScene;
    QPixmap pixmap(":/gr7.jpg");
    scene->addPixmap(pixmap);
    scene->setSceneRect(pixmap.rect());
    ui->graphicsView->setScene(scene);



    QFile myFile(":/file9.txt");
        myFile.open(QIODevice::ReadOnly);
        QTextStream textStream(&myFile);
        QString line = textStream.readAll();
        myFile.close();
        ui->textEdit->setPlainText(line);
}

void Dialog7::on_pushButton_6_clicked()
{
    QSound::play(":/click4.wav");
    QString fileName= QFileDialog::getSaveFileName(this, "Save image", QCoreApplication::applicationDirPath(), "BMP Files (*.bmp);;JPEG (*.JPEG);;PNG (*.png)" );
        if (!fileName.isNull())
        {
            QPixmap pixMap = this->ui->graphicsView->grab();
            pixMap.save(fileName);
        }
}

void Dialog7::on_pushButton_7_clicked()
{
    QSound::play(":/click6.wav");
}
