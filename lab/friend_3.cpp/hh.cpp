#include<iostream>
using namespace std;
class great
{  private:
    int a;
    public:
    great(){}
    great(int x){
       a =x;
    }
   

 great operator ++ (int){
        a++;
        
    }

void display(){
    cout<<"the value is "<<a;
}
};
int main()
{ 
    great g(20);
    g++;
    g.display();   
return 0;
}