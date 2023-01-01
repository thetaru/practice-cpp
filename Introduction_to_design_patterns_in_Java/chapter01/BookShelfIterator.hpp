#ifndef BOOKSHELFITERATOR_H
#define BOOKSHELFITERATOR_H

#include "BookShelf.hpp"
#include "Iterator.hpp"

class BookShelfIterator : public Iterator<Book>
{
public:
    explicit BookShelfIterator(BookShelf* bookShelf);

    bool hasNext() override;

    Book next() override;

private:
    BookShelf* m_bookShelf;
    int m_index;
};

#endif // BOOKSHELFITERATOR_H