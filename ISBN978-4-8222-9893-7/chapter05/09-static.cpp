#include <iostream>
using namespace std;

int f()
{
    static int x = 0;
    ++x;
    return x;
}

int main()
{
    cout << f() << endl;
    cout << f() << endl;
    cout << f() << endl;
}