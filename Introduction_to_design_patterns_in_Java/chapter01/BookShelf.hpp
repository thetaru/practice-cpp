#ifndef BOOKSHELF_H
#define BOOKSHELF_H

#include <memory>
#include "Book.hpp"
#include "Iterable.hpp"

class BookShelf : public Iterable<Book>
{
public:
    BookShelf(int maxsize);

    Book getBookAt(int index);

    void appendBook(Book book);

    int getLength();

    Iterator<Book>* iterator();

private:
    std::unique_ptr<Book[]> m_books;
    int m_last;
};

#endif // BOOKSHELF_H