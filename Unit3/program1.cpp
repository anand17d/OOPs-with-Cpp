//create a class printer with overloaded printer functions to di
//an integer a floating point number a string two integers

#include <iostream>
using namespace std;

class Printer
{
public:
    // Print an integer
    void print(int a)
    {
        cout << "Integer: " << a << endl;
    }

    // Print a floating-point number
    void print(float a)
    {
        cout << "Float: " << a << endl;
    }

    // Print a string
    void print(string a)
    {
        cout << "String: " << a << endl;
    }

    // Print two integers
    void print(int a, int b)
    {
        cout << "Two integers: " << a << " " << b << endl;
    }
};

int main()
{
    Printer p;

    p.print(10);
    p.print(10.5f);
    p.print("Hello");
    p.print(10, 20);

    return 0;
}

