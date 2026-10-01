#include <iostream>
using namespace std;

int main() {
    int age = 22;
    float height = 165.5f;
    double percentage = 82.75;
    char grade = 'A';
    bool passed = true;

    cout << "Integer: " << age << endl;
    cout << "Float: " << height << endl;
    cout << "Double: " << percentage << endl;
    cout << "Character: " << grade << endl;
    cout << "Boolean: " << boolalpha << passed << endl;
    return 0;
}
