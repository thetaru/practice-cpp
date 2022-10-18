#include <iostream>
#include <algorithm>
#include <cassert>
#include <vector>
#include <limits>
using namespace std;

template<typename T>
size_t binarySearch(T key, const vector<T>& v)
{
    if (!is_sorted(v.cbegin(), v.cend()))
    {
        throw runtime_error("例外: ソートされていない");
    }
    int n = v.size();
    int low = 0;
    int high = n - 1;
    int mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        cout << low << ", " << mid << ", " << high << endl;
        assert(low <= mid && mid <= high);
        if (key < v[mid])
            high = mid - 1;
        else if (key > v[mid])
            low = mid + 1;
        else
            return mid;
    }
    return n;
}

int main()
{
    try
    {
        int n = numeric_limits<int>::max() / 2 + 2;
        vector<int> v(n);
        int target = 1;
        sort(v.begin(), v.end());
        size_t pos = binarySearch(target, v);
        if (pos == v.size())
        {
            cout << "not found\n";
        }
        else
        {
            assert(v[pos] == target);
            cout << "v[" << pos << "] = " << v[pos] << endl;
        }
    }
    catch (exception& e)
    {
        cerr << e.what() << endl;
    }
    cout << endl;
}