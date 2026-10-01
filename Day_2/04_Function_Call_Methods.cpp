#include <iostream>
using namespace std;

void passByValue(int x) { x += 10; cout << "Inside pass-by-value: " << x << endl; }
void passByReference(int &x) { x += 10; cout << "Inside pass-by-reference: " << x << endl; }

int main() {
    int a = 20, b = 20;
    passByValue(a);
    passByReference(b);
    cout << "After pass-by-value: " << a << endl;
    cout << "After pass-by-reference: " << b << endl;
    return 0;
}
