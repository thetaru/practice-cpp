#include <iostream>
using namespace std;

struct Person
{
    string name;
    int age;

    void show()
    {
        cout << name << " (" << age << ")\n";
    }
};

int main()
{
    Person taro { "Taro", 32 };
    taro.show();

    Person* pHanako = new Person { "Hanako", 27 };
    pHanako->show();
    delete pHanako;
}