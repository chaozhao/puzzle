#include "tile.h"

Tile::Tile()
{
    setPos(0,0);
}

Tile::Tile(const Tile &)
{

}

void Tile::advance(int phase)
{
    if(!phase) return;
    QPointF loc = this->pos();
    setPos(mapToParent(0,-8));
}

QRectF Tile::boundingRect()const
{
    return  QRect(0,0,100,100);
}

void Tile::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QRectF rec = boundingRect();
}

void Tile::setNumber(unsigned number)
{
    this->number = number;
}

unsigned Tile::getNumber()
{
    return number;
}

Tile &Tile::operator =(const Tile &that)
{

    if (this != &that) // protect against invalid self-assignment
    {

    }
    // by convention, always return *this
    return *this;

}

