#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int rollNo;
    float marks;

    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s;

    s.name = "Rahul";
    s.rollNo = 101;
    s.marks = 87.5;

    s.display();

    return 0;
}