#include "sev.h"
#include "ui_sev.h"

sev::sev(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::sev)
{
    ui->setupUi(this);
}

sev::~sev()
{
    delete ui;
}
