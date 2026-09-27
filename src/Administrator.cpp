#include "Administrator.h"
#include <iostream>

Administrator::Administrator(std::string userID, std::string name,
    std::string email, std::string password)
    : User(userID, name, email, password)
{
}

void Administrator::displayDashboard() const
{
    std::cout << "\n===== ADMINISTRATOR DASHBOARD =====\n";
    std::cout << "Administrator ID: " << userID << '\n';
    std::cout << "Name: " << name << '\n';
    std::cout << "1. Manage Members\n";
    std::cout << "2. Manage Librarians\n";
    std::cout << "3. Manage System Rules\n";
}

void Administrator::manageMembers() const
{
    std::cout << "Administrator selected: Manage Members.\n";
}

void Administrator::manageLibrarians() const
{
    std::cout << "Administrator selected: Manage Librarians.\n";
}

void Administrator::manageSystemRules() const
{
    std::cout << "Administrator selected: Manage System Rules.\n";
}