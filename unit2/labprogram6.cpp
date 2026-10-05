#include <iostream>
using namespace std;

class Student
{
    int id;
    string name;

public:

    
    Student()
    {
        id = 0;
        name = "Unknown";
        cout << "Default Constructor called" << endl;
    }

    
    Student(int i, string n)
    {
        id = i;
        name = n;
        cout << "Parameterized Constructor called" << endl;
    }

    
    Student(const Student &s)
    {
        id = s.id;
        name = s.name;
        cout << "Copy Constructor called" << endl;
    }

    void display()
    {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
    }


    ~Student()
    {
        cout << "Destructor called for " << name << endl;
    }
};

int main()
{
    cout << "Creating object using Default Constructor:" << endl;
    Student s1;
    s1.display();

    cout << "\nCreating object using Parameterized Constructor:" << endl;
    Student s2(101, "Anand");
    s2.display();

    cout << "\nCreating object using Copy Constructor:" << endl;
    Student s3 = s2;
    s3.display();

    cout << "\nEnd of main()" << endl;

    return 0;
}