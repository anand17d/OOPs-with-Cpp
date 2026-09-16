//create a class student containing the name and marks write a function compare makrs than except 
  //two student arguments as displays the student having higher marks

  #include <bits/stdc++.h>
using namespace std;

class student {
private:
    float marks;
    float total = 0;

public:
    void enter_marks() {
        cout<<"Enter the marks ";
        cin >> marks;
    }

    void add_marks(student m1, student m2) {
        total = m1.marks + m2.marks;
    }

    void display() {
        cout<<"Total marks ";
        cout << total << endl;
    }
};

int main() {
    student s1, s2;

    s1.enter_marks();
    s2.enter_marks();

    s1.add_marks(s1, s2);

    s1.display();

    return 0;
}