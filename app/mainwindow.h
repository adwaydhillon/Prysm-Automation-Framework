#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void dropEvent(QDropEvent *e);
    void dragEnterEvent(QDragEnterEvent *e);
    void on_pushButton_clicked();
    bool validate_proj(QString file_path);
    bool eventFilter(QObject* o, QEvent* e);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
