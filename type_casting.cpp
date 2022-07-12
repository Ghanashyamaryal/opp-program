#include<iostream>
using namespace std;
class x
{
    int z;
    char y;
    public:
    x (){}
    x(char p){
     
     z =(int) p;
     y = p;
    }
    void display(){
  cout<<"the ascii value  of "<< y <<" is " <<z;
    }

};
int main()
{
   x x1;
   char s = 'a';
    x1 = s;
    x1.display();

return 0;
}