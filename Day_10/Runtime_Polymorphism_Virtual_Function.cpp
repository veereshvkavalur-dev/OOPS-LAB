#include <iostream>
using namespace std;

class Base
{
public:
    virtual void show()
    {
        cout << "Base" << endl;
    }
};

class Deriv1 : public Base
{
public:
    void show()
    {
        cout << "Deriv1" << endl;
    }
};

class Deriv2 : public Base
{
public:
    void show()
    {
        cout << "Deriv2" << endl;
    }
};

int main()
{
    Deriv1 dv1;
    Deriv2 dv2;

    Base *ptr;

    ptr = &dv1;
    ptr->show();

    ptr = &dv2;
    ptr->show();

    return 0;
}
