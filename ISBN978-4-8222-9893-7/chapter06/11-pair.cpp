#include <iostream>
#include <utility>
#include <tuple>
using namespace std;

int main()
{
    auto taro = make_pair("Taro", 32); // pair<string, int> taro("Taro", 32);
    cout << taro.first << endl;
    cout << taro.second << endl;

    auto hanako = make_tuple("Hanako", 1980, 1, 28); // tuple<string, int, int> hanako("Hanako", 1980, 1, 28);
    cout << get<0>(hanako) << endl;
    cout << get<1>(hanako) << endl;
    cout << get<2>(hanako) << endl;
    cout << get<3>(hanako) << endl;
}