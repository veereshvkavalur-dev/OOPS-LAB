#include <iostream>
using namespace std;

class Counter {
    int val;

public:
    Counter(int v = 0) : val(v) {}

    // Prefix decrement
    Counter& operator--() {
        val--;
        return *this;
    }

    // Postfix decrement
    Counter operator--(int) {
        Counter temp = *this;
        val--;
        return temp;
    }

    int get() {
        return val;
    }
};

int main() {
    Counter c;

    c--;
    cout << "The returned value is: " << c.get() << endl;

    --c;
    cout << "The returned value is: " << c.get() << endl;

    return 0;
}
