#ifndef PRINT_H
#define PRINT_H

class Print
{
public:
    virtual void printWeak() = 0;

    virtual void printStrong() = 0;

    virtual ~Print(){ }
};

#endif // PRINT_H