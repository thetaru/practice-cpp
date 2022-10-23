#include <thread>
#include <mutex>
#include "01-number.h"
using namespace std;

mutex m; // 排他制御のためのオブジェクト

void threadFunc(int N, int start)
{
    for (int n = start; n <= N; n += 3)
    {
        if (isPrime(n))
        {
            unique_lock<mutex> lock(m);
            cout << n << ", ";
        }
    }
}

int main()
{
    const int N = 100;

    cout << "2, 3, ";

    thread threadA(threadFunc, N, 4);
    thread threadB(threadFunc, N, 5);

    threadA.join();
    threadB.join();
    cout << endl;
}