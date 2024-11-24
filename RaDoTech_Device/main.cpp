#include "mainwindow.h"
#include "LoginPage.h"
#include "CreateAccountPage.h"
#include "EnterAccountPage.h"

#include <QApplication>
#include "DeviceOverview.h"

#include <QDebug>

#include <string>
using namespace std;


int main(int argc, char *argv[])
{
    DeviceOverview DO;

    QApplication a(argc, argv);
    LoginPage *loginPage = new LoginPage();  // Create on the heap
    CreateAccountPage  *createAccountPage = new CreateAccountPage();
    EnterAccountPage *enterAccountPage = new EnterAccountPage();

    loginPage->show();
    MainWindow* w = new MainWindow();

    QObject::connect(loginPage, &LoginPage::CreateButtonClicked, [loginPage, createAccountPage]() {
        loginPage->hide();
        createAccountPage->show();
    });

    QObject::connect(createAccountPage, &CreateAccountPage::backButtonClicked, [createAccountPage, loginPage](){
        createAccountPage->hide();
        loginPage->show();
    });

    QObject::connect(createAccountPage, &CreateAccountPage::successfulAccountCreation, [createAccountPage, w, &DO](string firstName, string lastName,
                     string gender, float weightKG, float heightCM,
                     string daob, string country,
                     string phoneNumber, string email, string password) {
        if(DO.doesUserExist(email)){
            createAccountPage->userAlreadyExist();
        }
        else{
            DO.addUser(new User(firstName, lastName, gender, weightKG, heightCM, daob, country, phoneNumber, email, password));
            createAccountPage->hide();
            w->show();
        }
    });

    QObject::connect(loginPage, &LoginPage::EnterButtonClicked, [loginPage, enterAccountPage]() {
        loginPage->hide();
        enterAccountPage->show();
    });

    QObject::connect(enterAccountPage, &EnterAccountPage::backButtonClicked, [enterAccountPage, loginPage](){
        enterAccountPage->hide();
        loginPage->show();
    });

    return a.exec();
}
