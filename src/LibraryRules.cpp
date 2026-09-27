#include "LibraryRules.h"
#include <iostream>

LibraryRules::LibraryRules()
    : maximumBorrowLimit(5),
    reservationExpiryDays(3),
    latePenaltyPerDay(0.50)
{
}

int LibraryRules::getMaximumBorrowLimit() const
{
    return maximumBorrowLimit;
}

int LibraryRules::getReservationExpiryDays() const
{
    return reservationExpiryDays;
}

double LibraryRules::getLatePenaltyPerDay() const
{
    return latePenaltyPerDay;
}

void LibraryRules::setMaximumBorrowLimit(int limit)
{
    if (limit > 0)
    {
        maximumBorrowLimit = limit;
    }
}

void LibraryRules::setReservationExpiryDays(int days)
{
    if (days > 0)
    {
        reservationExpiryDays = days;
    }
}

void LibraryRules::setLatePenaltyPerDay(double penalty)
{
    if (penalty >= 0)
    {
        latePenaltyPerDay = penalty;
    }
}

void LibraryRules::displayRules() const
{
    std::cout << "\n===== LIBRARY RULES =====\n";
    std::cout << "Maximum books per member: "
        << maximumBorrowLimit << '\n';

    std::cout << "Reservation expiry period: "
        << reservationExpiryDays << " days\n";

    std::cout << "Late return penalty: GBP "
        << latePenaltyPerDay << " per day\n";
}