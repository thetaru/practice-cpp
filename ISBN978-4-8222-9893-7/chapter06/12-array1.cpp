#include <iostream>
using namespace std;

int main()
{
    int a[5];
    a[0] = 2;
    a[1] = 3;
    a[2] = 5;
    a[3] = 7;
    a[4] = 11;

    int b[] = { 2, 3, 5, 7, 11 };
    size_t size = end(b) - begin(b); // size_t size = sizeof(b) / sizeof(int);
    cout << size << endl;

    for (auto i : a) cout << i << ", ";
    cout << endl;

    for (auto& i : a) i *= 2;

    for (size_t i = 0; i < 5; i++) cout << a[i] << ", ";
    cout << endl;
}