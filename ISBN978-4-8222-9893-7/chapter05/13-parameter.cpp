#include <iostream>
using namespace std;

void f1(int x) { cout << ++x << endl; }
void f2(const int x) { cout << x + 1 << endl; }
void f3(int& x) { cout << ++x << endl; }
void f4(const int& x) { cout << x + 1 << endl; }
void f5(int&& x) { cout << ++x << endl; }
void f6(const int&& x) { cout << x + 1 << endl; }
void f7(int* p) { cout << ++(*p) << endl; }
void f8(const int* p) { cout << (*p) + 1 << endl; }

int main()
{
    int x1 = 100;
    f1(x1);
    cout << x1 << endl;
    f1(110);

    int x2 = 200;
    f2(x2);
    cout << x2 << endl;
    f2(210);

    int x3 = 300;
    f3(x3);
    cout << x3 << endl;
    // f3(310);

    int x4 = 400;
    f4(x4);
    cout << x4 << endl;
    f4(410);

    int x5 = 500;
    f5(static_cast<int&&>(x5));
    cout << x5 << endl;
    f5(510);

    int x6 = 600;
    f6(static_cast<int&&>(x6));
    cout << x6 << endl;
    f6(610);

    int x7 = 700;
    f7(&x7);
    cout << x7 << endl;

    int x8 = 800;
    f8(&x8);
    f8(addressof(x8));
    cout << x8 << endl;
}