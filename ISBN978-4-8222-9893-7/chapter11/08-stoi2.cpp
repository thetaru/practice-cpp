#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a;
    try
    {
        a = stoi("18446744073709551616");
        cout << a << endl;
    }
    catch (out_of_range& e)
    {
        cerr << e.what() << endl;
    }
    cout << "正常終了\n";
}