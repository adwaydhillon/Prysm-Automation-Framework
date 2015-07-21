#ifndef VALIDATED_H
#define VALIDATED_H

#include <QWidget>

namespace Ui {
class Validated;
}

class Validated : public QWidget
{
    Q_OBJECT

public:
    explicit Validated(QWidget *parent = 0);
    ~Validated();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::Validated *ui;
};

#endif // VALIDATED_H
