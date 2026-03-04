#ifndef LIBRARYRULES_H
#define LIBRARYRULES_H

class LibraryRules {

private:
    int borrowLimit;
    double latePenaltyPerDay;

public:

    LibraryRules();

    void setBorrowLimit(int limit);
    void setLatePenalty(double penalty);

    int getBorrowLimit();
    double getLatePenaltyPerDay();

};

#endif
