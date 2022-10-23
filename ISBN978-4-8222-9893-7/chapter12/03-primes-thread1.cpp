#include <thread>
#include "01-number.h"
using namespace std;

const int N = 100;

// 3で割った余りが1
void threadFuncA()
{
    for (int n = 4; n <= N; n += 3)
    {
        if (isPrime(n))
        {
            cout << n << ", ";
        }
    }
}

// 3で割った余りが2
void threadFuncB()
{
    for (int n = 5; n <= N; n += 3)
    {
        if (isPrime(n))
        {
            cout << n << ", ";
        }
    }
}

int main()
{
    cout << "2, 3, ";

    thread threadA(threadFuncA);
    thread threadB(threadFuncB);

    threadA.join();
    threadB.join();
    cout << endl;
}