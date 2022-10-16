#include <iostream>
using namespace std;

template <typename T>
struct Point
{
private:
public:
    T x, y;
    Point(T x, T y)
        : x(x), y(y)
    { }
    T squareSum()
    { return x*x + y*y; }
};

int main()
{
    Point<int> a(3, 4);
    cout << a.squareSum() << endl;

    Point<double> b(3.0, 4.0);
    cout << b.squareSum() << endl;
}