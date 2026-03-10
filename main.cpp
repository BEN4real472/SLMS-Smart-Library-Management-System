#include <iostream>

#include "User.h"
#include "Member.h"
#include "Librarian.h"
#include "Administrator.h"
#include "Book.h"
#include "LibraryRules.h"
#include "LibrarySystem.h"

using namespace std;

int main()
{
    cout << "Smart Library Management System Starting..." << endl;

    LibrarySystem system;
    system.startSystem();

    LibraryRules rules;
    rules.displayRules();

    Member member("M001", "Alice", "alice@email.com", "pass123");
    member.memberDisplayDashboard();

    Librarian librarian("L001", "Bob", "bob@email.com", "admin123");
    librarian.librarianDisplayDashboard();

    Administrator admin("A001", "Charlie", "charlie@email.com", "root123");
    admin.adminDisplayDashboard();

    system.shutdownSystem();

    return 0;
}