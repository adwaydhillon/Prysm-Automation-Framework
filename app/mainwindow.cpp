#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDragEnterEvent>
#include <QDropEvent>
#include <QString>
#include <QFileDialog>
#include <QMessageBox>
#include <QMimeData>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap bkgnd("/Users/adwaydhillon/Documents/Development/Prysm_Automation_Framework/app");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);
    setAcceptDrops(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::dropEvent(QDropEvent *e)
{
    foreach (const QUrl &url, e->mimeData()->urls()) {
        const QString &fileName = url.toLocalFile();
        qDebug() << "Dropped file:" << fileName;
    }
}

void MainWindow::on_pushButton_clicked()
{
    QString file_path = QFileDialog::getOpenFileName(
                this,
                tr("Browse Files"),
                QDir::homePath(),
                "CSV Files (*.csv)"
            );

    qDebug() << "File Path:" << file_path;
}
