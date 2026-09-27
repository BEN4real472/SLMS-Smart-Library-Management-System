#include "Book.h"
#include <iostream>

Book::Book(std::string bookID,
    std::string title,
    std::string author)
    : bookID(bookID),
    title(title),
    author(author),
    status("Available"),
    dueDate("N/A")
{
}

std::string Book::getBookID() const
{
    return bookID;
}

std::string Book::getTitle() const
{
    return title;
}

std::string Book::getAuthor() const
{
    return author;
}

std::string Book::getStatus() const
{
    return status;
}

std::string Book::getDueDate() const
{
    return dueDate;
}

void Book::displayBookDetails() const
{
    std::cout << "\n===== BOOK DETAILS =====\n";
    std::cout << "Book ID: " << bookID << '\n';
    std::cout << "Title: " << title << '\n';
    std::cout << "Author: " << author << '\n';
    std::cout << "Status: " << status << '\n';
    std::cout << "Due Date: " << dueDate << '\n';
}

void Book::borrowBook(const std::string& newDueDate)
{
    if (status == "Available")
    {
        status = "Borrowed";
        dueDate = newDueDate;

        std::cout << "Book borrowed successfully.\n";
        std::cout << "Due date: " << dueDate << '\n';
    }
    else
    {
        std::cout << "Book is currently unavailable.\n";
    }
}

void Book::returnBook()
{
    if (status == "Borrowed")
    {
        status = "Available";
        dueDate = "N/A";

        std::cout << "Book returned successfully.\n";
    }
    else
    {
        std::cout << "This book is not currently borrowed.\n";
    }
}

void Book::reserveBook()
{
    if (status != "Available")
    {
        status = "Reserved";
        std::cout << "Book reserved successfully.\n";
    }
    else
    {
        std::cout << "Book is available and does not need to be reserved.\n";
    }
}