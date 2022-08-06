#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    // if (n % 2 == 1) cout << "nは奇数です。\n";
    if (n & 1) cout << "nは奇数です。\n";
}