#ifndef ENTERACCOUNTPAGE_H
#define ENTERACCOUNTPAGE_H

#include <QDialog>

namespace Ui {
class EnterAccountPage;
}

class EnterAccountPage : public QDialog
{
    Q_OBJECT

public:
    explicit EnterAccountPage(QWidget *parent = nullptr);
    ~EnterAccountPage();

signals:
    void backButtonClicked();

private:
    Ui::EnterAccountPage *ui;
};

#endif // ENTERACCOUNTPAGE_H
