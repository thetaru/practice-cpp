#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main()
{
    vector<int> v0{ 0, 1, 2, 1, 0, 2, 1 };
    set<int> s0(v0.cbegin(), v0.cend());
    vector<int> v1(s0.cbegin(), s0.cend());
    for (auto i : v1) cout << i << ", ";
    cout << endl;
}