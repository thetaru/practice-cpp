#include <iostream>
#include <string>
using namespace std;

struct Person
{
public:
    string* name;
    int age;
    Person()
        : name(new string)
    { }
    Person(const Person& x)
        : name(new string(*(x.name))), age(x.age)
    { }
    ~Person()
    {
        delete name;
    }
};

int main()
{
    Person taro;
    *taro.name = "Taro";
    taro.age = 32;

    Person A = taro;
    cout << *A.name << " (" << A.age << ")" << endl;

    *taro.name = "Jiro";
    cout << *A.name << " (" << A.age << ")" << endl;
}