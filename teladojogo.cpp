#include "teladojogo.h"
#include "ui_teladojogo.h"
#include <QGraphicsPixmapItem>
#include <QGraphicsScene>
#include <QTimer>
#include "meujogador.h"

TeladoJogo::TeladoJogo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TeladoJogo)
{
    ui->setupUi(this);
    scene = new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);




    MeuJogador *jogador = new MeuJogador();

    //jogador->setRect(0,0,100,100);
    scene->addItem(jogador);
    jogador->setFocus();


}


TeladoJogo::~TeladoJogo()
{
    delete ui;
}
