#include <iostream>
#include <regex>
using namespace std;

int main()
{
    regex rx(R"(\d{3}-\d{4})");

    string zip = "153-0042";
    if (regex_match(zip, rx)) cout << "OK\n";
    else cout << "NG\n";

    zip = "194-00134";
    if (regex_match(zip, rx)) cout << "OK\n";
    else cout << "NG\n";
}