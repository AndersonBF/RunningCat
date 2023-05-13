#include "meujogador.h"
#include <QKeyEvent>
#include <QDebug>

MeuJogador::MeuJogador() {
    //setRect(0,0,100,100);

  setFlag(ItemIsFocusable);
  setPixmap(QPixmap(":/imagens/spritegato.png"));
}




void MeuJogador::keyPressEvent(QKeyEvent *event)
{
    if(event->key() == Qt::Key_Left) {
        setPos(x()-10,y());
    }
    else if(event->key() == Qt::Key_Right) {
        setPos(x()+10,y());
    }
    else if(event->key() == Qt::Key_Up) {
        setPos(x(),y()-10);
    }
    else if(event->key() == Qt::Key_Down) {
        setPos(x(),y()+10);
    }

}
