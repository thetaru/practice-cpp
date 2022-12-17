#ifndef ITERATOR_H
#define ITERATOR_H

#include "Book.hpp"

template <typename E>
class Iterator
{
public:
    Iterator(){ };

    virtual bool hasNext() = 0;

    virtual E next() = 0;

    virtual ~Iterator(){ };
};

#endif // ITERATOR