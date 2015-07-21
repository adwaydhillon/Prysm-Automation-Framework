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

//NEED TO LOOK INTO THIS
void Validated::on_pushButton_2_clicked()
{
    QProcess *run = new QProcess(this);
    run->setProcessChannelMode(QProcess::ForwardedChannels);
    run->start("python", QStringList() << "/Users/adwaydhillon/Documents/Development/Prysm_Automation_Framework/scripts/reportGen.py"
                    << proj_path);
    QByteArray output = run->readAllStandardOutput();
}
