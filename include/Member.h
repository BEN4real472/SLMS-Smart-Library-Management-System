#ifndef MEMBER_H
#define MEMBER_H

#include "User.h"
#include <string>

using namespace std;

class Member : public User
{
public:
    Member(string id, string n, string e, string p);

    void searchBook(string title);
    void borrowBook(string bookId);
    void returnBook(string bookId);
    void memberDisplayDashboard();
};

#endif