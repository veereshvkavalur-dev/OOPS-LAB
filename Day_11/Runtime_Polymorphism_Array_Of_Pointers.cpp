#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void draw()
    {
        cout << "Generic Shape" << endl;
    }
};

class Circle : public Shape
{
public:
    void draw()
    {
        cout << "Circle" << endl;
    }
};

class Square : public Shape
{
public:
    void draw()
    {
        cout << "Square" << endl;
    }
};

class Triangle : public Shape
{
public:
    void draw()
    {
        cout << "Triangle" << endl;
    }
};

int main()
{
    Shape *shapes[3] = {
        new Circle(),
        new Square(),
        new Triangle()
    };

    for (int i = 0; i < 3; i++)
    {
        shapes[i]->draw();
    }

    for (int i = 0; i < 3; i++)
    {
        delete shapes[i];
    }

    return 0;
}
