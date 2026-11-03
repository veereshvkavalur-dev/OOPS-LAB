#include <iostream>
using namespace std;

class Student
{
    int roll_no;
    string name;

public:
    Student(int a, string b) : roll_no(a), name(b)
    {
    }
};

class Test
{
    int marks;

public:
    Test(int c) : marks(c)
    {
    }
};

class Result : public Student, public Test
{
    int total_marks;
    float percentage;

public:
    Result(int d, float e, int r, string n, int m)
        : Student(r, n), Test(m),
          total_marks(d), percentage(e)
    {
    }

    void display()
    {
        cout << "Total Marks: " << total_marks << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

int main()
{
    Result r1(97, 85.7, 632, "Kingson", 65);

    r1.display();

    return 0;
}
