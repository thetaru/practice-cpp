#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream outfile("numbers.txt", ios_base::out);
    for (int i = 1; i <= 1000; i++) {
        outfile << i << endl;
    }
    outfile.close();
}