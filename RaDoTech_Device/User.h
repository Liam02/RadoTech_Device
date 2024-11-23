#ifndef USER_H
#define USER_H


class User
{
public:
    User();
};

#endif // USER_H
ivate:
    string gender;
    float weightKG;
    float heightCM;
    string daob;
    string country;
    int phoneNumber;
    string email;
    string password;


public:
    User();
    ~User();
    void updateUser();
};



#endif // USER_H


