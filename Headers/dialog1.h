#ifndef DIALOG1_H
#define DIALOG1_H
#include <QGraphicsScene>
#include <QFileDialog>
#include <QGraphicsView>

#include <QDialog>

namespace Ui {
class Dialog1;
}

class Dialog1 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog1(QWidget *parent = 0);
    ~Dialog1();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_clicked();

    void on_pushButton_7_clicked();

private:
    Ui::Dialog1 *ui;
    QPixmap image;
    QImage *imageObject;
    QGraphicsScene *scene;

    };

#endif // DIALOG1_H
