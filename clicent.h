#ifndef CLICENT_H
#define CLICENT_H

#include <QWidget>

namespace Ui {
class clicent;
}

class clicent : public QWidget
{
    Q_OBJECT

public:
    explicit clicent(QWidget *parent = 0);
    ~clicent();

private:
    Ui::clicent *ui;
};

#endif // CLICENT_H
