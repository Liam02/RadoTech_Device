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

};

#endif // DEVICEOVERVIEW_H
