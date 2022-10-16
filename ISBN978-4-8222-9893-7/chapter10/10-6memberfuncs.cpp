#include <iostream>
#include <string>
using namespace std;

struct Person
{
public:
    string name;
    int age;
};

Person f()
{
    Person masato;
    masato.name = "Masato";
    masato.age = 0;
    return masato;
}

int main()
{
    // Case 1
    Person taro;
    taro.name = "Taro";
    taro.age = 32;

    // Case 2
    Person A = taro;
    cout << A.name << endl;

    // Case 3
    Person B;
    B = taro;
    cout << B.name << endl;

    // Case 4
    Person C = f();
    cout << C.name << endl;
}