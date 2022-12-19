#ifndef BOOKSHELF_H
#define BOOKSHELF_H

#include <memory>
#include <vector>
#include "Book.hpp"
#include "Iterable.hpp"

class BookShelf : public Iterable<Book>
{
public:
    explicit BookShelf(int maxsize);

    Book getBookAt(int index);

    void appendBook(Book book);

    int getLength();

    Iterator<Book>* iterator();

private:
    std::vector<Book> m_books;
};

#endif // BOOKSHELF_H