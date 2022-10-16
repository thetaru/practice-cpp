#include <iostream>
using namespace std;

struct A
{
    int x;
    void showX()
    {
        cout << "x = " << x << endl;
    }
    static int s;
    static void showS()
    {
        cout << "s = " << s << endl;
    }
};

int A::s = 5;

int main()
{
    A::showS();
    A a1, a2;
    a1.x = 1;
    a2.x = 2;
    a1.s = 10;
    a2.showS();
    a2.showX();
}