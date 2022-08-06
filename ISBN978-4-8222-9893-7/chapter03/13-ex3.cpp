#include <iostream>
#include <complex>
#include <memory>
using namespace std;

int main()
{
    typedef complex<double> cplx;

    auto z = make_shared<cplx>(5., 10.);
    cout << z->real() << endl;
    cout << abs(*z) << endl;
}