#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v = { 503, 87, 512, 61, 908, 170, 897, 275, 200, 426 };

    sort(v.begin(), v.end());

    auto begin = v.cbegin();
    auto end = v.cend();

    // 検索キーと検索範囲を指定
    int target = 200;
    auto pos = lower_bound(begin ,end, target);

    // check
    if (pos == end || *pos != target) cout << "not found\n";
    else cout << "found: " << *pos << endl;

    // 検索キーと検索範囲を指定
    target = 404;
    pos = lower_bound(begin, end, target);

    // check
    if (pos == end || *pos != target) cout << "not found\n";
    else cout << "found: " << *pos << endl;
}