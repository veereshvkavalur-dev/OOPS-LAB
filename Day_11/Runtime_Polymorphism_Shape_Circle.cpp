#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void draw()
    {
        cout << "Generic shape";
    }
};

class Circle : public Shape
{
public:
    void draw() override
    {
        cout << "Circle";
    }
};

int main()
{
    Shape *s = new Circle();

    s->draw();

    delete s;

    return 0;
}
