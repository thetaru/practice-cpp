#include <iostream>
#include <string>
#include <memory>
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
    shared_ptr<A> pA;

    Person(const string& name)
        : name(name), pA(new A)
    { }

    ~Person()
    {
        cout << name << "は解体された\n";
    }
};

int main()
{
    Person a1("Taro");
    auto pA2 = make_shared<Person>("Jiro");
}