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
    QPixmap bkgnd("/Users/adwaydhillon/Documents/Development/Prysm_Automation_Framework/app/res/background_1.png");
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

    qDebug()<< QDir::currentPath();

//    std::string command = "python";
//    system ("python hello'.py");

//    // init PythonQt and Python itself
//    PythonQt::init();

//    // get a smart pointer to the __main__ module of the Python interpreter
//    PythonQtObjectPtr context = PythonQt::self()->getMainModule();

//    // add the file path as a QObject to the namespace of the __main__ module
//    context.addObject("file_path", &file_path);

//    // run the script
//    context.evalScript("print example");
//    context.evalScript(hello.py);
//    QVariantList args;
//    args << 42 << 47;
//    QVariant result = context.call("multiply", args);

//    qDebug() << "File Path:" << file_path;
}
