#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
    string name;
    int age;
public:
    void setName(const string& newName)
    { name = newName; }
    string getName()
    { return name; }
    void setAge(int newAge)
    { age = newAge; }
    int getAge()
    { return age; }
};

int main()
{
    Person taro;
    taro.setName("Taro");
    taro.setAge(32);
    cout << taro.getName() << " (" << taro.getAge() << ")\n";
}