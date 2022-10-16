#include <iostream>
using namespace std;

struct A
{
public:
    int x;
    explicit A(int newX)
        : x(newX)
    { cout << "A(int newX) is called.\n"; };
};

int main()
{
    // A a = 5; // 暗黙の型変換を禁止しているため、エラーとなる
    A a(5);
}