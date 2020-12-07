#ifndef SEV_H
#define SEV_H

#include <QWidget>

namespace Ui {
class sev;
}

class sev : public QWidget
{
    Q_OBJECT

public:
    explicit sev(QWidget *parent = 0);
    ~sev();

private:
    Ui::sev *ui;
};

#endif // SEV_H
