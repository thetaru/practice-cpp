#include <iostream>
#include <string>
#include <memory>
using namespace std;

struct Person
{
public:
    string name;
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
    Person* pA3 = new Person("Saburo");
    auto pA4 = make_shared<Person>("Shiro");

    cout << a1.name << endl;
    cout << pA2->name << endl;
    cout << pA3->name << endl;
    cout << pA4->name << endl;

    delete pA2;
    // delete pA3; // pA3は解体されない
}