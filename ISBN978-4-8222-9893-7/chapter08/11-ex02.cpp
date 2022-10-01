#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream infile("numbers.txt");
    string line;
    int total = 0;
    while (getline(infile, line)) {
        total += stoi(line);
    }
    cout << total << endl;
}