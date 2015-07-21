#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "validated.h"
#include <QStackedWidget>
#include <QPushButton>
#include "ui_home.h"
#include <QHBoxLayout>
#include "home.h"

MainWindow::MainWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainWindow)
{
//    ui->setupUi(this);
    Validated *validated = new Validated();
    Home *home = new Home();
    stackedWidget = new QStackedWidget;
    stackedWidget->addWidget(home);
    stackedWidget->addWidget(validated);
    stackedWidget->setCurrentIndex(0);

    connect(home->ui->pushButton, SIGNAL(clicked()), this, SLOT(on_pushButton_clicked()));
//    home->ui->pushButton->setEnabled(true);
//    home->ui()->pushButton->setEnabled(true);

    QHBoxLayout *layout = new QHBoxLayout;
    layout->addWidget(stackedWidget);
    setLayout(layout);
    setWindowTitle(tr("FPGA Simulation Environment"));
}

void MainWindow::on_pushButton_clicked() {
    stackedWidget->setCurrentIndex(1);
}

MainWindow::~MainWindow()
{
    delete ui;
}
