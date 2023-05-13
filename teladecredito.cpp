#include "teladecredito.h"
#include "ui_teladecredito.h"

TeladeCredito::TeladeCredito(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TeladeCredito)
{
    ui->setupUi(this);
}

TeladeCredito::~TeladeCredito()
{
    delete ui;
}
