#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_no;
    string name;

public:
    Student(int a, string b) : roll_no(a), name(b) {}
};

class Test
{
protected:
    int marks[5];

public:
    void input_marks()
    {
        cout << "Enter the Subject Marks out of 100\n";

        for (int i = 0; i < 5; i++)
        {
            cout << "Enter the Marks of Subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }
};

class Result : public Student, public Test
{
    int total_marks;
    float percentage;

public:
    Result(int a, string b) : Student(a, b) {}

    void calculate_total_marks()
    {
        total_marks = 0;

        for (int i = 0; i < 5; i++)
        {
            total_marks += marks[i];
        }
    }

    void calculate_percentage()
    {
        percentage = total_marks / 5.0;
    }

    void display_result()
    {
        cout << "\nStudent Name: " << name;
        cout << "\nRoll Number: " << roll_no;

        for (int i = 0; i < 5; i++)
        {
            cout << "\nSubject " << i + 1 << " Marks: " << marks[i];
        }

        cout << "\nTotal Marks: " << total_marks << "/500";
        cout << "\nPercentage: " << percentage << "%" << endl;
    }
};

int main()
{
    Result r1(632, "Kingson");

    r1.input_marks();
    r1.calculate_total_marks();
    r1.calculate_percentage();
    r1.display_result();

    return 0;
}
