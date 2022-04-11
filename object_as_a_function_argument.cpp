#include<iostream>
using namespace std;
class complex{
    int a;
    int b;
    public:
    void setdata(int x,int y);
    void process(complex c1,complex c2);
    void print ();
};
void complex::setdata(int x,int y)
{
    a = x;
    b = y;
}
    void complex::process(complex c1,complex c2)
    {
      a = c1.a+c2.a;
      b = c1.b+c2.b;
    }
    void complex :: print ()
    {
      cout<<"The complex number is "<<a<<"+"<<b<<"i"<<endl;
    }
    int main()
    {
      complex c1,c2,c3;
      c1.setdata(2,3);
      c1.print();
      c2.setdata(4,5);
      c2.print();
      c3.process(c1 , c2);
      c3.print();
      return 0;
      }