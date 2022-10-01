#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int numOfDivisors(int n)
{
    int divisors = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) divisors++;
    }
    return divisors;
}

int less1(int lhs, int rhs)
{
    return numOfDivisors(lhs) < numOfDivisors(rhs);
}

struct less2
{
    bool operator() (int lhs, int rhs)
    {
        return numOfDivisors(lhs) < numOfDivisors(rhs);
    }
};

int main()
{
    const int N = 16;

    vector<int> v;
    for (int i = 1; i <= N; i++) v.push_back(i);

    // 関数ポインタ
    vector<int> v1 = v;
    sort(v1.begin(), v1.end(), less1);
    for (auto i : v1) cout << i << ", ";
    cout << endl;

    // クラス
    vector<int> v2 = v;
    sort(v2.begin(), v2.end(), less2());
    for (auto i : v2) cout << i << ", ";
    cout << endl;

    // ラムダ
    vector<int> v3 = v;
    sort(v3.begin(), v3.end(),
        [] (int lhs, int rhs)->bool {
            return numOfDivisors(lhs) < numOfDivisors(rhs);
        }
    );
    for (auto i : v3) cout << i << ", ";
    cout << endl;
}