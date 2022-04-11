#include<iostream>
using namespace std;
class addition
{
private:
int a,b,add,c;
public:
void set_value(int x, int y )
{
    a=x;
    b=y;
}
friend int add(addition y);
};
int add(addition y)
{
  return( y.a+y.b);
}
int main()
{
    addition x;
    x.set_value(20,30);
     cout<<"the addition of two number is  " <<add(x);
    return 0;
}