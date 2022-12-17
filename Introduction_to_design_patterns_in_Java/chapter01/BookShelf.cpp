#include "BookShelf.hpp"
#include "BookShelfIterator.hpp"

BookShelf::BookShelf(int maxsize)
{
    m_books = std::make_unique<Book[]>(maxsize);
    m_last = 0;
}

Book BookShelf::getBookAt(int index)
{
    return m_books[index];
}

void BookShelf::appendBook(Book book)
{
    m_books[m_last] = book;
    m_last++;
}

int BookShelf::getLength()
{
    return m_last;
}

Iterator<Book>* BookShelf::iterator()
{
    return new BookShelfIterator(this);
}
