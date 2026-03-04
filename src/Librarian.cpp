#include "../include/Librarian.h"
#include <iostream>

using namespace std;

Librarian::Librarian(string id, string n, string e, string p)
    : User(id, n, e, p)
{
}

void Librarian::addBook(string bookId)
{
    cout << "Adding book with ID: " << bookId << endl;
}

void Librarian::updateBook(string bookId)
{
    cout << "Updating book with ID: " << bookId << endl;
}

void Librarian::removeBook(string bookId)
{
    cout << "Removing book with ID: " << bookId << endl;
}

void Librarian::generateReport()
{
    cout << "Generating library report..." << endl;
}

void Librarian::librarianDisplayDashboard()
{
    cout << "Displaying librarian dashboard..." << endl;
}
