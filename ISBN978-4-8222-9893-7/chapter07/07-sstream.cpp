#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;

int main()
{
    stringstream ss;
    int n = 123;
    ss << "[" << setw(5) << n << "]" << endl;
    string result = ss.str();
    cout << result << endl;
}