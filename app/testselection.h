#ifndef TESTSELECTION_H
#define TESTSELECTION_H

#include <QWidget>

namespace Ui {
class TestSelection;
}

class TestSelection : public QWidget
{
    Q_OBJECT

public:
    explicit TestSelection(QWidget *parent = 0);
    ~TestSelection();
    Ui::TestSelection *ui;

private:
};

#endif // TESTSELECTION_H
