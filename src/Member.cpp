#include "../include/Member.h"
#include <iostream>

using namespace std;

Member::Member(string id, string n, string e, string p)
    : User(id, n, e, p)
{
}

void Member::searchBook(string title)
{
    cout << "Searching for book: " << title << endl;
}

void Member::borrowBook(string bookId)
{
    cout << "Borrowing book with ID: " << bookId << endl;
}

void Member::returnBook(string bookId)
{
    cout << "Returning book with ID: " << bookId << endl;
}

void Member::memberDisplayDashboard()
{
    cout << "Displaying member dashboard..." << endl;
}
