#include "../include/LibraryRules.h"
#include <iostream>

using namespace std;

LibraryRules::LibraryRules()
{
    borrowLimit = 5;
    reservationExpiryDays = 3;
}

int LibraryRules::getBorrowLimit()
{
    return borrowLimit;
}

int LibraryRules::getReservationExpiry()
{
    return reservationExpiryDays;
}

void LibraryRules::displayRules()
{
    cout << "Library Borrow Limit: " << borrowLimit << " books." << endl;
    cout << "Reservation expires in: " << reservationExpiryDays << " days." << endl;
}
