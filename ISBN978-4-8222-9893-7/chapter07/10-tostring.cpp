#include <iostream>
#include <string>
using namespace std;

int main()
{
    // 整数 -> 文字列
    int x = 123456;
    string strx = to_string(x);
    cout << strx.size() << endl;

    // 浮動小数点数 -> 文字列
    double y = 2.718;
    string stry = to_string(y);
    cout << stry << endl;

    // 文字列 -> 整数
    string stri = "123";
    int i = stoi(stri);
    cout << (i + 1) << endl;

    // 文字列 -> 浮動小数点数
    string strd = "0.31415";
    double d = stod(strd);
    cout << (d * 10) << endl;
}