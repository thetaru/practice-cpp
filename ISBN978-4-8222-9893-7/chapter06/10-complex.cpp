#include <iostream>
#include <unordered_map>
#include <string>
#include <complex>
using namespace std;
using cplx = complex<double>;

int main()
{
    unordered_map<string, cplx> dic;

    cplx z(3., 4.);
    dic["A"] = z;

    dic["B"] = cplx(5., 12.);

    dic.emplace("C", 10);

    dic.emplace(piecewise_construct, forward_as_tuple("D"), forward_as_tuple(8., 15.));

    for (const auto& p : dic) {
        cout << p.first << ": " << p.second << endl;
    }

}