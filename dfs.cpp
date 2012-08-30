#include "dfs.h"

DFS::DFS()
{

}
void DFS::push(Board aBoard)
{
    fringe->push(aBoard);
}

Board DFS::pop()
{
    return fringe->pop();
}

Board DFS::top()
{
    return fringe->top();
}



