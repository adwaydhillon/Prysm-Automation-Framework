#ifndef CONFIGURE_H
#define CONFIGURE_H

#include <QTabWidget>

namespace Ui {
class Configure;
}

class Configure : public QTabWidget
{
    Q_OBJECT

public:
    explicit Configure(QWidget *parent = 0);
    ~Configure();

private slots:
    void on_pushButton_13_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_15_clicked();

private:
    Ui::Configure *ui;
};

#endif // CONFIGURE_H
