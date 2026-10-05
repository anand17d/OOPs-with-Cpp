#include <iostream>
using namespace std;
class Test
{
 int x;
public:
 Test& set(int val)
 {
 x = val;
 return *this;
 }
 Test& show()
 {
 cout << x << endl;
 return *this;
 }
};
int main()
{
 Test t;
 t.set(10).show();
 return 0;
}