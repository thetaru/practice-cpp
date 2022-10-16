#include <iostream>
#include <memory>
using namespace std;

struct A
{
private:
public:
    void doSomething()
    { cout << "Hello, World!\n"; }

    ~A()
    { cout << "Aオブジェクトは解体された\n"; }
};

// Pointer
struct Wrapper1
{
public:
    A* pA1;
    Wrapper1()
        : pA1(new A)
    { }
    ~Wrapper1()
    { delete pA1; }
};

// SmartPointer
struct Wrapper2
{
public:
    shared_ptr<A> pA2;
    Wrapper2()
        : pA2(new A)
    { }
};

int main()
{
    Wrapper1 w1;
    Wrapper2 w2;
    return 1; // 処理を中断する(つもり)
    w1.pA1->doSomething();
    w2.pA2->doSomething();
}