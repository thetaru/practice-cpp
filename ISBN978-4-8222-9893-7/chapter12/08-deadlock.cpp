#include <thread>
#include <mutex>
#include "01-number.h"
using namespace std;

const int N = 100;
mutex m1, m2;

int total = 0; // 素数の数

void threadFuncA()
{
    for (int n = 4; n <= N; n += 3)
    {
        if (isPrime(n))
        {
            unique_lock<mutex> lock1(m1);
            cout << n << ", ";
            unique_lock<mutex> lock2(m2);
            total++;
        }
    }
}

void threadFuncB()
{
    for (int n = 5; n <= N; n += 3)
    {
        if (isPrime(n))
        {
            /* デッドロック発生
            unique_lock<mutex> lock2(m1);
            cout << n << ", ";
            unique_lock<mutex> lock1(m2);
            total++;
             */
            unique_lock<mutex> lock1(m1);
            cout << n << ", ";
            unique_lock<mutex> lock2(m2);
            total++;
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