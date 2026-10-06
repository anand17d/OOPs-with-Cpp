//A software company wants to develop a Student Information System where 
//student details must remain protected from unauthorized modification. 
//Design a suitable class hierarchy demonstrating data hiding, controlled 
//access to class members, and member functions defined outside the class. 
//Justify your design choices and implement at least one member function as 
//an inline function outside the class definition

#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;

public:
    void setName(string n);
    string getName();
};

// Function defined outside the class
void Person::setName(string n) {
    name = n;
}

string Person::getName() {
    return name;
}


class Student : public Person {
private:
    int rollNo;
    float marks;

public:
    // Member functions declared inside
    void setStudentDetails(int r, float m);
    void displayDetails();

    // Inline function defined outside the class
    inline int getRollNo() {
        return rollNo;
    }

    float getMarks();
};


// Function definitions outside the class
void Student::setStudentDetails(int r, float m) {
    rollNo = r;
    marks = m;
}

void Student::displayDetails() {
    cout << "Name   : " << name << endl;
    cout << "Roll No: " << rollNo << endl;
    cout << "Marks  : " << marks << endl;
}

float Student::getMarks() {
    return marks;
}


int main() {

    Student s;

    s.setName("Anand");
    s.setStudentDetails(101, 88.5);

    s.displayDetails();

    cout << "Roll Number: " << s.getRollNo() << endl;
    cout << "Marks: " << s.getMarks() << endl;

    return 0;
}



