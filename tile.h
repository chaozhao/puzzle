#ifndef TILE_H
#define TILE_H

#include <QGraphicsItem>
#include <QGraphicsPixmapItem>
#include <QGraphicsScale>
#include <QPainter>
#include <QPixmap>

class Tile: public QGraphicsPixmapItem
{
public:
    Tile();
    Tile(const Tile&);
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    void setNumber(unsigned number);
    unsigned getNumber();
    Tile& operator =(const Tile&);
    bool operator !=(const Tile &that) const;

protected:
    void advance(int phase);
private:
    unsigned number;
};
#endif // TILE_H
