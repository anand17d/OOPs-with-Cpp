
#include <iostream>
using namespace std;
class person{
    public:
    int age;
    string name;
    person(int a,string n){
        age=a;
        name=n;
    }
    void display(){
        cout<<"age = "<<age<<endl;
        cout<<"name = "<<name<<endl;
    }
};
int main()
{
    person p1(45,"john");
    person p2(38,"steve");
    p1.display();
    p2.display();
    return 0;
}