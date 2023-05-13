#include "janelaprincipal.h"
#include "teladojogo.h"

#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsView>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    JanelaPrincipal w;

    //scene->setSceneRect(-250,-300,500,600);
    //QGraphicsRectItem *personagem = new QGraphicsRectItem();
    //personagem->setRect(0,0,100,100);
    //w.addItem(personagem);
    w.show();
    return a.exec();



}
