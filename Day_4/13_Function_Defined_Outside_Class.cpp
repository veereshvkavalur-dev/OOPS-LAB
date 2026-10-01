#include <iostream>
using namespace std;

class Calculator {
    int a, b;
public:
    void setValues(int x, int y);
    int sum() const;
};

void Calculator::setValues(int x, int y) { a = x; b = y; }
int Calculator::sum() const { return a + b; }

int main() {
    Calculator c;
    c.setValues(12, 18);
    cout << "Sum = " << c.sum() << endl;
    return 0;
}
