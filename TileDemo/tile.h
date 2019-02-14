#ifndef TILE_H
#define TILE_H

#pragma once
#include <QQuickPaintedItem>
#include "propertyhelper.h"

class Tile : public QQuickPaintedItem
{
    Q_OBJECT
    AUTO_PROPERTY(QString, letter)
    AUTO_PROPERTY(int, pointValue)
    AUTO_PROPERTY(QColor, color)
    Q_ENUMS(TileType)
    public:
        enum class TileType  {Wood, Brick};
    AUTO_PROPERTY(TileType, material)

public:
    explicit Tile(QQuickItem *parent=nullptr);
    void paint(QPainter* painter);

    void DrawTileLetter(QPainter* painter, QRect target);

    void DrawTileValue(QPainter *painter, QRect target);

    void DrawTileText(QRect target, QPainter *painter);

    void setPenColor(QPainter *painter);

private:
    explicit Tile(const Tile& rhs) = delete;
    Tile& operator=(const Tile& rhs) = delete;
};

#endif // TILE_H
