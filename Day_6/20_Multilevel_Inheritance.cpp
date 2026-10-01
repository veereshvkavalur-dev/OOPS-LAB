#include <iostream>
using namespace std;

class Person {
protected:
    string name;
public:
    void setName(string n) { name = n; }
};

class Student : public Person {
protected:
    int rollNo;
public:
    void setRoll(int r) { rollNo = r; }
};

class Result : public Student {
    float marks;
public:
    void setMarks(float m) { marks = m; }
    void display() const {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Result r;
    r.setName("Veeresh");
    r.setRoll(118);
    r.setMarks(85.5f);
    r.display();
    return 0;
}
