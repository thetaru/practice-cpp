#ifndef ITERABLE_H
#define ITERABLE_H

#include "Iterator.hpp"

template <typename E>
class Iterable
{
public:
    virtual Iterator<E>* iterator() = 0;

    virtual ~Iterable(){ };
};

#endif // ITERABLE_H