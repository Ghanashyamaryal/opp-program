#include<iostream>
using namespace std;
int area( int &a){
     int m = a*a;
     return m;
}

int main()
{
int m =16;
int a = area(m);
cout<<a;
return 0;
}