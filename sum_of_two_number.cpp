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
void processing(int e = 2 )
{
    s= c*d*e;

}
void display()
{
    cout<<"the product ="<<s;
}};
int main()
{
  name s;
  int x,y;
  cout<<"enter two number\n";
  cin>>x>>y;
  s.read(x,y);
  s.processing();
  s.display();
    
}