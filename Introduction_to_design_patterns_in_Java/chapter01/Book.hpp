#ifndef BOOK_H
#define BOOK_H

#include <string>

class Book
{
public:
    Book();

    Book(const std::string& name);

    std::string getName();

private:
    std::string m_name;
};

#endif // BOOK_H