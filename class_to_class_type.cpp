#include<iostream>
#include<math.h>
using namespace std;
class rectangle
{
    float x,y;
    public:
    rectangle(int a, int b){
        x = a;
        y = b;
    }
    float get_x(){
        return(x);

    }
float get_y(){
    return(y);
}
};
class polar
{
float thita,radius;
public:
polar(){};
void show();
polar(rectangle r){
    float tempx = r.get_x();
    float tempy = r.get_y();
    radius  = sqrt(tempx*tempx + tempy* tempy);
    thita  = atan(tempy/tempx);
}};
void polar::show(){
cout<<"radius is "<<radius<<endl;
cout<<"theta is  "<<thita*(180/3.14)<<endl;
}
int main()
{
rectangle r(6,9);
polar p(r);
p.show();
return 0;
}