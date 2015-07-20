#include "validated.h"
#include "ui_validated.h"

Validated::Validated(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Validated)
{
    ui->setupUi(this);
}

Validated::~Validated()
{
    delete ui;
}

