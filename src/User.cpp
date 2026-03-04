#include "../include/User.h"
#include <iostream>

using namespace std;

User::User(string id, string n, string e, string p)
{
    userId = id;
    name = n;
    email = e;
    password = p;
}

bool User::login()
{
    cout << "User logged in successfully." << endl;
    return true;
}

void User::logout()
{
    cout << "User logged out." << endl;
}

void User::displayDashboard()
{
    cout << "Displaying user dashboard..." << endl;
}
