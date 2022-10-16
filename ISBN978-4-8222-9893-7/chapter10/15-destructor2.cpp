#include <iostream>
#include <string>
using namespace std;

struct A
{
public:
    ~A()
    {
        cout << "Aオブジェクトは解体された\n";
    }
};

struct Person
{
public:
    string name;
    A a;
    Person(const string& newName)
        : name(newName)
    { }

    ~Person()
    {
        cout << name << "は解体された\n";
    }
};

int main()
{
    Person a1("Taro");
    Person* pA2 = new Person("Jiro");
    delete pA2;
}