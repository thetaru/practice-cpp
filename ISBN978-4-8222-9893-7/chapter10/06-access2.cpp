#include <iostream>
#include <string>
using namespace std;

struct Person
{
    int age;
private:
    string name;
};

int main()
{
    Person taro;
    // taro.name = "Taro";
    taro.age = 32;
}