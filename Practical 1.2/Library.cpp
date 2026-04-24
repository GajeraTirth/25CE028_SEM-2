#include <iostream>
#include <limits>
#include "Library.h"

void Library::addBook()
{
    std::cout << "Enter Book ID -> ";
    while (!(std::cin >> book_id))
    {
        std::cout << "Invalid input. Enter numeric Book ID -> ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << "Enter Book Title -> ";
    std::getline(std::cin, title);

    std::cout << "Enter Author Name -> ";
    std::getline(std::cin, author);

    std::cout << "Enter Number of Copies -> ";
    while (!(std::cin >> copies) || copies < 0)
    {
        std::cout << "Invalid input. Enter non-negative number of copies -> ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int Library::issueBook(const std::string &t)
{
    if (title == t)
    {
        if (copies > 0)
        {
            copies--;
            std::cout << "Book Issued Successfully\n";
        }
        else
        {
            std::cout << "ERROR: Book is out of stock\n";
        }
        return 1;
    }
    return 0;
}

int Library::returnBook(const std::string &t)
{
    if (title == t)
    {
        copies++;
        std::cout << "Book Returned Successfully\n";
        return 1;
    }
    return 0;
}

void Library::display() const
{
    std::cout << book_id << "\t"
              << title << "\t"
              << author << "\t"
              << copies << std::endl;
}
