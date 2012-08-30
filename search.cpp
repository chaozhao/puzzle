#include "search.h"

Search::Search()
{
}

void Search::push(Board aBoard)
{
    fringe->push(aBoard);
}

Board Search::pop()
{
    return fringe->pop();
}

Board Search::top()
{
    return fringe->top();
}

bool Search::isEmpty()
{
    return fringe->isEmpty();
}

unsigned Search::getRandDirection()
{
    return  (unsigned)qrand()%4;
}

void Search::solve()
{


    /*
    Board currentState;
    boolean isMove = false;

    while(!startState.isEqual(endState))
    {
        int move = this.getRandomNumber();
        System.out.println(move);
        isMove = startState.isMoveable(move);
        if(isMove)
        {
            startState.move(move);
            startState.print();
        }
        }
    }
    */
}

unsigned Search::getNumberofMisplacedTile(Board testBoard,Board goalBoard)
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
