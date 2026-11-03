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
    void draw()
    {
        cout << "Circle";
    }
};

class Square : public Shape
{
public:
    void draw()
    {
        cout << "Square";
    }
};

class Triangle : public Shape
{
public:
    void draw()
    {
        cout << "Triangle";
    }
};

int main()
{
    Shape *s1 = new Circle();
    Shape *s2 = new Square();
    Shape *s3 = new Triangle();

    s1->draw();
    cout << endl;

    s2->draw();
    cout << endl;

    s3->draw();
    cout << endl;

    delete s1;
    delete s2;
    delete s3;

    return 0;
}
