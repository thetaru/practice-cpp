#ifndef BOOK_H
#define BOOK_H

#include <iostream>

class Book{
public:
    Book();

    Book(const std::string& name);

    // void setName(const std::string& name);

    std::string getName();

private:
    std::string m_name;
};
#endif // BOOK_H