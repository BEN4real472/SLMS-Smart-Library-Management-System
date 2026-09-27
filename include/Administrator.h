#pragma once

#include "User.h"

class Administrator : public User
{
public:
    Administrator(std::string userID, std::string name,
        std::string email, std::string password);

    void displayDashboard() const override;

    void manageMembers() const;
    void manageLibrarians() const;
    void manageSystemRules() const;
};