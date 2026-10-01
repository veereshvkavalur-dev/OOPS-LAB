#include <iostream>
using namespace std;

class Student {
    string name;
    int rollNo;
public:
    void setDetails(string n, int r) { name = n; rollNo = r; }
    void show() const {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
    }
};

int main() {
    Student s;
    string name;
    int roll;
    cout << "Enter name and roll number: ";
    cin >> name >> roll;
    s.setDetails(name, roll);
    s.show();
    return 0;
}
