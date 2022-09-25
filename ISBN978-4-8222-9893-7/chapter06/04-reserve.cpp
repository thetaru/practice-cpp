#include <iostream>
#include <vector>
using namespace std;

int main()
{
    const int n = 20;

    vector<int> v1;
    for (int i = 0; i < n; i++) {
        cout << v1.capacity() << ", ";
        v1.push_back(i);
    }
    cout << endl;

    vector<int> v2;
    v2.reserve(100);
    for (int i = 0; i < n; i++) {
        cout << v2.capacity() << ", ";
        v2.push_back(i);
    }
    cout << endl;
}