#ifndef LIBRARIAN_H
#define LIBRARIAN_H

#include "User.h"
#include <string>

using namespace std;

class Librarian : public User {

private:
    int userId;

public:

    Librarian(string id, string n, string e, string p);

    void addBook(string bookId);
    void updateBook(string bookId);
    void removeBook(string bookId);
    void generateReport();
    void librarianDisplayDashboard();

};

#endif
