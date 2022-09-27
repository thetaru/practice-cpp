#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n = 123;
    cout << '[' << setw(5) << n << ']' << endl;
    cout << '[' << n << ']' << endl;

    double x = 1. / 7;
    cout << x << endl;
    cout << setprecision(10);
    cout << x << endl;
    cout << setprecision(6);
}