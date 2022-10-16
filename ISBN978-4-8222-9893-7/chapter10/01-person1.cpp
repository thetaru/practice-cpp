#include <iostream>
#include <vector>
using namespace std;

struct Person
{
    string name;
    int age;
};

int main()
{
    Person taro;
    taro.name = "Taro";
    taro.age = 32;
    cout << taro.name << " (" << taro.age << ")\n";

    Person jiro {};
    cout << jiro.name << " (" << jiro.age << ")\n";

    Person* pHanako = new Person { "Hanako", 27 };
    cout << pHanako->name << " (" << pHanako->age << ")\n";
    delete pHanako;

    Person people[5];
    people[0].name = "Masato";
    people[0].age = 0;
    cout << people[0].name << " (" << people[0].age << ")\n";

    vector<Person> vec;
    vec.emplace_back();
    vec[0].name = "Hanako";
    vec[0].age = 27;
    cout << vec[0].name << " (" << vec[0].age << ")\n";
}