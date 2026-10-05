//create a class power with overloaded calaculate functions.calculate sqauare of integers
//calaculate cube if integrs and caclulate y power of x .

#include<iostream>
using namespace std;

class Power {
        public:
        int num;
        int powere;
        
        void calculate(float a){
                cout<<"square of integers :"<<a*a<<endl;
        }
        void  calculate(int a){
                cout<<"cube of integers :"<<a*a*a<<endl;
        }
        int calculate(int a,int powere){
                if(powere==0){
                        return 1;
                }
                 return a*calculate(a,powere-1);
        }


};
     int main(){
           Power p;
           p.num=2;
           p.powere=5;
           p.calculate((float)p.num);
           p.calculate(p.num);

         cout<<"value of a with power b :"<<p.calculate(p.num,p.powere);
         return 0;
     }


        

