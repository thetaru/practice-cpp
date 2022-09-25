#include <iostream>
#include <vector>
using namespace std;

void g1(vector<int> v)
{
    v[0] = 100;
}

int g2(const vector<int>& v)
{
    return v[0];
}

void g3(vector<int>& v)
{
    v[0] = 1000;
}

auto h()
{
    vector<int> v{ 11, 13, 17, 19 };
    return v;
}

int main()
{
    vector<int> v1{ 2, 3, 5, 7 };

    g1(v1);
    cout << v1[0] << endl;

    g2(v1);
    cout << v1[0] << endl;

    g3(v1);
    cout << v1[0] << endl;

    auto v2 = h(); // auto v2(h());
    for (auto x : v2) cout << x << ", ";
    cout << endl;
}