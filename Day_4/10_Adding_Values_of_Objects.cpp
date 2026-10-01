#include <iostream>
using namespace std;

class Number {
    int value;
public:
    Number(int v = 0) : value(v) {}
    Number add(const Number& other) const { return Number(value + other.value); }
    void display() const { cout << value << endl; }
};

int main() {
    Number a(15), b(25);
    Number c = a.add(b);
    cout << "Sum = ";
    c.display();
    return 0;
}
