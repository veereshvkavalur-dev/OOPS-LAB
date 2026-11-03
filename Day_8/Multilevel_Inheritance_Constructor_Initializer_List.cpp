```cpp
#include <iostream>
using namespace std;

class Person
{
public:
    void display1()
    {
        cout << "Person Class" << endl;
    }
};

class Student : public Person
{
public:
    void display2()
    {
        cout << "Student Class" << endl;
    }
};

class IT_Student : public Student
{
    string name, usn;
    float cgpa;

public:
    IT_Student(string a, string b, float c)
        : Student(), name(a), usn(b), cgpa(c)
    {
    }

    void display3()
    {
        cout << "IT_Student Class" << endl;
        cout << "Name: " << name << endl;
        cout << "USN: " << usn << endl;
        cout << "CGPA: " << cgpa << endl;
    }
};

int main()
{
    Person p;
    Student s;
    IT_Student i("Kingson", "01FE23BEC331", 8.57);

    p.display1();

    cout << endl;

    s.display2();
    s.display1();

    cout << endl;

    i.display3();
    i.display2();
    i.display1();

    return 0;
}
```
