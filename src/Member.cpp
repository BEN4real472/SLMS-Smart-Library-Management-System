#include "Member.h"
#include <iostream>

Member::Member(std::string userID, std::string name,
    std::string email, std::string password)
    : User(userID, name, email, password),
    borrowedBooks(0)
{
}

void Member::displayDashboard() const
{
    std::cout << "\n===== MEMBER DASHBOARD =====\n";
    std::cout << "Member ID: " << userID << '\n';
    std::cout << "Name: " << name << '\n';
    std::cout << "Books currently borrowed: "
        << borrowedBooks << "/" << borrowingLimit << '\n';
}

void Member::borrowBook()
{
    if (borrowedBooks < borrowingLimit)
    {
        borrowedBooks++;
        std::cout << "Book borrowed successfully.\n";
    }
    else
    {
        std::cout << "Borrowing limit reached. "
            << "A member can borrow a maximum of "
            << borrowingLimit << " books.\n";
    }
}

void Member::returnBook()
{
    if (borrowedBooks > 0)
    {
        borrowedBooks--;
        std::cout << "Book returned successfully.\n";
    }
    else
    {
        std::cout << "There are no borrowed books to return.\n";
    }
}

int Member::getBorrowedBooks() const
{
    return borrowedBooks;
}

int Member::getBorrowingLimit() const
{
    return borrowingLimit;
}