//create a class employee containing salary and pass an object to a function calculate annual salary


#include <iostream>
using namespace std;

class Employee {
public:
    int salary;

    Employee(int s) {
        salary = s;
    }
};

void calculateAnnualSalary(Employee e) {
    int annualSalary = e.salary * 12;
    cout << "Annual Salary = " << annualSalary << endl;
}

int main() {
    Employee emp(30000);

    calculateAnnualSalary(emp);

    return 0;
}