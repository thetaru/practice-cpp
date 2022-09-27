#include <iostream>
using namespace std;

void report(const char* cstr)
{
    for (int i = 0; cstr[i] != '\0'; i++) {
        cout << '[' << i << "]: " << cstr[i] << endl; 
    }
}

int main()
{
    char cstr[] = "hello";
    report(cstr);
}