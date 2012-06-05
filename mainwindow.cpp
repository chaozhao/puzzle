#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QBrush red(Qt::red);
    QPen black(Qt::black);
    black.setWidth(10);
    scene = new QGraphicsScene(this);
    scene->setSceneRect(200,200,10,10);
    ui->graphicsView->setScene(scene);

    timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),scene,SLOT(advance()));
    timer->start(100);

    num1 = new QPixmap(".\\image\\test.jpg");
    scene->addPixmap(*num1);
    rec = scene->addRect(10,10,100,100,black,red);

    /*
     num2 = new QPixmap("C:\\Users\\Public\\Pictures\\Sample Pictures\\Koala.jpg");
      num3 = new QPixmap("C:\\Users\\Public\\Pictures\\Sample Pictures\\Koala.jpg");
       num4 = new QPixmap("C:\\Users\\Public\\Pictures\\Sample Pictures\\Koala.jpg");
        num5 = new QPixmap("C:\\Users\\Public\\Pictures\\Sample Pictures\\Koala.jpg");
         num6 = new QPixmap("C:\\Users\\Public\\Pictures\\Sample Pictures\\Koala.jpg");
          num7 = new QPixmap("C:\\Users\\Public\\Pictures\\Sample Pictures\\Koala.jpg");
           num8 = new QPixmap("C:\\Users\\Public\\Pictures\\Sample Pictures\\Koala.jpg");


    scene->addPixmap(*num2);
    scene->addPixmap(*num3);
    scene->addPixmap(*num4);
    scene->addPixmap(*num5);
    scene->addPixmap(*num6);
    scene->addPixmap(*num7);
    scene->addPixmap(*num8);

*/


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
   rec->setPos(50,50);
}

void MainWindow::on_pushButton_2_clicked()
{
    rec->setPos(30,30);
}
