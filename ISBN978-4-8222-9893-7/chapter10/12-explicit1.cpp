#include <iostream>
using namespace std;

struct A
{
public:
    int x;
    A(int newX)
        : x(newX)
    { cout << "A(int newX) is called.\n"; };
};

int main()
{
    A a = 5; // A a(5);
}