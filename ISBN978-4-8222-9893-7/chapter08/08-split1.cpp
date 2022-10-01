#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream datafile("08-test.dat");
    string label;
    int x, y, z;
    while (datafile >> label >> x >> y >> z) {
        cout << label << ": " << x + y + z << endl; 
    }
    datafile.close();
}