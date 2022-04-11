#include<iostream>
#include<math.h>
using namespace std;
class rectangle{
        int a
        ;int b;
        public:
    rectangle(){};
      rectangle(int c, int d){
          a=c;
           b=d;
      }
      
      
      void show(){
          cout<<"the coordinate oof rectangle are"<< a <<"  and  "<<b<<endl;
      }};
    
class polar
{
    float theta;
    float radius;
    public:
    polar(){};
    polar(float e,float f ){

        radius = e; 
        theta = f;

    }
      operator rectangle(){
       double c = radius*cos(theta);
       double d = radius*sin(theta);
       return(rectangle(c,d));
      }
      void show(){
          cout<<"the coordinate of polar are  are"<<  radius  <<"  and " <<theta<<endl;
      }
    };
int main()
{
polar p(10.816,81);
rectangle r;
r = p;
r.show();
p.show();
return 0;
}