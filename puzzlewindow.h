#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QtGui>
#include <QtCore>
//#include <QTimer>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();



private:
    Ui::MainWindow *ui;
    QGraphicsScene *scene;
    QGraphicsRectItem *rec;
    QPixmap *num1;
    QPixmap *num2;
    QPixmap *num3;
    QPixmap *num4;
    QPixmap *num5;
    QPixmap *num6;
    QPixmap *num7;
    QPixmap *num8;
    QTimer *timer;



};

#endif // MAINWINDOW_H
