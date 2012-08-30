#ifndef DFS_H
#define DFS_H
#include <QStack>
#include "board.h"

class DFS
{
public:
    DFS();
    void push(Board aBoard);
    Board pop();
    Board top();
private:
    QStack<Board> *fringe;
};

#endif // DFS_H
