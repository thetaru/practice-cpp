#include <iostream>
using namespace std;

// void mySwap(int* x, int* y)
// {
//     int tmp = *y;
//     *y = *x;
//     *x = tmp;
// }

template <typename T>
void mySwap(T& a, T& b)
{
    T tmp = b;
    b = a;
    a = tmp;
}

template <typename T>
void mySwap(T* a, T* b)
{
    T tmp = *b;
    *b = *a;
    *a = tmp;
}

int main()
{
    int a = 1;
    int b = 2;
    mySwap(a,b);
    cout << a << endl;
    cout << b << endl;

    mySwap(&a, &b);
    cout << a << endl;
    cout << b << endl;
}