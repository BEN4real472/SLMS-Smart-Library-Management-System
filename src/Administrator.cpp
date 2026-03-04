#include "../include/Administrator.h"
#include <iostream>

using namespace std;

Administrator::Administrator(string id, string n, string e, string p)
    : User(id, n, e, p)
{
}

void Administrator::addUser(string userId)
{
    cout << "Adding user with ID: " << userId << endl;
}

void Administrator::removeUser(string userId)
{
    cout << "Removing user with ID: " << userId << endl;
}

void Administrator::updateUser(string userId)
{
    cout << "Updating user with ID: " << userId << endl;
}

void Administrator::generateSystemReport()
{
    cout << "Generating system report..." << endl;
}

void Administrator::adminDisplayDashboard()
{
    cout << "Displaying administrator dashboard..." << endl;
}
