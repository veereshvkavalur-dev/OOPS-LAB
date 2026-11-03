```cpp
#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_no;
    string name;

public:
    Student(int roll, string studentName)
        : roll_no(roll), name(studentName)
    {
        cout << "Student class constructor called with roll number: "
             << roll_no << " and name: " << name << endl;
    }

    void displayStudent()
    {
        cout << "Roll Number: " << roll_no << endl;
        cout << "Name: " << name << endl;
    }
};

class Test
{
protected:
    int marks[3];

public:
    void inputTest()
    {
        for (int i = 0; i < 3; i++)
        {
            cout << "Enter marks for subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }

    void displayTest()
    {
        for (int i = 0; i < 3; i++)
        {
            cout << "Marks for subject " << i + 1
                 << ": " << marks[i] << endl;
        }
    }
};

class Result : public Student, public Test
{
public:
    Result(int roll, string studentName)
        : Student(roll, studentName)
    {
    }

    int calculateTotal()
    {
        return marks[0] + marks[1] + marks[2];
    }

    double calculatePercentage()
    {
        return calculateTotal() / 3.0;
    }

    void displayResult()
    {
        displayStudent();
        displayTest();

        cout << "Total Marks: " << calculateTotal() << endl;
        cout << "Percentage: " << calculatePercentage() << "%" << endl;
    }
};

int main()
{
    Result r(515, "Vrunda");

    r.inputTest();
    r.displayResult();

    return 0;
}
```
