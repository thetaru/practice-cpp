#include <iostream>
#include <vector>
using namespace std;

struct Shape
{
public:
    virtual void draw() = 0;
};

struct Circle : public Shape
{
public:
    void draw()
    { cout << "○" << endl; }
};

struct Rectangle : public Shape
{
public:
    void draw()
    { cout << "□" << endl; }
};

int main()
{
    Circle c;
    c.draw();
    Rectangle r;
    r.draw();

    vector<Shape*> shapes = { &c, &r };

    for (auto s : shapes) { s->draw(); }
}