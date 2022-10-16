#include <iostream>
using namespace std;

struct Person
{
public:
    string name;
    int age;
};

int main()
{
    Person taro { "Taro", 32 };

    Person A = taro;
    cout << A.name << " (" << A.age << ")\n";

    // コピーなのでメンバの値を変更しても元のメンバに影響なし
    taro.name = "Jiro";
    cout << A.name << " (" << A.age << ")\n";
}