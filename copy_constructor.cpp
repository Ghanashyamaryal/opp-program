#include<iostream>
using namespace std;
class root
{private:
int i,j,x;
public:
root();
root (int a,int b)
{
    i = a;
    j = b;
}
root (root &x)
{
    i = x.i;
    j = x.j;
}
int processing()
{
     return (i*j);
}

};
int main()
{
 
   root rootr1(10,20);
    root root2 = rootr1;
    cout<<"the complex number is :"<<rootr1.processing()<<endl;
    cout<<"the complex number is :" <<root2.processing();
    
    return 0;
}
   
