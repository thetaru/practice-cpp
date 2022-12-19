#include "BookShelf.hpp"
#include "BookShelfIterator.hpp"

BookShelf::BookShelf(int maxsize)
{
    // Allocation of vector space
    m_books.reserve(maxsize);
}

Book BookShelf::getBookAt(int index)
{
    return m_books.at(index);
}

void BookShelf::appendBook(Book book)
{
    m_books.push_back(book);
}

int BookShelf::getLength()
{
    return m_books.size();
}

Iterator<Book>* BookShelf::iterator()
{
    return new BookShelfIterator(this);
}
