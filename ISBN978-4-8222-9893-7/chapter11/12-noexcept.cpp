#include <iostream>
using namespace std;

[[noreturn]]
void doSomething() noexcept
{
    while (1)
    {
        int* p = new int[0x1fffffff];
        cout << p << endl;
    }
}

int main()
{
    try
    {
        doSomething();
    }
    catch(...)
    {
        cerr << "例外発生\n";
    }
}