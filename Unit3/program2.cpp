#include <iostream>
using namespace std;
class marks{
    int intmarks;
    int extmarks;
    public:
       int sum;
       marks(int i,int e){
           intmarks=i;
           extmarks=e;
       }
    void operator++(int){
        sum=intmarks+extmarks;
    }  
    void display(){
        cout<<sum<<endl;
    }
};
int main()
{
    marks m(10,12);
    m++;
    m.display();
    return 0;
}