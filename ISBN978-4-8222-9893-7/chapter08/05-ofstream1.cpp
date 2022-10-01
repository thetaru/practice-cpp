#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream outfile("test.txt", ios_base::out);
    outfile << "文字列を\n";
    outfile << "ファイルに書き込む" << endl;
    outfile.close();
}