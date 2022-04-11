#include<iostream>
using namespace std;
class complex
{
    int a,b;
    public:
    void setdata(int x ,int y)
    {
        a = x;
        b = y;
    }
    friend  complex process(complex &c1,complex &c2);
    void display()
    {
       cout<<"the comples number is "<< a<<"+"<<b<<"i"<<endl;
    }
};
complex process(complex &c1,complex &c2)
{   complex c3;
    c3.a=(c1.a + c2.a);
    c3.b=(c1.b+c2.b);
    return c3;
}
int main()
{
    complex c1,c2,sum;
    c1.setdata(2,3);
    c1.display();
    c2.setdata(4,5);
    c2.display();
    sum = process(c1,c2);
    sum.display();
}