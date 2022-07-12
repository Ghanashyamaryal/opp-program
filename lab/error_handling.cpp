#include<iostream>
using namespace std;

int main()
{
    int a,b,x,z;
    cout<<"enter any two num"<<endl;
    cin>>a>>b;
    x = a-b;
    try{
        if(x!=0)
         {z =(a*b)/x;
         cout<<"the value of z is "<<z<<endl;
         } 
         else
         throw(x);
    }
    catch(int i){
        cout<<"Error occur due to "<<i<<endl;
    }



return 0;
}