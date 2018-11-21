#ifndef DIALOG7_H
#define DIALOG7_H
#include <QGraphicsScene>
#include <QFileDialog>
#include <QGraphicsView>

#include <QDialog>

namespace Ui {
class Dialog7;
}

class Dialog7 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog7(QWidget *parent = 0);
    ~Dialog7();

private slots:
    void on_pushButton_5_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

private:
    Ui::Dialog7 *ui;
    QPixmap image;
    QImage *imageObject;
    QGraphicsScene *scene;
};

#endif // DIALOG7_H
