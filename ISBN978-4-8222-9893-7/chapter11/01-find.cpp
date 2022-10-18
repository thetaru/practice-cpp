#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v{ 2, 3, 5, 1, 4 };

    int target = 6;
    auto pos = find(v.cbegin(), v.cend(), target);

    if (pos == v.cend())
    {
        cout << "not found\n";
    }
    else
    {
        cout << *pos << endl;
    }
}