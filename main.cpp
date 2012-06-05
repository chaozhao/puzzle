#include <QtGui/QApplication>
#include "mainwindow.h"
#include <QPixmap>
#include <QGraphicsScene>
#include <QGraphicsView>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

/*
    QGraphicsScene scene;
    QGraphicsView view(&scene);
    QGraphicsPixmapItem item(QPixmap("C:\\Users\\Public\\Pictures\\Sample Pictures\\Koala.jpg"));
    scene.addItem(&item);
    view.show();
*/
    
    return a.exec();
}
