#include <iostream>
using namespace std;

int x;

void f()
{
    x = 2;
    int y = 2;
    cout << "y in f = " << y << endl;
}

int main()
{
    x = 1;
    int y = 1;
    f();
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
}