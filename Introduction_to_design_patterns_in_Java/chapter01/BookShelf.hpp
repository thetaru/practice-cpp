#ifndef BOOKSHELF_H
#define BOOKSHELF_H

#include <memory>
#include "Iterable.hpp"

class Book;
class Iterator;

class BookShelf : public Iterable
{
public:
    BookShelf(int maxsize);

    Book getBookAt(int index);

    void appendBook(Book book);

    int getLength();

    Iterator* iterator();

private:
    std::unique_ptr<Book[]> m_books;
    int m_last;
};

#endif // BOOKSHELF_H