#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "stdio.h"
#include <QApplication>
#include <QDragEnterEvent>
#include <QDropEvent>
#include <QString>
#include <QFileDialog>
#include <QMessageBox>
#include <QMimeData>
#include <QDebug>
#include <QPixmap>
using namespace std;


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
//    QPixmap pix(":/app/res/beach.png");
//    ui->background_label->setPixmap(pix);
    setAcceptDrops(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::dragEnterEvent(QDragEnterEvent *e)
{
    if (e->mimeData()->hasUrls()) {
        e->acceptProposedAction();
    }
}

void MainWindow::dropEvent(QDropEvent *e)
{
    foreach (const QUrl &url, e->mimeData()->urls()) {
        const QString &fileName = url.toLocalFile();
        qDebug() << "Dropped file:" << fileName;
    }
}

bool MainWindow::validate_file(QString file_path) {
    return true;
}

void MainWindow::on_pushButton_clicked()
{
        QString file_path = QFileDialog::getOpenFileName(
                    this,
                    tr("Browse Files"),
                    QDir::homePath(),
                    "CSV Files (*.csv)"
                );

        if (validate_file(file_path)) {
            qDebug() << "File Path:" << file_path;
        }
}
