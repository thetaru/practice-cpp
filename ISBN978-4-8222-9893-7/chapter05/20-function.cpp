#include <iostream>
using namespace std;

int numOfDivisors(int n)
{
    int divisors = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) ++divisors;
    }
    return divisors;
}

int fibonacci(int n)
{
    if (n < 3) return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}

int factorial(int n)
{
    if (n < 2) return 1;
    return n * factorial(n-1);
}