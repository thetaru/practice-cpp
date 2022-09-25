#include <iostream>
using namespace std;

int main()
{
    size_t n = 5;
    int* a = new int[n] { 2, 3, 5, 7, 11 };

    for (size_t i = 0; i < n; i++) cout << a[i] << ", ";
    cout << endl;

    delete[] a;
}