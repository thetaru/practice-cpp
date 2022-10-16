#include <iostream>
#include <string>
using namespace std;

struct Person
{
private:
    string name;
public:
    int age;
};

int main()
{
    Person taro;
    // taro.name = "Taro" // nameはprivateなので、アクセス禁止
    taro.age = 32;
}
