#ifndef BOARD_H
#define BOARD_H
#include "tile.h"
#include "dimension.h"

class Board
{
public:
    Board(unsigned rows = 3,unsigned cols = 3);
    Board(Dimension theDimension);
    // Board();
    Board(const Board *aBoard);
    ~Board();
    void setGoalState();//TODO from file
    void setInitState();//TODO from file
    Board move(unsigned moveDirection);
    Board moveUp();
    Board moveDown();
    Board moveLeft();
    Board moveRight();
    Dimension getDimension();

private:
    Dimension getEmptyTileLocation();
    void swapTile(Tile &tile1,Tile &tile2);
private:
    Tile **tiles;
    unsigned ROWS;
    unsigned COLS;
};

#endif // BOARD_H
