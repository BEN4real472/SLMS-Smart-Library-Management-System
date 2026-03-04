#ifndef USER_H
#define USER_H

#include <string>
using namespace std;

class User {
protected:
    string userId;
    string name;
    string email;
    string password;

public:
    User(string id, string n, string e, string p);

    bool login();
    void logout();
    void displayDashboard();
};

#endif
