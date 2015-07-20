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

private:
    Ui::Validated *ui;
};

#endif // VALIDATED_H
