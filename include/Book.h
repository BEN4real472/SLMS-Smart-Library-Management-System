#pragma once

#include <string>

class Book
{
private:
    std::string bookID;
    std::string title;
    std::string author;
    std::string status;
    std::string dueDate;

public:
    Book(std::string bookID,
        std::string title,
        std::string author);

    std::string getBookID() const;
    std::string getTitle() const;
    std::string getAuthor() const;
    std::string getStatus() const;
    std::string getDueDate() const;

    void displayBookDetails() const;

    void borrowBook(const std::string& dueDate);
    void returnBook();
    void reserveBook();
};