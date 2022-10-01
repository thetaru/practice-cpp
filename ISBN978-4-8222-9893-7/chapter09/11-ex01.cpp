#include <iostream>
#include <vector>
using namespace std;

template <typename T>
void myReverse(T begin, T end)
{
    while (begin < end) {
        --end;
        swap(*begin, *end);
        ++begin;
    }
}

int main()
{
    int a[] = { 2, 9, 4, 1, 5, 3 };
    myReverse(a, end(a));
    for (auto i : a) cout << i << ", ";
    cout << endl;

    double b[] = { 3.5 };
    myReverse(b, end(b));
    for (auto i : b) cout << i << ", ";
    cout << endl;

    vector<int> c;
    myReverse(c.begin(), c.end());
    for (auto i : c) cout << i << ", ";
    cout << endl;
}