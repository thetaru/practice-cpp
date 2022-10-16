#include <iostream>
#include <vector>
using namespace std;

struct Person
{
public:
    string* name;
    int age;
    vector<int> vec;
    Person()
        : name(new string)
    { }
    ~Person()
    { delete name; }
    Person(const Person& x)
        : name(new string(*(x.name))), age(x.age), vec(x.vec)
    {
        cout << "copy\n";
    }
    Person& operator=(const Person& x)
    {
        if (this != &x) {
            auto tmp = new string(*x.name);
            delete name;
            name = tmp;
            age = x.age;
        }
        return *this;
    }
    Person(Person&& x) noexcept
        : name(x.name), age(x.age), vec(move(x.vec))
    {
        x.name = nullptr;
        cout << "move\n";
    }
    Person& operator=(Person&& x) noexcept
    {
        cout << "moved\n";
        if (this != &x) {
            delete name;
            name = x.name;
            x.name = nullptr;
            age = x.age;
            vec = move(x.vec);
        }
        return *this;
    }
};

struct Wrapper
{
public:
    Person person;
};

int main()
{
    Wrapper w1, w2;
    *w1.person.name = "Taro";
    w1.person.age = 32;
    w2 = move(w1);
    cout << *w2.person.name << " (" << w2.person.age << ")" << endl;
}