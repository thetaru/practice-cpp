#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec(5);

    // 添字の利用
    vec[2] = 102;

    // メンバ関数at()の利用
    vec.at(1) = 101;

    // ポインタの利用
    int* p = &vec[0];
    *p = 100;
    *(p + 3) = 103;

    // 反復子の利用
    auto it = vec.begin();
    *(it + 4) = 104;

    // すべての要素を表示
    for (auto i = vec.begin(); i != vec.end(); i++) {
        cout << *i << ", ";
    }
    cout << endl;
}