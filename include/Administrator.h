#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H

#include "User.h"
#include <string>

using namespace std;

class Administrator : public User
{
public:
    Administrator(string id, string n, string e, string p);

    void addUser(string userId);
    void removeUser(string userId);
    void updateUser(string userId);
    void generateSystemReport();

    void adminDisplayDashboard();
};

#endif