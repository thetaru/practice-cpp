#include <iostream>
#include <chrono>
#include <thread>
using namespace std;
using namespace std::chrono;
using namespace std::this_thread;

int main()
{
    // 計測開始時間を取得
    auto t0 = high_resolution_clock::now();

    // 処理(sleep)
    sleep_for(milliseconds(1000));

    // 計測終了時間を取得
    auto t1 = high_resolution_clock::now();

    // 計測終了時間と計測開始時間の差分を表示
    cout << duration_cast<milliseconds>(t1 - t0).count() / 1000. << " s.\n";
}