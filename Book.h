#ifndef BOOK_H
#define BOOK_H

#include <string>

using namespace std;

class Book {

private:
    string bookId;
    string title;
    string author;
    string status;   // e.g., Available / Borrowed / Reserved
    string dueDate;  // keep as string for simplicity (e.g., "2026-03-10")

public:
    Book(string id, string t, string a, string s = "Available", string d = "");

    string getStatus();
    void setStatus(string newStatus);

    void setDueDate(string date);
    string getDueDate();

};

#endif
