#ifndef LIBRARY_H
#define LIBRARY_H

#include <string>

class Library
{
private:
    int book_id = 0;
    std::string title;
    std::string author;
    int copies = 0;

public:
    void addBook();
    int issueBook(const std::string &);
    int returnBook(const std::string &);
    void display() const;
};

#endif
