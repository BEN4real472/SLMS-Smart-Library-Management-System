#ifndef LIBRARYRULES_H
#define LIBRARYRULES_H

#include <string>
#include <iostream>

using namespace std;

class LibraryRules
{
private:
    int reservationExpiryDays;

public:
    LibraryRules();

    int getReservationExpiry();
    void displayRules();
};

#endif