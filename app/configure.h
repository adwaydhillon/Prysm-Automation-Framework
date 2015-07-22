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
    Ui::Configure *ui;

private slots:

private:

};

#endif // CONFIGURE_H
