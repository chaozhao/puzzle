#ifndef PUZZLEWINDOW_H
#define PUZZLEWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QtGui>
#include <QtCore>
#include "board.h"

namespace Ui {
class PuzzleWindow;
}

class PuzzleWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit PuzzleWindow(QWidget *parent = 0);
    ~PuzzleWindow();
    unsigned getNumberofMisplacedTile(Board testBoard,Board goalBoard);
    void drawPuzzle();
private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();

private:
    Ui::PuzzleWindow *ui;
    QGraphicsScene *scene;
    QGraphicsRectItem *rec;
};

#endif // PUZZLEWINDOW_H
