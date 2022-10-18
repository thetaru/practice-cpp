#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v{ 2, 3, 5 };
    try
    {
        cout << v.at(3) << endl;
    }
    catch (out_of_range& e)
    {
        cerr << e.what() << endl;
    }
    cout << "正常終了\n";
}