#include "dialog1.h"
#include "ui_dialog1.h"
#include <QGraphicsView>
#include <QImage>
#include <QGraphicsView>
#include <QSound>
#include <QLabel>
#include <QTextStream>

Dialog1::Dialog1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog1)
{
    ui->setupUi(this);
    setStyleSheet("background-image:url(:bk2.jpg)");
}

Dialog1::~Dialog1()
{
    delete ui;
}

void Dialog1::on_pushButton_2_clicked()
{
    QSound::play(":/click4.wav");
    QGraphicsScene *scene =  new QGraphicsScene;
    QPixmap pixmap(":/gr.jpg");
    scene->addPixmap(pixmap);
    scene->setSceneRect(pixmap.rect());
    ui->graphicsView->setScene(scene);



    QFile myFile(":/file.txt");
        myFile.open(QIODevice::ReadOnly);
        QTextStream textStream(&myFile);
        QString line = textStream.readAll();
        myFile.close();
        ui->textEdit->setPlainText(line);



}

void Dialog1::on_pushButton_3_clicked()
{
    QSound::play(":/click4.wav");
    QString fileName= QFileDialog::getSaveFileName(this, "Save image", QCoreApplication::applicationDirPath(), "BMP Files (*.bmp);;JPEG (*.JPEG);;PNG (*.png)" );
        if (!fileName.isNull())
        {
            QPixmap pixMap = this->ui->graphicsView->grab();
            pixMap.save(fileName);
        }
}

void Dialog1::on_pushButton_4_clicked()
{
    QSound::play(":/click4.wav");
    QGraphicsScene *scene =  new QGraphicsScene;
    QPixmap pixmap(":/gr9.jpg");
    scene->addPixmap(pixmap);
    scene->setSceneRect(pixmap.rect());
    ui->graphicsView->setScene(scene);



    QFile myFile(":/file1.txt");
        myFile.open(QIODevice::ReadOnly);
        QTextStream textStream(&myFile);
        QString line = textStream.readAll();
        myFile.close();
        ui->textEdit->setPlainText(line);

}

void Dialog1::on_pushButton_5_clicked()
{
    QSound::play(":/click4.wav");
    QGraphicsScene *scene =  new QGraphicsScene;
    QPixmap pixmap(":/gr2.jpg");
    scene->addPixmap(pixmap);
    scene->setSceneRect(pixmap.rect());
    ui->graphicsView->setScene(scene);


    QFile myFile(":/file2.txt");
        myFile.open(QIODevice::ReadOnly);
        QTextStream textStream(&myFile);
        QString line = textStream.readAll();
        myFile.close();
        ui->textEdit->setPlainText(line);


}

void Dialog1::on_pushButton_6_clicked()
{
    QSound::play(":/click4.wav");
    QGraphicsScene *scene =  new QGraphicsScene;
    QPixmap pixmap(":/gr3.jpg");
    scene->addPixmap(pixmap);
    scene->setSceneRect(pixmap.rect());
    ui->graphicsView->setScene(scene);


    QFile myFile(":/file3.txt");
        myFile.open(QIODevice::ReadOnly);
        QTextStream textStream(&myFile);
        QString line = textStream.readAll();
        myFile.close();
        ui->textEdit->setPlainText(line);



}

void Dialog1::on_pushButton_clicked()
{
    QSound::play(":/click6.wav");
}

void Dialog1::on_pushButton_7_clicked()
{
    QSound::play(":/click4.wav");
    QGraphicsScene *scene =  new QGraphicsScene;
    QPixmap pixmap(":/gr8.jpg");
    scene->addPixmap(pixmap);
    scene->setSceneRect(pixmap.rect());
    ui->graphicsView->setScene(scene);


    QFile myFile(":/file4.txt");
        myFile.open(QIODevice::ReadOnly);
        QTextStream textStream(&myFile);
        QString line = textStream.readAll();
        myFile.close();
        ui->textEdit->setPlainText(line);

}
