#include "EnterAccountPage.h"
#include "ui_EnterAccountPage.h"

EnterAccountPage::EnterAccountPage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EnterAccountPage)
{
    ui->setupUi(this);
    connect(ui->backButton, &QPushButton::clicked, this, [=]() {emit backButtonClicked();});
}

EnterAccountPage::~EnterAccountPage()
{
    delete ui;
}
