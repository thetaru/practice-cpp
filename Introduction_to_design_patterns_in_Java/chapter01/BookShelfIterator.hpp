#ifndef BOOKSHELFITERATOR_H
#define BOOKSHELFITERATOR_H

#include "Iterator.hpp"
#include "BookShelf.hpp"

//class BookShelf;
class Book;

class BookShelfIterator : public Iterator
{
public:
    BookShelfIterator(BookShelf* bookShelf);

    bool hasNext() override;

    Book next() override ;

private:
    BookShelf *m_bookShelf;
    int m_index;
};
#endif // BOOKSHELFITERATOR_H