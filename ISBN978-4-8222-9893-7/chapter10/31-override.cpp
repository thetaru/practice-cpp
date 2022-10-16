#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Person
{
protected:
    string name;
    int age;
public:
    Person(const string& name, int age)
        : name(name), age(age)
    { }    
    void eat()
    { cout << "eat()\n"; }
    virtual void show()
    { cout << name << " (" << age << ")\n"; }
    virtual ~Person()
    { }
};

class Student : public Person
{
private:
    int id;
public:
    Student(string name, int age, int id)
        : Person(name, age), id(id)
    { }    
    void study()
    { cout << name << " (id:" << id << "): study()\n"; }
    void show() override
    { cout << id << ": " << name << " (" << age << ")\n"; }
};

int main()
{
    Person p("Taro", 32);
    p.show();

    Student s("Hanako", 22, 1);
    s.show();

    vector<Person*> people = { &p, &s };
    for (auto p : people) { p->show(); }
}