#ifndef BUILDREDTOWERICON
#define BUILDREDTOWERICON

#include <QGraphicsPixmapItem>
#include <QGraphicsSceneMouseEvent>

class BuildRedTowerIcon: public QGraphicsPixmapItem{
public:
    BuildRedTowerIcon(QGraphicsItem *parent=0);
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
};

#endif // BUILDREDTOWERICON

