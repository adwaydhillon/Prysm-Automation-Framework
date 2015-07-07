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
#include <QProcess>
using namespace std;


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
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
        const QString &proj_path = url.toLocalFile();
        validate_proj(proj_path);
        qDebug() << "Dropped file:" << proj_path;
    }
}

bool MainWindow::eventFilter(QObject* o, QEvent* e) {
    if (e->type()==QEvent::DragEnter) {
        qDebug() << "QEvent::DragEnter";
    }

    if (e->type()==QEvent::Drop) {
        qDebug() << "QEvent::Drop";
    }
    return false;
}

bool MainWindow::validate_proj(QString proj_path) {

    return true;
}

void MainWindow::on_pushButton_clicked()
{
        QString proj_path = QFileDialog::getOpenFileName(
                    this,
                    tr("Browse Files"),
                    QDir::homePath(),
                    "CSV Files (*.csv)"
                );

        if (validate_proj(proj_path)) {
            qDebug() << "File Path:" << proj_path;
        }
}
