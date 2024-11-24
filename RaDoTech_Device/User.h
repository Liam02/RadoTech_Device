#ifndef USER_H
#define USER_H


class User
{
public:
    User();
};

#endif // USER_H
ivate:
    string firstName;
    string lastName;
    string gender;
    float weightKG;
    float heightCM;
    string daob;
    string country;
    string phoneNumber;
    string email;
    string password;


public:
    User(string firstName, string lastName, string gender, float weightKG, float heightCM, string daob, string country, string phoneNumber, string email, string password);
    ~User();
    void updateUser();
    string getEmail();
};



#endif // USER_H


