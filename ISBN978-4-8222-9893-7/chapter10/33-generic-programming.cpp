#include <iostream>
using namespace std;

struct Circle
{
public:
    void draw()
    { cout << "○" << endl; }
};

struct Rectangle
{
public:
    void draw()
    { cout << "□" << endl; }
};

template <typename T>
void makeDraw(T t)
{
    t.draw();
}

int main()
{
    Circle c;
    makeDraw(c);
    Rectangle r;
    makeDraw(r);
}