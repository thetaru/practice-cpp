#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "整数を入力してください(Ctrl+Zで終了)。\n";
    int total = 0;
    int n;
    while (cin >> n) {
        total += n;
    }
    cout << "合計は" << total << "です。\n";
}