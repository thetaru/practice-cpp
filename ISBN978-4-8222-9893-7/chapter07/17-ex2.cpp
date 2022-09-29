#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    double x = 0.1;
    stringstream ss;
    ss << setprecision(14) << hexfloat << x;
    string result1 = ss.str();
    cout << result1 << endl;

    double y = stod(result1);
    cout << (x == y ? "equal" : "not equal") << endl;
}