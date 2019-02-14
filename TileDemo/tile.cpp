#include "tile.h"
#include <QImage>
#include <QPainter>

const int LETTER_SHIFT_VERTICAL = -45;
const int LETTER_SHIFT_HORIZONTAL = 35;
const int VALUE_SHIFT_VERTICAL = -25;
const int VALUE_SHIFT_HORIZONTAL = -40;
const int LETTER_FONT_SIZE = 58;
const int VALUE_FONT_SIZE = 14;
const QString WOOD_IMAGE = QStringLiteral(":/images/wood_128.png");
const QString BRICK_IMAGE = QStringLiteral(":/images/brick_128.png");
const QColor WOOD_TEXT_COLOR("black");
const QColor BRICK_TEXT_COLOR("white");

const QFont LETTER_FONT ("Lucida Sans Typewriter", LETTER_FONT_SIZE,QFont::Black);
const QFont VALUE_FONT ("Arial", VALUE_FONT_SIZE);

const int DEFAULT_TILE_IMAGE_SIZE = 128;


Tile::Tile(QQuickItem *parent) : QQuickPaintedItem (parent)
{
    setWidth(DEFAULT_TILE_IMAGE_SIZE);
    setHeight(DEFAULT_TILE_IMAGE_SIZE);
    material(TileType::Brick);
    letter("Q");
    pointValue(50);
}

void Tile::DrawTileLetter(QPainter* painter, QRect target)
{
    painter->setFont(LETTER_FONT);
    auto ltr_pos = target.bottomLeft();
    ltr_pos.rx() += LETTER_SHIFT_HORIZONTAL;
    ltr_pos.ry() += LETTER_SHIFT_VERTICAL;
    painter->drawText(ltr_pos, letter());
}

void Tile::DrawTileValue(QPainter *painter, QRect target)
{
    painter->setFont(VALUE_FONT);
    auto value_pos = target.bottomRight();
    value_pos.rx() += VALUE_SHIFT_HORIZONTAL;
    value_pos.ry() += VALUE_SHIFT_VERTICAL;
    painter->drawText(value_pos, QString::number(pointValue()));
}

void Tile::setPenColor(QPainter *painter)
{
    if(color().isValid()){
        painter->setPen(color());
        return;
    }
    if(material() == TileType::Wood){
        painter->setPen(WOOD_TEXT_COLOR);
    }
    if(material() == TileType::Brick){
        painter->setPen(BRICK_TEXT_COLOR);
    }
}

void Tile::DrawTileText(QRect target, QPainter *painter)
{
    if(letter().size() == 0) return;
    setPenColor(painter);
    DrawTileLetter(painter, target);
    DrawTileValue(painter, target);
}

void Tile::paint(QPainter *painter)
{
    QString image_path = WOOD_IMAGE;
    if(material() == TileType::Brick){
        image_path = BRICK_IMAGE;
    }
    QImage my_image(image_path);
    QRect target(my_image.rect());
    painter->drawImage(target, my_image);
    DrawTileText(target, painter);
}

