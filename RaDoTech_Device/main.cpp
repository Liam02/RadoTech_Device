#include "mainwindow.h"
#include "LoginPage.h"

#include <QApplication>
#include "DeviceOverview.h"

#include <QDebug>


int main(int argc, char *argv[])
{
    DeviceOverview DO;

    QApplication a(argc, argv);
    LoginPage *loginPage = new LoginPage();  // Create on the heap
    loginPage->show();
    MainWindow* w = new MainWindow();

    QObject::connect(loginPage, &LoginPage::CreateButtonClicked, [loginPage, w]() {
        loginPage->hide();
        w->show();
    });
    QObject::connect(loginPage, &LoginPage::EnterButtonClicked, [loginPage, w]() {
        loginPage->hide();
        w->show();
    });
    return a.exec();
}
