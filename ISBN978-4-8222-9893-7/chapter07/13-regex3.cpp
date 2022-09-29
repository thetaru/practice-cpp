#include <iostream>
#include <regex>
using namespace std;

int main()
{
    string str = "私の郵便番号は194-0013、彼女の郵便番号は153-0042です。";
    regex rx(R"((\d{3})-(\d{4}))");
    string tmp = "$1";
    cout << regex_replace(str, rx, tmp) << endl;
}