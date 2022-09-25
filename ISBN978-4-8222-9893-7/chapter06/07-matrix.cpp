#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> v { {1, 2, 3}, {4, 5, 6} };

    cout << v.size() << endl;
    cout << v[0].size() << endl;

    cout << v[1][2] << endl; 

    // i: row j: col
    for (size_t i = 0; i < v.size(); i++) {
        for (size_t j = 0; j < v[i].size(); j++) {
            cout << v[i][j] << ", ";
        }
        cout << endl;
    }

    for (const auto& row : v) {
        for (const auto& x : row) {
            cout << x << ", ";
        }
        cout << endl;
    }
}