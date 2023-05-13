#ifndef TELADOJOGO_H
#define TELADOJOGO_H

#include <QDialog>
#include <QtCore>
#include <QtGui>
#include <QGraphicsScene>
#include "meujogador.h"

namespace Ui {
class TeladoJogo;
}

class TeladoJogo : public QDialog
{
    Q_OBJECT

public:
    explicit TeladoJogo(QWidget *parent = 0);

    ~TeladoJogo();

private:

    Ui::TeladoJogo *ui;
    QGraphicsScene *scene;
    MeuJogador *jogador;
protected:

};

#endif // TELADOJOGO_H
