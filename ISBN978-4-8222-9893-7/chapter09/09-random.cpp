#include <iostream>
#include <random>
#include <map>
using namespace std;

int main()
{
    random_device engine;

    uniform_int_distribution<unsigned> dist1(1, 6);
    for (int i = 0; i < 10; i++) {
        cout << dist1(engine) << ", ";
    }
    cout << endl;

    uniform_real_distribution<double> dist2(0.0, 1.0);
    for (int i = 0; i < 5; i++) {
        cout << dist2(engine) << ", ";
    }
    cout << endl;

    map<int, int> frequency;
    normal_distribution<double> dist3(50.0, 5.0);
    for (int i = 0; i < 500; i++) {
        double x = dist3(engine);
        ++frequency[static_cast<int>(x)];
    }
    for (auto p : frequency) {
        cout << p.first << " | ";
        for (int i = 0; i < p.second; i++) cout << "*";
        cout << endl;
    }
}