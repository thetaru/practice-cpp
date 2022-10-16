#include <iostream>
using namespace std;

struct Person
{
public:
    string* name;
    int age;
    Person()
        : name(new string)
    { } // constructor
    ~Person()
    { delete name; } // destructor
    Person(const Person& x)
        : name(new string(*(x.name))), age(x.age)
    { } // copy constructor
    Person& operator=(const Person& x)
    {
        if (this != &x) {
            auto tmp = new string(*x.name);
            delete name;
            name = tmp;
            age = x.age;
            cout << "new address assigned\n";
        }
        return *this;
    }
};

int main()
{
    Person taro;
    *taro.name = "Taro";
    taro.age = 32;

    Person A;
    A = taro;

    *taro.name = "Jiro";
    cout << *A.name << " (" << A.age << ")\n";
}