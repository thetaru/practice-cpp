#include <iostream>
#include <vector>
using namespace std;

struct Person
{
public:
    string name;
    int age;
    vector<int> vec;
};

Person f()
{
    Person taro;
    taro.name = "Taro";
    taro.age = 32;
    taro.vec.push_back(1);
    taro.vec.push_back(2);
    taro.vec.push_back(3);
    return taro;
}

int main()
{
    Person A = f();
    cout << A.name << ": " << A.vec.size() << endl;
}