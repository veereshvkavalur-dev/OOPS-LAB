#include <iostream>
using namespace std;

class Employee {
    int id;
    string name;
    double salary;
public:
    Employee() : id(0), name("Unknown"), salary(0) {}
    Employee(int i, string n, double s) : id(i), name(n), salary(s) {}
    void display() const {
        cout << id << " | " << name << " | " << salary << endl;
    }
};

int main() {
    Employee e1;
    Employee e2(101, "Veeresh", 45000);
    cout << "Default constructor object: "; e1.display();
    cout << "Parameterized constructor object: "; e2.display();
    return 0;
}
