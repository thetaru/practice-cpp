#include <iostream>
#include <string>
using namespace std;

struct Person
{
public:
    string name;
    int age;
    Person()
    { cout << "constructor" << endl; }
    Person(const Person& x)
        : name(x.name), age(x.age)
    { cout << "copy" << endl; }    
    Person(Person&& x) noexcept
        : name(move(x.name)), age(x.age)
    { cout << "move" <<endl; }    
    Person& operator=(const Person& x) noexcept
    {
        name = x.name;
        age = x.age;
        cout << "assign" << endl;
        return *this;
    }
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
    cout << "# constructor" << endl;
    Person taro;
    taro.name = "Taro";
    taro.age = 32;

    // Case 2
    cout << "# copy constructor" << endl;
    Person A = taro;
    cout << A.name << endl;

    // Case 3
    cout << "# assign" << endl;
    Person B;
    B = taro;
    cout << B.name << endl;

    // Case 4
    cout << "# move constructor" << endl;
    Person C = f();
    cout << C.name << endl;
}