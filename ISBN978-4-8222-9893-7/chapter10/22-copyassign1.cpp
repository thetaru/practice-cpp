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

    Person A;
    A = taro;

    taro.name = "Jiro";
    cout << A.name << " (" << A.age << ")\n";
}