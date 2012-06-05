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
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
protected:
    void advance(int phase);
};
#endif // TILE_H
