#ifndef HOME_H
#define HOME_H

#include <QWidget>
#include <QStackedWidget>
#include <QPushButton>

namespace Ui {
class Home;
}

class Home : public QWidget
{
    Q_OBJECT

public:
    explicit Home(QWidget *parent = 0);
//    Ui::Home *ui() const { return ui; }
    ~Home();

private slots:
    void dropEvent(QDropEvent *e);
    void dragEnterEvent(QDragEnterEvent *e);
    void on_pushButton_clicked();
    bool validate_proj(QString file_path);
    bool eventFilter(QObject* o, QEvent* e);

private:
    Ui::Home *ui;
};

#endif // HOME_H
