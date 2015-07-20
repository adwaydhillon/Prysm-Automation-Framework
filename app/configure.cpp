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

void Configure::on_pushButton_13_clicked()
{
    QString sim_path = QFileDialog::getExistingDirectory(
                                                    this,
                                                    tr("Choose Simulator Path"),
                                                    QDir::homePath(),
                                                    QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks
                                                    );
}

void Configure::on_pushButton_12_clicked()
{
    QString perl_path = QFileDialog::getExistingDirectory(
                                                    this,
                                                    tr("Choose Perl Path"),
                                                    QDir::homePath(),
                                                    QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks
                                                    );
}

void Configure::on_pushButton_15_clicked()
{
    QString python_path = QFileDialog::getExistingDirectory(
                                                    this,
                                                    tr("Choose Python Path"),
                                                    QDir::homePath(),
                                                    QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks
                                                    );
}
