#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include "home.h"
#include "validated.h"
#include <QStackedWidget>

namespace Ui {
class MainWindow;
class Validated;
class Home;
}

class MainWindow : public QWidget
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    Ui::Home *home;
    Ui::Validated *validated;
    QStackedWidget *stackedWidget;
};

#endif // MAINWINDOW_H
