#include <iostream>
using namespace std;

void f(int* first, int* last)
{
    for (int* p = first; p != last; ++p) {
        cout << *p << ", ";
    }
    cout << endl;
}

int main()
{
    int a[] = { 2, 3, 5, 7, 11 };
    f(begin(a), end(a));
}