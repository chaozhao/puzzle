#include "puzzlewindow.h"
#include "ui_mainwindow.h"
#include <QtDebug>

PuzzleWindow::PuzzleWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::PuzzleWindow)
{
    ui->setupUi(this);
    QBrush red(Qt::red);
    QPen black(Qt::black);
    black.setWidth(10);
    scene = new QGraphicsScene(this);
    scene->setSceneRect(0,0,100,100);
    ui->graphicsView->setScene(scene);

   /*timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),scene,SLOT(advance()));
    timer->start(100);
*/
    rec = scene->addRect(0,0,100,100,black,red);

    Board *aBoard = new Board();
    aBoard->setInitState();
    delete aBoard;
}

PuzzleWindow::~PuzzleWindow()
{
    delete ui;
}

unsigned PuzzleWindow::getNumberofMisplacedTile(Board testBoard, Board goalBoard)
{
    Dimension theDimension;
    theDimension = testBoard.getDimension();
    unsigned ROWS = theDimension.getRow();
    unsigned COLS = theDimension.getCol();

    unsigned start = 1;
    unsigned counter =0;
    for(unsigned i = 0;i < ROWS;++i)
    {
          for(unsigned j = 0;j < COLS;++j)
          {
              //if(start != testBoard[i][j].getNumber())
              {
                  counter++;
              }
              start++;
          }
    }
    return counter;
}

void PuzzleWindow::on_pushButton_clicked()
{
   rec->setPos(50,50);
}

void PuzzleWindow::on_pushButton_2_clicked()
{
    rec->setPos(30,30);
}

void PuzzleWindow::on_pushButton_3_clicked()
{

}
