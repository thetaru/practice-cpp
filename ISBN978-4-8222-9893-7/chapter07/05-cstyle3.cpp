#include <iostream>
#include <string>
using namespace std;

void report(const char* cstr)
{
    for (int i = 0; cstr[i] != '\0'; i++) {
        cout << '[' << i << "]: " << cstr[i] << endl;
    }
}

int main()
{
    char cstr1[] = "hello";
    string str = cstr1; // cstyle string -> std::string
    cout << str.size() << endl;

    const char* cstr2 = str.c_str(); // std::string -> cstyle string
    report(cstr2);
}