#include<iostream>
using namespace std;
class x;
class z{
   int  a;

   public:
   z()
   {
       cout<<"enter thw value";
       cin>>a;
   }
   int friend add(x,z);
};
class x
{
    int b ;
    public:
    x(){
       cout<<"enter thw value";
       cin>>b;
   }
    int friend add(x,z);

};
int add(x i , z j){
    return(i.b*j.a);
}
int main()
{
z c;
x d;
cout<<"the sum of the two number is "<<add(d,c);
return 0;
}