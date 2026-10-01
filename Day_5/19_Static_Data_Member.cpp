#include <iostream>
using namespace std;

class Student {
    string name;
    static int count;
public:
    Student(string n) : name(n) { ++count; }
    static void showCount() { cout << "Number of objects = " << count << endl; }
};

int Student::count = 0;

int main() {
    Student a("A");
    Student b("B");
    Student c("C");
    Student::showCount();
    return 0;
}
