#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H

#include "User.h"
#include <string>

using namespace std;

class Administrator : public User {

private:
    int userId;

public:

    Administrator(string id, string n, string e, string p);

    void addMember(string memberId);
    void removeMember(string memberId);
    void addLibrarian(string librarianId);
    void removeLibrarian(string librarianId);
    void setBorrowLimit(int limit);
    void setLatePenalty(double penalty);
    void adminDisplayDashboard();

};

#endif
