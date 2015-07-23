#include "testselection.h"
#include "ui_testselection.h"

TestSelection::TestSelection(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TestSelection)
{
    ui->setupUi(this);
}

TestSelection::~TestSelection()
{
    delete ui;
}
