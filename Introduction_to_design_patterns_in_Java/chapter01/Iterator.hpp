#ifndef ITERATOR_H
#define ITERATOR_H

class Book;

class Iterator
{
public:
    Iterator(){};

    virtual bool hasNext() = 0;

    virtual Book next() = 0;

    virtual ~Iterator(){};
};
#endif // ITERATOR