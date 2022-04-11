#include<iostream>
using namespace std;
void print (int i)
{
    cout<<"\n this is int "<<i;
}
void print (int a, int b )
{
    cout<<"\nthe number are "<<a<<b;
}
void print (double c)
{
    cout<<"\n the number is double  "<<c;
}
int main()
{
    print(10);
    print(10.1);
    print(2,3);
}