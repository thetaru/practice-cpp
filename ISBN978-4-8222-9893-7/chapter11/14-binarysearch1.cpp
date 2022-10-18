#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

template<typename T>
size_t binarySearch(T key, const vector<T>& v)
{
    int n = v.size();
    int low = 0;
    int high = n - 1;
    int mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        cout << low << ", " << mid << ", " << high << endl;
        if (key < v[mid])
        {
            high = mid - 1;
        }
        else if (key > v[mid])
        {
            low = mid + 1;
        }
        else
        {
            return mid;
        }
    }
    return n;
}

int main()
{
    vector<int> v{ 7, 2, 3, 11, 5 };
    int target = 11;
    sort(v.begin(), v.end());
    size_t pos = binarySearch(target, v);
    if (pos == v.size()) cout << "not found\n";
    else cout << "v[" << pos << "] = " << v[pos] << endl;
}