#pragma once

#include <string>

class User
{
protected:
    std::string userID;
    std::string name;
    std::string email;
    std::string password;

public:
    User(std::string userID, std::string name,
        std::string email, std::string password);

    virtual ~User() = default;

    std::string getUserID() const;
    std::string getName() const;
    std::string getEmail() const;

    bool login(const std::string& enteredEmail,
        const std::string& enteredPassword) const;

    void logout() const;

    virtual void displayDashboard() const;
};