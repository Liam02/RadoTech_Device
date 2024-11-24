#include "User.h"

User::User(string firstName, string lastName, string gender, float weightKG, float heightCM, string daob, string country, string phoneNumber, string email, string password){
    this->firstName = firstName;
    this->lastName = lastName;
    this->gender = gender;
    this->weightKG = weightKG;
    this->heightCM = heightCM;
    this->daob = daob;
    this->country = country;
    this->phoneNumber = phoneNumber;
    this->email = email;
    this->password = password;
}

User::~User(){
    delete this;
}

void User::updateUser(){

}

string User::getEmail(){
    return this->email;
}
