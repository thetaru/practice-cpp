#include <iostream>
#include <vector>
#include <complex>
using namespace std;
using cplx = complex<double>;

int main()
{
    vector<cplx> v;

    cplx z(3., 4.);
    // v.push_back(z);
    v.emplace_back(1., 2.);
    for (auto x : v) cout << x << ", ";
    cout << endl;
}