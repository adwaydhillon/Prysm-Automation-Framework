#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "validated.h"
#include "ui_validated.h"
#include <QStackedWidget>
#include <QPushButton>
#include "ui_home.h"
#include <QHBoxLayout>
#include "home.h"
#include "configure.h"
#include "ui_configure.h"
#include <QFileDialog>
#include <QDir>
#include <string>
#include <QDebug>
#include <QProcess>

MainWindow::MainWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainWindow)
{
//    ui->setupUi(this);
    Validated *validated = new Validated();
    Home *home = new Home();
    Configure *configure = new Configure();

    stackedWidget = new QStackedWidget;
    stackedWidget->addWidget(home);
    stackedWidget->addWidget(validated);
    stackedWidget->addWidget(configure);
    stackedWidget->setCurrentIndex(0);

    configure->ui->simPathLineEdit_2->setText("ahsvds");

    connect(home->ui->validateButton, SIGNAL(clicked()), this, SLOT(on_validateButton_clicked()));
    connect(validated->ui->configureButton, SIGNAL(clicked()), this, SLOT(on_configureButton_clicked()));
//    connect(validated->ui->testSelectionButton, SIGNAL(clicked()), this, SLOT(on_testSelectionButton_clicked()));
//    connect(validated->ui->viewReportsButton, SIGNAL(clicked()), this, SLOT(on_viewReportsButton_clicked()));
    connect(validated->ui->runButton, SIGNAL(clicked()), this, SLOT(on_runButton_clicked()));


    QHBoxLayout *layout = new QHBoxLayout;
    layout->addWidget(stackedWidget);
    setLayout(layout);
    setWindowTitle(tr("FPGA Simulation Environment"));
}

void MainWindow::on_validateButton_clicked() {

    QString proj_path = QFileDialog::getExistingDirectory(
                                                    this,
                                                    tr("Open Directory"),
                                                    QDir::homePath(),
                                                    QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks
                                                    );

    if (validate_proj(proj_path)) {
        qDebug() << "File Path:" << proj_path;
        stackedWidget->setCurrentIndex(1);
    }
}

bool MainWindow::validate_proj(QString proj_path) {
    QProcess *is_valid = new QProcess(this);
    QString exec = "python";
    QStringList params;
    params << "/Users/adwaydhillon/Documents/Development/Prysm_Automation_Framework/scripts/validate_proj.py" << proj_path;
    is_valid->start(exec, params);
    is_valid->waitForFinished(); // sets current thread to sleep and waits for is_valid to end
    QString output(is_valid->readAllStandardOutput());

    output = output.simplified();
    output.replace( " ", "" );

    if (output == "validated") {
        return true;
    }
    return false;
}

void MainWindow::on_configureButton_clicked() {
        stackedWidget->setCurrentIndex(2);
//        TODO
}

void MainWindow::on_runButton_clicked() {
//        TODO
}



MainWindow::~MainWindow()
{
    delete ui;
}
