#ifndef MEMBER_H
#define MEMBER_H

#include "User.h"
#include <list>
using namespace std;

class Member : public User {
private:
    list<string> borrowedBooks;
    int maxLimit;

public:
    Member(string id, string n, string e, string p);

    bool borrowBook(string bookId);
    bool returnBook(string bookId);
    bool reserveBook(string bookId);
    void memberDisplayDashboard();
};

#endif
