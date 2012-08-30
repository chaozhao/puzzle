#ifndef SEARCH_H
#define SEARCH_H

#include <QStack>
#include "board.h"

class Search
{
public:
    Search();
    void push(Board aBoard);
    Board pop();
    Board top();
    bool isEmpty();
    unsigned getRandDirection();
    void solve();
    bool isGoal(Board aBoard);
    unsigned getNumberofMisplacedTile(Board,Board);

private:
    QStack<Board> *fringe;

};

#endif // SEARCH_H
