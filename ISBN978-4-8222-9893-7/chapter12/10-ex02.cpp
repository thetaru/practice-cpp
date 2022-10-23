#include <thread>
#include <mutex>
#include <vector>
#include <algorithm>
#include <chrono>
#include <functional>
#include "01-number.h"
using namespace std;
using namespace std::chrono;

mutex m;

void threadFunc(int N, int start, vector<int>& primes)
{
    for (int n = start; n <= N; n += 3)
    {
        if (isPrime(n))
        {
            unique_lock<mutex> lock(m);
            primes.push_back(n);
        }
    }
}

int main()
{
    auto t0 = high_resolution_clock::now();

    const int N = 400000;

    vector<int> primes1{ 2, 3 };
    vector<int> primes2;

    thread threadA(threadFunc, N, 4, ref(primes1));
    thread threadB(threadFunc, N, 5, ref(primes2));

    threadA.join();
    threadB.join();

    size_t size = primes1.size() + primes2.size();
    cout << "素数の数: " << size << endl;

    primes1.reserve(size);
    primes1.insert(primes1.end(), primes2.cbegin(), primes2.cend());

    sort(primes1.begin(), primes1.end());
    report(primes1.cbegin(), primes1.cend());

    auto t1 = high_resolution_clock::now();
    cout << duration_cast<milliseconds>(t1 - t0).count() / 1000. << "秒\n";

}