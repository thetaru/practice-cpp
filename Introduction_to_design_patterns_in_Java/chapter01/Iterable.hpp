#ifndef ITERABLE_H
#define ITERABLE_H

class Iterator;

class Iterable
{
public:
    virtual Iterator* iterator() = 0;

    virtual ~Iterable(){};
};
#endif // ITERABLE_H