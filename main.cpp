#include <iostream>
#include <string>

#include "User.h"
#include "Member.h"
#include "Librarian.h"
#include "Administrator.h"
#include "Book.h"
#include "LibraryRules.h"
#include "LibrarySystem.h"

using namespace std;

void demonstratePolymorphism(User& user)
{
    user.displayDashboard();
}

int main()
{
    LibrarySystem system;
    LibraryRules rules;

    Member member(
        "M001",
        "Alice",
        "alice@email.com",
        "pass123"
    );

    Librarian librarian(
        "L001",
        "Bob",
        "bob@email.com",
        "admin123"
    );

    Administrator administrator(
        "A001",
        "Charlie",
        "charlie@email.com",
        "root123"
    );

    Book book(
        "B001",
        "Software Engineering",
        "Ian Sommerville"
    );

    int choice = 0;

    system.startSystem();

    while (choice != 6)
    {
        cout << "\n===== MAIN MENU =====\n";
        cout << "1. Member Login\n";
        cout << "2. Librarian Login\n";
        cout << "3. Administrator Login\n";
        cout << "4. View Library Rules\n";
        cout << "5. View Book Details\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";

        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            string email;
            string password;

            cout << "\n===== MEMBER LOGIN =====\n";
            cout << "Email: ";
            cin >> email;

            cout << "Password: ";
            cin >> password;

            if (member.login(email, password))
            {
                cout << "\nLogin successful.\n";

                demonstratePolymorphism(member);

                int memberChoice = 0;

                while (memberChoice != 5)
                {
                    cout << "\n===== MEMBER OPERATIONS =====\n";
                    cout << "1. View Book Details\n";
                    cout << "2. Borrow Book\n";
                    cout << "3. Return Book\n";
                    cout << "4. Reserve Book\n";
                    cout << "5. Logout\n";
                    cout << "Enter your choice: ";

                    cin >> memberChoice;

                    switch (memberChoice)
                    {
                    case 1:
                        book.displayBookDetails();
                        break;

                    case 2:
                        if (book.getStatus() == "Available")
                        {
                            book.borrowBook("15/10/2026");
                            member.borrowBook();
                        }
                        else
                        {
                            cout << "\nThe book cannot be borrowed because it is "
                                << book.getStatus() << ".\n";
                        }
                        break;

                    case 3:
                        if (book.getStatus() == "Borrowed")
                        {
                            book.returnBook();
                            member.returnBook();
                        }
                        else
                        {
                            cout << "\nThe book is not currently borrowed.\n";
                        }
                        break;

                    case 4:
                        book.reserveBook();
                        break;

                    case 5:
                        member.logout();
                        break;

                    default:
                        cout << "\nInvalid choice. Please enter a number from 1 to 5.\n";
                    }
                }
            }
            else
            {
                cout << "\nInvalid email or password.\n";
            }

            break;
        }

        case 2:
        {
            string email;
            string password;

            cout << "\n===== LIBRARIAN LOGIN =====\n";
            cout << "Email: ";
            cin >> email;

            cout << "Password: ";
            cin >> password;

            if (librarian.login(email, password))
            {
                cout << "\nLogin successful.\n";
                demonstratePolymorphism(librarian);
                librarian.logout();
            }
            else
            {
                cout << "\nInvalid email or password.\n";
            }

            break;
        }

        case 3:
        {
            string email;
            string password;

            cout << "\n===== ADMINISTRATOR LOGIN =====\n";
            cout << "Email: ";
            cin >> email;

            cout << "Password: ";
            cin >> password;

            if (administrator.login(email, password))
            {
                cout << "\nLogin successful.\n";
                demonstratePolymorphism(administrator);
                administrator.logout();
            }
            else
            {
                cout << "\nInvalid email or password.\n";
            }

            break;
        }

        case 4:
            rules.displayRules();
            break;

        case 5:
            book.displayBookDetails();
            break;

        case 6:
            cout << "\nExiting system...\n";
            break;

        default:
            cout << "\nInvalid choice. Please enter a number from 1 to 6.\n";
        }
    }

    system.shutdownSystem();

    return 0;
}