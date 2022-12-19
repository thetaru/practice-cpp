#include "BookShelf.hpp"
#include "BookShelfIterator.hpp"

BookShelfIterator::BookShelfIterator(BookShelf* bookShelf)
{
    m_bookShelf = bookShelf;  
    m_index = 0;
}

bool BookShelfIterator::hasNext()
{
    if (m_index < m_bookShelf->getLength())
    {
        return true;
    }
    else
    {
        return false;
    }
}

Book BookShelfIterator::next()
{
    Book book = m_bookShelf->getBookAt(m_index);
    ++m_index;
    return book;
}