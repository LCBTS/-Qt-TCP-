#include "clicent.h"
#include "ui_clicent.h"

clicent::clicent(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::clicent)
{
    ui->setupUi(this);
}

clicent::~clicent()
{
    delete ui;
}
