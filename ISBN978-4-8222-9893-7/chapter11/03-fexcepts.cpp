#include <iostream>
#include <cmath>
#include <cfenv>
using namespace std;

void report_fexcepts()
{
    if (fetestexcept(FE_DIVBYZERO)) cout << "FE_DIVBYZERO\n";
    if (fetestexcept(FE_INEXACT)) cout << "FE_INEXACT\n";
    if (fetestexcept(FE_OVERFLOW)) cout << "FE_OVERFLOW\n";
    if (fetestexcept(FE_UNDERFLOW)) cout << "FE_UNDERFLOW\n";
    if (fetestexcept(FE_INVALID)) cout << "FE_INVALID\n";
    feclearexcept(FE_ALL_EXCEPT);
    cout << endl;
}

int main()
{
    double d;
    float f;

    d = 0;
    cout << 1.0 / d << endl;
    report_fexcepts();

    d = 1e300;
    f = d;
    cout << f << endl;
    report_fexcepts();

    d = 1e-300;
    f = d;
    cout << f << endl;
    report_fexcepts();

    cout << sqrt(-1.0) << endl;
    report_fexcepts();
}