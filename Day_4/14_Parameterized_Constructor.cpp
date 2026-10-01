#include <iostream>
using namespace std;

class Box {
    double length;
public:
    Box(double l) : length(l) {}
    double volume() const { return length * length * length; }
};

int main() {
    double side;
    cout << "Enter side of cube: ";
    cin >> side;
    Box b(side);
    cout << "Volume = " << b.volume() << endl;
    return 0;
}
