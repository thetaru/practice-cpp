#include <iostream>
using namespace std;

struct Person
{
public:
    string name;
    int age;

    Person()
    { }

    Person(const string& newName, int newAge)
        : name(newName), age(newAge)
    { }
};

int main()
{
    Person people[5];
    cout << end(people) - begin(people) << endl;

    Person taro("Taro", 32);
    cout << taro.name << " (" << taro.age << ")\n";
}