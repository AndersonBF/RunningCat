#include "janelaprincipal.h"
#include "ui_janelaprincipal.h"
#include "teladojogo.h"
#include "teladecredito.h"

JanelaPrincipal::JanelaPrincipal(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::JanelaPrincipal)
{
    ui->setupUi(this);
}

JanelaPrincipal::~JanelaPrincipal()
{
    delete ui;
}


void JanelaPrincipal::on_botaoIniciar_clicked()
{
    this->hide();
    TeladoJogo teladojogo;
    teladojogo.setModal(true);
    teladojogo.exec();

}

void JanelaPrincipal::on_botaoFechar_clicked()
{
    JanelaPrincipal().~JanelaPrincipal();
}


void JanelaPrincipal::on_pushButton_clicked()
{
    this->hide();
    TeladeCredito teladecredito;
    teladecredito.setModal(true);
    teladecredito.exec();
}

