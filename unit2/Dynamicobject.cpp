#include <iostream>
 #include <memory>
using namespace std;
class Student
{
 int roll;
 string name;
public:
 Student(int r, string n) : roll{r}, name{n}
 {
 cout << "Constructor Called: " << name << endl;
 }
 ~Student()
 {
 cout << "Destructor Called: " << name << endl;
 }
 void show()
 {
 cout << roll << ", " << name << endl;
 }
};
 
int main()
{
 Student s1(5, "Manish");
    Student *s2 = new Student(10, "Mukesh");

 unique_ptr<Student> s3 = make_unique<Student>(15, "Manjeet");
     delete s2;
      s3->show();
       (* s3).show();

 cout << "s3= " << s3.get() << endl;
 
          auto s5 = move(s3); 
 
         if (s3 == nullptr)
        cout << "S3 is empty now" << endl;
            s5->show();
    cout << "s5= " << s5.get() << endl;

      auto s6 = s5.release(); 
         delete s6; 
         return 0;
}