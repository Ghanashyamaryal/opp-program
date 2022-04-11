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
root(root &y)
{
    i = y.i;
    j = y.j;
}
int processing()
{
    int p = (i*j);
    cout<<"the product of two number is "<<p;
}


};
int main()
{
 root rootr1(60,5);
 root rootr2 = rootr1;
 rootr1.processing();
 rootr2.processing();

    
    
    return 0;
}
   
