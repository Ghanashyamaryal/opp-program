#include<iostream>
#include<math.h>
using namespace std;
class polar
{
    float r,th;
    public:
    polar(float a, float b){
        r = a;
        th = b;
    }
    float get_r(){
        return(r);

    }
float get_th(){
    return(th);
}
};
class rectangle
{
float x,y;
public:
rectangle(){};
void show();
rectangle(polar p){
    float tempr = p.get_r();
    float tempth = p.get_th();
       x =tempr*cos(tempth);
		y =tempr*sin(tempth);
}};
void rectangle::show(){
cout<<"rectangle cordinate "<<x<<"and"<<y<<endl;

}
int main()
{

polar p(15.5,13.14/2);
rectangle r( p);
r.show();
return 0;
}