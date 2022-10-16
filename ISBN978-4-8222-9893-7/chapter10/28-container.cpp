#include <iostream>
#include <vector>
#include <set>
#include <unordered_set>
#include <algorithm>
using namespace std;

struct Person
{
    string name;
    int age;
    Person() = default;
    Person(const string& newName, int newAge)
        : name(newName), age(newAge)
    { }

    // ==演算子を定義
    // 名前と年齢が等しければTrue それ以外はFalseを返す
    bool operator==(const Person& p) const
    {
        return name == p.name && age == p.age;
    }

};

// <演算子を定義
// 名前を辞書順で比較する
bool operator<(const Person& lhs, const Person& rhs)
{
    return lhs.name < rhs.name;
}

namespace std
{
    template<>
    struct hash<Person>
    {
        size_t operator() (const Person& p) const
        {
            return hash<string>() (p.name) ^ hash<int>() (p.age);
        }
    };
}

int main()
{
    vector<Person> people(5);

    vector<Person> peopleVec;
    Person taro("Taro", 32);
    peopleVec.push_back(taro);
    peopleVec.emplace_back("Hanako", 27);
    peopleVec.emplace_back("Masato", 0);

    sort(peopleVec.begin(), peopleVec.end());
    for (auto& p : peopleVec) cout << p.name << ", ";
    cout << endl;

    set<Person> peopleSet;
    peopleSet.emplace("Taro", 32);
    peopleSet.emplace("Hanako", 27);
    peopleSet.emplace("Masato", 0);
    for (auto& p : peopleSet) cout << p.name << ", ";
    cout << endl;

    unordered_set<Person> peopleUSet;
    peopleUSet.emplace("Taro", 32);
    peopleUSet.emplace("Hanako", 27);
    peopleUSet.emplace("Masato", 0);
    for (auto& p : peopleUSet) cout << p.name << ", ";
    cout << endl;
}