#include "home.h"
#include "validated.h"
#include "ui_home.h"
#include <QStackedWidget>
#include <QPushButton>
#include <QHBoxLayout>
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

Home::Home(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Home)
{
    ui->setupUi(this);
    setAcceptDrops(true);
}

Home::~Home()
{
    delete ui;
}


//void Home::dragEnterEvent(QDragEnterEvent *e)
//{
//    if (e->mimeData()->hasUrls()) {
//        e->acceptProposedAction();
//    }
//}

//void Home::dropEvent(QDropEvent *e)
//{
//    foreach (const QUrl &url, e->mimeData()->urls()) {
//        const QString &proj_path = url.toLocalFile();
//        if (validate_proj(proj_path)) {
//            qDebug() << "Dropped file:" << proj_path;
//        }
//    }
//}

//bool Home::eventFilter(QObject* o, QEvent* e) {
//    if (e->type()==QEvent::DragEnter) {
//        qDebug() << "QEvent::DragEnter";
//    }

//    if (e->type()==QEvent::Drop) {
//        qDebug() << "QEvent::Drop";
//    }
//    return false;
//}
