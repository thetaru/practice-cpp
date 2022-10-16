#include <iostream>
#include <vector>
using namespace std;

struct X
{
public:
    vector<double> vec;
    X() = default;
    X(const X& x)
        : vec(x.vec)
    { }
    X(X&& x) noexcept
        : vec(move(x.vec))
    { }
};

X f()
{
    X x;
    x.vec.resize(100000);
    return x;
}

int main()
{
    for (int i = 0; i < 1000; i++) X x(f());
}