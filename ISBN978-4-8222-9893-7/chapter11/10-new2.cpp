#include <iostream>
using namespace std;

int main()
{
    while (1)
    {
        int* p = new(nothrow) int[0x1fffffff];
        if (p != nullptr)
        {
            cout << p << endl;
        }
        else
        {
            cout << "failure\n";
            break;
        }
    }
}