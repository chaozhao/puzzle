#include <QtGui/QApplication>
#include "puzzlewindow.h"
#include <QPixmap>
#include <QGraphicsScene>
#include <QGraphicsView>
#include "board.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PuzzleWindow w;
    w.show();


    return a.exec();
}
