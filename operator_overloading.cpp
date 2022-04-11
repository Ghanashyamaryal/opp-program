#include<iostream>
using namespace std;
class complex{
int a,b,c;
public:
void get_data(int x, int y)
{
    a=x;
    b=y;

}
complex operator + (complex c)
{
complex temp;
temp.a = a+c.a;
temp.b=b+c.b;
return temp;

}
void display()
{
    cout<<a<<"+"<<b<<"i"<<endl;
}};
int main(){
    complex c1,c2,c3;
    c1.get_data(20,30);


   c1.display();
    c2.get_data(3,4);
   c2.display();
    c3 = c1+c2;
  c3.display();
  return 0;


}