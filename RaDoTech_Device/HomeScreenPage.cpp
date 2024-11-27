#include "HomeScreenPage.h"
#include "ui_HomeScreenPage.h"

HomeScreenPage::HomeScreenPage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::HomeScreenPage)
{
    ui->setupUi(this);
    connect(ui->logoutButton, &QPushButton::clicked, this, [=]() {emit logoutButtonClicked();});

    QTimer* timer1 = new QTimer(this);

    connect(timer1, &QTimer::timeout, this, [=]() { ui->Name_Display->setText(QString::fromStdString(user->getFirstName()) +" "+ QString::fromStdString(user->getLastName())); });

    timer1->start(100); // Run every 100 ms (0.1 second)
}

void HomeScreenPage::setUser(User* user){
    this->user=user;
}

HomeScreenPage::~HomeScreenPage()
{
    delete ui;
}
