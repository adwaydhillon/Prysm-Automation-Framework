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
        if (validate_proj(proj_path)) {
            qDebug() << "Dropped file:" << proj_path;
        }
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
    QProcess *is_valid = new QProcess(this);
    is_valid->setProcessChannelMode(QProcess::ForwardedChannels);
    is_valid->start("python", QStringList() << "/Users/adwaydhillon/Documents/Development/Prysm_Automation_Framework/scripts/validate_proj.py"
                    << proj_path);
    QByteArray output = is_valid->readAllStandardOutput();
}

void MainWindow::on_pushButton_clicked()
{
        QString proj_path = QFileDialog::getExistingDirectory(
                                                        this,
                                                        tr("Open Directory"),
                                                        QDir::homePath(),
                                                        QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks
                                                        );

        if (validate_proj(proj_path)) {
            qDebug() << "File Path:" << proj_path;
        }
}
