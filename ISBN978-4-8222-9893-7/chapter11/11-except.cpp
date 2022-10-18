#include <iostream>
using namespace std;

[[noreturn]]
void doSomething()
{
    throw runtime_error("何か異常が起きた");
}

int main()
{
    try
    {
        doSomething();
    }
    catch (exception& e)
    {
        cerr << e.what() << endl;
    }
}