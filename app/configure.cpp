#include "configure.h"
#include "ui_configure.h"
#include <QFileDialog>
#include <QDir>

Configure::Configure(QWidget *parent) :
    QTabWidget(parent),
    ui(new Ui::Configure)
{
    ui->setupUi(this);
}

Configure::~Configure()
{
    delete ui;
}
