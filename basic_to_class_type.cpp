#include<iostream>
using namespace std;
class x 
{
int z;
char y;
public:
x();
x(char p)
{
    z = (int)p;
    y = p;
}
void show(){
    cout<<z<<y;}

};
int main()
{
char s = 'a';
x x1;
x1= s;
x1.show();
return 0;
}