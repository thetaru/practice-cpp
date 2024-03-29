#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n < 2) return 1;
    return n * factorial(n-1);
}

int main()
{
    for (int n = 1; n <= 15; n++) {
        cout << "f(" << n << ") = " << factorial(n) << endl;
    }
}