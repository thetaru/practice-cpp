#include <iostream>
#include <regex>
using namespace std;

int main()
{
    string str = "私の郵便番号は194-0013、彼女の郵便番号は153-0042です。";
    regex rx(R"(\d{3}-\d{4})");
    sregex_iterator it(str.begin(), str.end(), rx);
    sregex_iterator end;
    while (it != end) {
        cout << (it++)->str() << endl;
    }
}