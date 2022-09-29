#include <iostream>
#include <regex>
using namespace std;

int main()
{
    string str = "abc,123 xyz";
    regex rx(R"(,|\s)");
    sregex_token_iterator it(str.begin(), str.end(), rx, -1);
    sregex_token_iterator end;
    while (it != end) {
        cout << (it++)->str() << endl; // cout << *it++ << endl;
    }
}