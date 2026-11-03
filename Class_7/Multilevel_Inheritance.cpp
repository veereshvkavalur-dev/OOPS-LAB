```cpp
#include <iostream>
using namespace std;

class vehicle
{
    int no_of_wheels = 4, no_of_doors = 5;

public:
    void display1()
    {
        cout << "The vehicle class: No. of Wheels: "
             << no_of_wheels
             << "\nNo. of Doors: " << no_of_doors << endl;
    }
};

class car : public vehicle
{
    string color = "Blue";
    string type = "SUV";

public:
    void display2()
    {
        cout << "The color: " << color
             << "\nThe Type: " << type << endl;
    }
};

class sports_car : public car
{
    int cc = 1400;

public:
    void display3()
    {
        cout << "The CC is: " << cc << endl;
    }
};

int main()
{
    vehicle v;
    car c;
    sports_car s;

    v.display1();

    cout << endl;

    c.display1();
    c.display2();

    cout << endl;

    s.display1();
    s.display2();
    s.display3();

    return 0;
}
```
