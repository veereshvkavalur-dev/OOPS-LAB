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
    void show() override
    {
        cout << "Deriv2" << endl;
    }
};

int main()
{
    Base *ptr;

    Base b;
    Deriv1 dv1;
    Deriv2 dv2;

    ptr = &dv2;

    ptr->show();

    b.show();
    dv1.show();
    dv2.show();

    return 0;
}
