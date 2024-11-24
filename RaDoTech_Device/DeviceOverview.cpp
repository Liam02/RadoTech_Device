#include "DeviceOverview.h"

bool DeviceOverview::doesUserExist(string email) const{
    for(int i = 0; i<int(users.size()); ++i){
        if(users[i]->getEmail()==email){
            return true;
        }
    }
    return false;
}

void DeviceOverview::addUser(User* user){
    users.push_back(user);
}
