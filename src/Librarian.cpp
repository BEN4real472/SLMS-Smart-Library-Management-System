#include "Librarian.h"
#include <iostream>

Librarian::Librarian(std::string userID, std::string name,
    std::string email, std::string password)
    : User(userID, name, email, password)
{
}

void Librarian::displayDashboard() const
{
    std::cout << "\n===== LIBRARIAN DASHBOARD =====\n";
    std::cout << "Librarian ID: " << userID << '\n';
    std::cout << "Name: " << name << '\n';
    std::cout << "1. Add Book\n";
    std::cout << "2. Update Book\n";
    std::cout << "3. Remove Book\n";
}

void Librarian::addBook() const
{
    std::cout << "Librarian selected: Add Book.\n";
}

void Librarian::updateBook() const
{
    std::cout << "Librarian selected: Update Book.\n";
}

void Librarian::removeBook() const
{
    std::cout << "Librarian selected: Remove Book.\n";
}