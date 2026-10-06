#include <iostream>
using namespace std;

class Student
{
    int marks;
    
    static int totalStudents;

public:

    Student(int m)
    {
        marks = m;
        totalStudents++;
    }

    void display()
    {
        cout << "Marks: " << marks << endl;
    }

    
    static void showTotalStudents()
    {
        cout << "Total Students: " << totalStudents << endl;
    }

    
    friend void showMarks(Student s);
};


int Student::totalStudents = 0;


void showMarks(Student s)
{
    cout << "Marks using Friend Function: " << s.marks << endl;
}

int main()
{
    Student s1(85);
    Student s2(90);
    Student s3(78);

    s1.display();
    s2.display();
    s3.display();

    cout << endl;

    
    Student::showTotalStudents();

    
    showMarks(s1);

    return 0;
}