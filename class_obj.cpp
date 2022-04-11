#include<iostream>
using namespace std;
class addition
{
 private:
 int a,v,s;
 public:
 void read(int x,int y)
 {
   a =x;
   v = y;  
 }
 void procesing()
 {

s = a+v;
cout<<s<<endl;
 }
 void dispaly();
};

int main()
{
    addition a1,a2;
    a1.read(20,20);
    a1.procesing();
   
    a2.read(23,43);
    a2.procesing();
    return 0;
}