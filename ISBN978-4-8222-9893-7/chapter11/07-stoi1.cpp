#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a;
    try
    {
        a = stoi("abc");
        cout << a << endl;
    }
    catch (invalid_argument& e)
    {
        cerr << e.what() << endl;
    }
    cout << "正常終了\n";
}