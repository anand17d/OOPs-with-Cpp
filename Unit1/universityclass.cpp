//create a university class with private university name and a nested department
 //class with a private department name write suitable member function to display both.

 #include <iostream>
using namespace std;

class University {
private:
    string universityName;

    class Department {
    private:
        string departmentName;

    public:
        Department(string dept) {
            departmentName = dept;
        }

        void displayDepartment() {
            cout << "Department Name: " << departmentName << endl;
        }
    };

    Department dept;

public:
    University(string university, string department)
        : dept(department) {
        universityName = university;
    }

    void display() {
        cout << "University Name: " << universityName << endl;
        dept.displayDepartment();
    }
};

int main() {
    University u("AKTU", "Computer Science and Engineering");

    u.display();

    return 0;
}