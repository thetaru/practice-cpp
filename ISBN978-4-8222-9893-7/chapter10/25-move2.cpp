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
};

Person f()
{
    Person taro;
    *taro.name = "Taro";
    taro.age = 32;
    taro.vec.push_back(1);
    taro.vec.push_back(2);
    taro.vec.push_back(3);
    return taro;
}

int main()
{
    Person A = f();
    cout << *A.name << ": " << A.vec.size() << endl;
}