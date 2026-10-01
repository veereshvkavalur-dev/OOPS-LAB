#include <iostream>
using namespace std;

class Complex {
    int real, imag;
public:
    Complex(int r = 0, int i = 0) : real(r), imag(i) {}
    Complex operator+(const Complex& c) const { return Complex(real + c.real, imag + c.imag); }
    void display() const { cout << real << (imag >= 0 ? " + " : " - ") << abs(imag) << "i" << endl; }
};

int main() {
    Complex a(3, 4), b(5, -2);
    Complex sum = a + b;
    cout << "Sum = ";
    sum.display();
    return 0;
}
