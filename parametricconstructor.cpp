#include<iostream>
using namespace std;
class root
{private:
int i,j;
public:
root();
root (int a,int b){
    i = a;j = b;
}
void display ()
{
  cout<<"the complex umber is :"<<i<<"+"<<j<<"i";
}

};
int main()
{
 
    root r2(10,20);
    r2.display();
    return 0;
}
   
