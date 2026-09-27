#pragma once

#include "User.h"

class Member : public User
{
private:
    int borrowedBooks;
    const int borrowingLimit = 5;

public:
    Member(std::string userID, std::string name,
        std::string email, std::string password);

    void displayDashboard() const override;

    void borrowBook();
    void returnBook();

    int getBorrowedBooks() const;
    int getBorrowingLimit() const;
};