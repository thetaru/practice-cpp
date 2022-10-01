#include <iostream>
#include <algorithm>
using namespace std;


int numOfDivisors(int n)
{
    int divisors = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) divisors++;
    }
    return divisors;
}

int less1(int lhs, int rhs)
{
    return numOfDivisors(lhs) < numOfDivisors(rhs);
}

int main()
{
    cout << min(3, 2) << endl;
    cout << max(3, 2) << endl;

    cout << min({ 3, 2, 1, 4 }) << endl;
    cout << max({ 3, 2, 1, 4 }) << endl;

    auto result1 = minmax({ 3, 2, 1, 4 });
    cout << result1.first << endl;
    cout << result1.second << endl;

    auto result2 = minmax({ 10, 11, 9, 12 }, less1);
    cout << result2.first << endl;
    cout << result2.second << endl;

    vector<int> v{ 10, 11, 9, 12 };
    auto minIter = min_element(v.cbegin(), v.cend());
    cout << *minIter << endl;

    auto maxIter = max_element(v.cbegin(), v.cend());
    cout << *maxIter << endl;

    auto minmaxIter1 = minmax_element(v.cbegin(), v.cend());
    cout << *minmaxIter1.first << endl;
    cout << *minmaxIter1.second << endl;

    auto minmaxIter2 = minmax_element(v.cbegin(), v.cend(), less1);
    cout << *minmaxIter2.first << endl;
    cout << *minmaxIter2.second << endl;
}
