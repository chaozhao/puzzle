#include "board.h"
#include <QDebug>
#include <algorithm>
#include <QVector>
#include <iostream>

Board::Board(unsigned rows,unsigned cols)
{
     ROWS = rows;
     COLS = cols;
    //memory allocated for elements of rows.

    tiles = new Tile *[ROWS] ;

    //memory allocated for  elements of each column.

    for( unsigned i = 0 ; i < ROWS ; i++ )
        tiles[i] = new Tile[COLS];

}

Board::Board(Dimension theDimension)
{

}



Board::Board(const Board *aBoard)
{

}


Board::~Board()
{
    //free the allocated memory
    if(sizeof(tiles)/sizeof(Tile))
    {
    for( unsigned i = 0 ; i < ROWS ; i++ )
    delete [] tiles[i] ;
    delete [] tiles ;
    qDebug()<<"delete";
    }
    else
    {
         qDebug()<<"delete";
    }
}

void Board::setGoalState()
{
    int start=1;
    for(unsigned i = 0;i < ROWS;++i)
    {
          for(unsigned j = 0;j < COLS;++j)
          {
               tiles[i][j].setNumber(start);
               start++;
          }
    }
}
/**
  * Set start state of board
  * random number
  */
void Board::setInitState()
{
    //assume it is 3X3 puzzle
    QVector <unsigned> array(9);
    for(int i =0; i<array.size();i++)
    {
        array[i] = i;
    }
    std::random_shuffle(array.begin(),array.end());
    unsigned randCounter = 0;
    for(unsigned i = 0;i < ROWS;++i)
    {
          for(unsigned j = 0;j < COLS;++j)
          {
              tiles[i][j].setNumber(array[randCounter]);
              randCounter++;
          }
    }
}

Board Board::move(unsigned moveDirection)
{
    Board returnBoard;
    switch (moveDirection)
    {
      case 0:
        moveUp();
        break;
      case 1:
        moveRight();
        break;
      case 2:
        moveDown();
        break;
      case 3:
        moveLeft();
        break;
      default:
        qDebug()<<"Invalid input";
    }
    return returnBoard;
}
//return true if this action is successful
Board Board::moveUp()
{
    return new Board();
}

Board Board::moveDown()
{
    Board aBoard(this);
    unsigned emptyRow,emptyCol;
    bool success = false;
    //unsigned totalMisplaced = getNumberofMisplacedTitle();
    Dimension dim = getEmptyTileLocation();
    emptyRow = dim.getRow();
    emptyCol = dim.getCol();
    if(emptyRow < ROWS -1)
    {
        success = true;

        Tile tempTile;
        Tile emptyTile = tiles[emptyRow][emptyCol];
        Tile downTile = tiles[emptyRow+1][emptyCol];

        tempTile = emptyTile;
        emptyTile = downTile;
        downTile = tempTile;

    }
    return aBoard;
}

Board Board::moveLeft()
{
    return new Board;
}

Board Board::moveRight()
{
    return new Board();
}

Dimension Board::getDimension()
{
    int row = sizeof(*tiles)/(sizeof (Tile *));
    int col = sizeof (**tiles)/(sizeof (Tile *));
    Dimension returnDimension(row,col);
    return returnDimension;
}


Dimension Board::getEmptyTileLocation()
{
    unsigned row;
    unsigned col;
    for(unsigned i = 0;i < ROWS;++i)
    {
          for(unsigned j = 0;j < COLS;++j)
          {
                if (0==tiles[i][j].getNumber())
                {
                    row = i;
                    col = j;
                    break;
                }
          }
    }
    return Dimension(row,col);
}





