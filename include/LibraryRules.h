#pragma once

class LibraryRules
{
private:
    int maximumBorrowLimit;
    int reservationExpiryDays;
    double latePenaltyPerDay;

public:
    LibraryRules();

    int getMaximumBorrowLimit() const;
    int getReservationExpiryDays() const;
    double getLatePenaltyPerDay() const;

    void setMaximumBorrowLimit(int limit);
    void setReservationExpiryDays(int days);
    void setLatePenaltyPerDay(double penalty);

    void displayRules() const;
};