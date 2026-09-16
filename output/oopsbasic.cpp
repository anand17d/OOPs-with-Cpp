#include <iostream>
using namespace std;

class student {
public:
    int marks;
};

void display(student s) {
    cout << "marks " << s.marks;
}

int main() {
    student s;
    s.marks = 85;
    display(s);
    return 0;
}