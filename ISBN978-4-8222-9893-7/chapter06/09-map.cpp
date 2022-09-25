#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main()
{
    unordered_map<string, int> dictionary { {"one", 0}, {"two", 2}, {"three", 3} };
    cout << dictionary["two"] << endl;

    dictionary["one"] = 1;
    cout << dictionary["one"] << endl;

    cout << dictionary["four"] << endl;

    if (dictionary.find("five") == dictionary.end()) cout << "not found" << endl;

    dictionary["six"] = 6;
    for (const auto& p : dictionary) {
        cout << p.first << ": " << p.second << endl;
    }
}