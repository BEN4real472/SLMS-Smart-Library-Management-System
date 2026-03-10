#include "Book.h"
#include <iostream>

using namespace std;

Book::Book(string id, string t, string a)
{
    bookId = id;
    title = t;
    author = a;
    status = "Available";
}

string Book::getStatus()
{
    return status;
}

void Book::setStatus(string newStatus)
{
    status = newStatus;
}

void Book::setDueDate(string newDueDate)
{
    dueDate = newDueDate;
}

string Book::getDueDate()
{
    return dueDate;
}