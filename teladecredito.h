#ifndef TELADECREDITO_H
#define TELADECREDITO_H

#include <QDialog>

namespace Ui {
class TeladeCredito;
}

class TeladeCredito : public QDialog
{
    Q_OBJECT

public:
    explicit TeladeCredito(QWidget *parent = nullptr);
    ~TeladeCredito();

private:
    Ui::TeladeCredito *ui;
};

#endif // TELADECREDITO_H
