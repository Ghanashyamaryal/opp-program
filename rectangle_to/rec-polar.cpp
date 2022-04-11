#include<iostream>
#include<math.h>
using namespace std;
class polar
{
    float theta;
    float radius;
    public:
    polar(){};
    polar(float e,float f){
        radius = e;
        theta = f; 
    
    }
    void show(){
     cout<<"the value of radius and theat is" <<radius  <<" and" << (theta*(180/3.14)) ;

    }};
    class rectangle{
        int a
        ;int b;
        public:
    rectangle(){};
      rectangle(int c, int d){
          a=c;
           b=d;
      }
      operator polar(){
          double e = sqrt(a*a+b*b);
          double f = atan(b/a);
          return(polar(e,f));  
      }
      void show(){
          cout<<"the coordinate oof rectangle are"<<  a <<"  and  "<< b<<endl;
      }
    };
int main()
{
polar p;
rectangle r(6,9);
p = r;
r.show();
p.show();
return 0;
}