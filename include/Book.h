#ifndef BOOK_H
#define BOOK_H

#include <string>

using namespace std;

class Book
{
private:
    string bookId;
    string title;
    string author;
    string status;
    string dueDate;

public:
    Book(string id, string t, string a);

    string getStatus();
    void setStatus(string newStatus);

    void setDueDate(string newDueDate);
    string getDueDate();
};

#endif