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

private:
    Ui::Configure *ui;
};

#endif // CONFIGURE_H
