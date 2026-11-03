#include <iostream>
using namespace std;

class Animal
{
    int legs;
    int eyes;

public:
    Animal(int f, int h) : legs(f), eyes(h) {}

    void display1()
    {
        cout << "This is Base Class" << endl;
        cout << "\nLegs = " << legs << endl;
        cout << "\nEyes = " << eyes << endl;
    }
};

class Dog : public Animal
{
    string dog_tail_color;

public:
    Dog(int a, int b, string tail_color)
        : Animal(a, b), dog_tail_color(tail_color) {}

    void display2()
    {
        cout << "This is Derived Class" << endl;
        cout << "\nTail Color = " << dog_tail_color << endl;
    }
};

int main()
{
    Dog d1(7, 5, "brown");

    d1.display1();
    d1.display2();

    return 0;
}
