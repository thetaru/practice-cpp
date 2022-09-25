#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v{ 2, 3, 5, 7 };

    for (int i = 0; i < 4; i++) cout << v[i] << ", ";
    cout << endl;

    size_t s = v.size();
    for (size_t i = 0; i < s; i++) cout << v[i] << ", ";
    cout << endl;

    // copy
    for (auto x : v) cout << x << ", ";
    cout << endl;

    // ref
    for (auto& x : v) ++x;
    for (auto x : v) cout << x << ", ";
    cout << endl;
}