#include "User.h"
#include <iostream>

User::User(std::string userID, std::string name,
    std::string email, std::string password)
    : userID(userID),
    name(name),
    email(email),
    password(password)
{
}

std::string User::getUserID() const
{
    return userID;
}

std::string User::getName() const
{
    return name;
}

std::string User::getEmail() const
{
    return email;
}

bool User::login(const std::string& enteredEmail,
    const std::string& enteredPassword) const
{
    return email == enteredEmail &&
        password == enteredPassword;
}

void User::logout() const
{
    std::cout << name << " has logged out successfully.\n";
}

void User::displayDashboard() const
{
    std::cout << "\n===== USER DASHBOARD =====\n";
    std::cout << "User ID: " << userID << '\n';
    std::cout << "Name: " << name << '\n';
}