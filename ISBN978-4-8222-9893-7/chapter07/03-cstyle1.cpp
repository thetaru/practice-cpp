#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
    char cstr[] = "hello";
    cstr[0] = 'H';
    cout << cstr << endl;
    size_t size = end(cstr) - begin(cstr); // sizeof(cstr)/sizeof(char);
    cout << size << endl;
    cout << strlen(cstr) << endl;
}