#include <iostream>
using namespace std;

struct Person
{
    string name;
    int age;
    void show();
};

void Person::show()
{
    cout << name << " (" << age << ")\n";
}

int main()
{
    // 変数がオブジェクトのとき
    Person taro { "Taro", 32 };
    taro.show();

    // 変数がオブジェクトを指すポインタのとき
    Person* pHanako = new Person { "Hanako", 27 };
    pHanako->show();
    delete pHanako;
}

