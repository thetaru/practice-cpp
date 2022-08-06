#include <iostream>
using namespace std;

int main()
{
    enum class choice1 { ROCK, SCISSORS, PAPER };
    choice1 x = choice1::ROCK;
    cout << (x == choice1::ROCK ? "グー" : "グー以外") << endl;

    enum choice2 { rock, scissors, papaer };
    choice2 y = rock;
    cout << y << endl;
}