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
    validated = new Validated();
    home = new Home();
    configure = new Configure();
    testselection = new TestSelection();

    stackedWidget = new QStackedWidget;
    stackedWidget->addWidget(home);
    stackedWidget->addWidget(validated);
    stackedWidget->addWidget(configure);
    stackedWidget->addWidget(testselection);
    stackedWidget->setCurrentIndex(0);

    connect(home->ui->validateButton, SIGNAL(clicked()), this, SLOT(on_validateButton_clicked()));
    connect(validated->ui->configureButton, SIGNAL(clicked()), this, SLOT(on_configureButton_clicked()));
    connect(validated->ui->testSelectionButton, SIGNAL(clicked()), this, SLOT(on_testSelectionButton_clicked()));
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
        stackedWidget->setCurrentIndex(1);
        populateConfigDetails(proj_path);
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

void MainWindow::on_testSelectionButton_clicked() {







}

void MainWindow::populateConfigDetails(QString proj_path) {
    //Running the Simulation Environment first
//    QProcess *scrape_config = new QProcess(this);
//    QString exec = "pwd";
//    QStringList params;
//    params << "";
//    scrape_config->start(exec, params);
//    scrape_config->waitForFinished(); // sets current thread to sleep and waits for is_valid to end
//    QString output(scrape_config->readAllStandardOutput());

//    QDir application_dir = QDir( QDir::currentPath());
//    QString path = QString(QDir::currentPath());
//    QStringList list = path.split("/");
//    QStringList params;
//    QProcess *change_dir = new QProcess(this);
//    while (list[list.length() - 1] != "Prysm_Automation_Framework") {
//            QString exec = "cd";
//            params << "..";
//            change_dir->start(exec, params);
//            change_dir->waitForFinished();

//            exec = "pwd";
//            QStringList params;
//            params << "";
//            change_dir->start(exec, params);
//            change_dir->waitForFinished();
//            QString path(change_dir->readAllStandardOutput());
//            list = path.split("/");
//            qDebug() << "output:    " << path;
//    }

    QString sim_env_path = proj_path + "/simEnvConfig.yaml";
    QString test_run_path = proj_path + "/testRunConfig.yaml";

    //Running the Simulation Environment first
    QProcess *scrape_config = new QProcess(this);
    QString exec = "python";
    QStringList params;
    params << "/Users/adwaydhillon/Documents/Development/Prysm_Automation_Framework/scripts/scrape_config.py" << sim_env_path;
    scrape_config->start(exec, params);
    scrape_config->waitForFinished(); // sets current thread to sleep and waits for is_valid to end
    QString output(scrape_config->readAllStandardOutput());


    QRegExp rx("(\\: |\\n)"); //RegEx for ': '
    QStringList query = output.split(rx, QString::SkipEmptyParts);
    foreach (QString s, query) {
        qDebug() << " indy: " << s;
    }
    configure->ui->simPathLineEdit->setText(query[1]);
    configure->ui->perlPathLineEdit->setText(query[3]);
    configure->ui->pythonPathLineEdit->setText("");
    configure->ui->lM_LICENSE_FILELineEdit->setText("");
    configure->ui->lD_PRELOADLineEdit->setText("");
    configure->ui->unisims_verLineEdit->setText("");
    configure->ui->secureipLineEdit->setText("");
    configure->ui->simprims_verLineEdit->setText("");
    configure->ui->xilinxcorelib_verLineEdit->setText("");
    configure->ui->glblPathLineEdit->setText("");
    configure->ui->runDirPathLineEdit->setText("");
    configure->ui->logDirPathLineEdit->setText("");

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
