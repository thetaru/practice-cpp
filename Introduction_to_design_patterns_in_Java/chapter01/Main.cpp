#include <iostream>
#include "BookShelf.hpp"

int main(void)
{
    BookShelf bookShelf(4);
    bookShelf.appendBook(Book("Around the World in 80 days"));
    bookShelf.appendBook(Book("Bible"));
    bookShelf.appendBook(Book("Cinderella"));
    bookShelf.appendBook(Book("Daddy-Long-Legs"));
    bookShelf.appendBook(Book("East of Eden"));
    bookShelf.appendBook(Book("Frankenstein"));
    bookShelf.appendBook(Book("Gulliver's Travels"));
    bookShelf.appendBook(Book("Hamlet"));

    Iterator<Book>* it = bookShelf.iterator();

    while(it->hasNext())
    {
        Book book = it->next();
        std::cout << book.getName() << std::endl;
    }

    delete it;

    return 0;
}