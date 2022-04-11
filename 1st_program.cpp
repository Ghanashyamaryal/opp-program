#include<iostream> 
using namespace std;
class name
{
private:
int c,d,s;
public:
void read(int a,int b)
{
    c=a;
    d=b;
}
void processing( )
{
    s= c+d;
}
void display()
{
    cout<<"the sum="<<s;
}};
int main()
{
  name s;
  s.read(20,30);
  s.processing();
  s.display();
    
}