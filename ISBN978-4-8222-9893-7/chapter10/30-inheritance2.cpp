#include <iostream>
using namespace std;

class Person
{
protected: // サブクラスでも操作できるようにする
    string name;
    int age;
public:
    Person(const string& newName, int newAge)
        : name(newName), age(newAge)
    { }
    void eat()
    { cout << name << ": eat()\n"; }
    void show()
    { cout << name << " (" << age << ")\n"; }
};

class Student : public Person
{
private:
    int id;
public:
    Student(const string& newName, int newAge, int newId)
        : Person(newName, newAge), id(newId)
    { }
    void study()
    { cout << name << " (id:" << id << "): study()\n"; }
};

int main()
{
    Student s("Hanako", 22, 1);
    s.show();
    s.eat();
    s.study();

    Person p("Taro", 32);
    p.show();
    p.eat();
}