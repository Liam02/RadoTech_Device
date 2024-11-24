#ifndef DEVICEOVERVIEW_H
#define DEVICEOVERVIEW_H

#include <string>
using namespace std;

#include <vector>
#include "User.h"

class DeviceOverview{
private:
    vector<User*> users;


public:
    void createUser();
    bool doesUserExist(string email) const;
    void addUser(User* user);

};

#endif // DEVICEOVERVIEW_H
