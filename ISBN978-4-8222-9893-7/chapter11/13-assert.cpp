#include <iostream>
#include <cassert>

int main()
{
    int low, mid, high;

    low = 0;
    mid = 10;
    high = 5;

    assert(low <= mid && mid <= high);
    std::cout << "正常終了\n";
}