#include "Book.hpp"

Book::Book()
    : m_name("")
{ }

Book::Book(const std::string& name)
    : m_name(name)
{ }

std::string Book::getName()
{
    return m_name;
}