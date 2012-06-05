#include "tile.h"

Tile::Tile()
{
    setPos(0,0);
}

void Tile::advance(int phase)
{
    if(!phase) return;
    QPointF loc = this->pos();

    setPos(mapToParent(0,-9));
}


QRectF Tile::boundingRect()const
{
    return  QRect(0,0,100,100);
}

void Tile::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QRectF rec = boundingRect();

}

