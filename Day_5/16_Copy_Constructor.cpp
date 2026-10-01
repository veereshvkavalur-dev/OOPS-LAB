#include <iostream>
using namespace std;

class Sample {
    int value;
public:
    Sample(int v) : value(v) {}
    Sample(const Sample& other) : value(other.value) {}
    void show() const { cout << "Value = " << value << endl; }
};

int main() {
    Sample first(50);
    Sample second(first);
    cout << "Original object: "; first.show();
    cout << "Copied object: "; second.show();
    return 0;
}
