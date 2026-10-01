#include <iostream>
using namespace std;

class Employee {
    int id;
    string name;
    double salary;
public:
    void input() {
        cout << "Enter ID, name and salary: ";
        cin >> id >> name >> salary;
    }
    void display() const {
        cout << "ID: " << id << "\nName: " << name << "\nSalary: " << salary << endl;
    }
};

int main() {
    Employee e;
    e.input();
    e.display();
    return 0;
}
