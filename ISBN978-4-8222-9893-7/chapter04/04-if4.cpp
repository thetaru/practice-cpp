#include <iostream>
using namespace std;

int main()
{
    int n = 9;
    if (n % 2 == 1) {
        cout << "nは奇数です。\n";
        if (n % 3 == 0) cout << "nは3の倍数かつ奇数です。\n";
    }
}