#include <iostream>
using namespace std;

class Student {
public:
    int roll;
    string name;
    float marks;

    void input() {
        cout << "Enter Roll No: ";
        cin >> roll;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display() {
        cout << "Roll No: " << roll << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {

    Student s[3];

    for (int i = 0; i < 3; i++) {
        cout << "Enter details of Student " << i + 1 << endl;
        s[i].input();
    }

    cout << "--- Student Details ---"<<endl;

    for (int i = 0; i < 3; i++) {
        cout << "Student " << i + 1 << endl;
        s[i].display();
    }

    return 0;
}