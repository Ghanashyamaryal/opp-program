#include<iostream>
using namespace std;
class sign
{
int min,hour,sec;
public:
void read(int a,int b,int c){
   hour = a;
   min = b;
   sec = c;
   }
   sign operator ++ (){
       ++ sec;
       if (sec>=60){
           ++ min;
           sec = sec-60;
       }
       if(min>=60)
       {
           ++hour;
           min = min-60;
       }
       
   }
   void display()
   {
       cout<<"the updated time is "<<hour<<":"<<min<<":"<<sec<<endl;
   } 

};


int main()
{
    sign s,s1;
    s.read(2,50,9);
    ++s;
    s.display();
    s1.read(2,59,59);
    ++s1;
    s1.display();
return 0;
}