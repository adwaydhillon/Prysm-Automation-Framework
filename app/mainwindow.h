#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include "home.h"
#include "validated.h"
#include <QStackedWidget>
#include "configure.h"

namespace Ui {
class MainWindow;
class Validated;
class Home;
class Configure;
}

class MainWindow : public QWidget
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_validateButton_clicked();
    void on_configureButton_clicked();
    bool validate_proj(QString file_path);
    void on_runButton_clicked();
    void populateConfigDetails(QString proj_path);

private:
    Ui::MainWindow *ui;
    Home *home;
    Validated *validated;
    Configure *configure;
    QStackedWidget *stackedWidget;
};

#endif // MAINWINDOW_H
