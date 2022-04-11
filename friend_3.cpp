#include<iostream>
using namespace std;
class product
{
    int a,b;
    public:
    void getdata(int y, int x)
    {
        a=y;
        b= x;

    }
   friend int  process(product s);
   void dispaly();

};
int  process(product s)
{
 int p =  (s.a*s.b);
 cout<<"the product of two number is :"<<p<<endl;   
}
int main()
{
    product a;
    a.getdata(10,20);
    process( a );
}