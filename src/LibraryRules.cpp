#include "LibraryRules.h"
#include <iostream>

using namespace std;

LibraryRules::LibraryRules()
{
    reservationExpiryDays = 3;
}

int LibraryRules::getReservationExpiry()
{
    return reservationExpiryDays;
}

void LibraryRules::displayRules()
{
    cout << "Library Rules:" << endl;
    cout << "Reservation expires after "
        << reservationExpiryDays
        << " days." << endl;
}