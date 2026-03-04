#include "include/User.h"
#include "include/Member.h"
#include "include/Librarian.h"
#include "include/Administrator.h"
#include "include/Book.h"
#include "include/LibraryRules.h"
#include "include/LibrarySystem.h"

#include <iostream>

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

    system.displaySystemStatus();
    system.shutdownSystem();

    return 0;
}
