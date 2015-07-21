#include "mainwindow.h"
#include <QApplication>
#include <iostream>
#include <QDebug>
#include "home.h"
#include "configure.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.showMaximized();
    return a.exec();
}
