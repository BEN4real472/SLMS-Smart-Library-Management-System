#pragma once

#include "User.h"

class Librarian : public User
{
public:
    Librarian(std::string userID, std::string name,
        std::string email, std::string password);

    void displayDashboard() const override;

    void addBook() const;
    void updateBook() const;
    void removeBook() const;
};