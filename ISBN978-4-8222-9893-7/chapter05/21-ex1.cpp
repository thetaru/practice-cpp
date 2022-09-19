#include <iostream>
using namespace std;

int factorial(int n)
{
    int res = 1;
    for (int i = 1; i <= n; i++) {
        res *= i;
    }
    return res;
}

int main()
{
    for (int n = 1; n <= 15; ++n) {
        cout << "f(" << n << ") = " << factorial(n) << endl;
    }
}