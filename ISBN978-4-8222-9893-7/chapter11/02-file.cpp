#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream infile("test.txt");

    if (!infile)
    {
        cout << "not found" << endl;
    }
    else
    {
        string line;
        while (getline(infile, line))
        {
            cout << line << endl;
        }
    }
}