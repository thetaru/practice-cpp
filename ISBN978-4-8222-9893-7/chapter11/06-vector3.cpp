#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v{ 2, 3, 5 };
    cout << v.at(3) <<endl; // ここで実行時エラーとなる
    cout << "正常終了\n";
}