#include <iostream>
using namespace std;

class Student {
    string name;
    int marks[3];
public:
    void input() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter marks in 3 subjects: ";
        for (int &m : marks) cin >> m;
    }
    void display() const {
        cout << "Student: " << name << endl;
        cout << "Marks: ";
        for (int m : marks) cout << m << ' ';
        cout << endl;
    }
};

int main() {
    Student s;
    s.input();
    s.display();
    return 0;
}
