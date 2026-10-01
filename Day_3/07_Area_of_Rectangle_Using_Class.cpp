#include <iostream>
using namespace std;

class Rectangle {
    double length, width;
public:
    void read() { cin >> length >> width; }
    double area() const { return length * width; }
};

int main() {
    Rectangle r;
    cout << "Enter length and width: ";
    r.read();
    cout << "Area = " << r.area() << endl;
    return 0;
}
