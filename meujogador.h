#ifndef MEUJOGADOR_H
#define MEUJOGADOR_H

#include <QDebug>
#include <QGraphicsItem>
#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsPixmapItem>

 class MeuJogador : public QGraphicsPixmapItem {
public:
     MeuJogador();

     bool Pressed;

protected:
    void keyPressEvent (QKeyEvent *event);
};



#endif // MEUJOGADOR_H
