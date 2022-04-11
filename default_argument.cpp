#include<iostream> 
using namespace std;
class weight
{
private:
int b,s;
public:
void read(int x,int g=10)
{   b = x;
    s =b*g;
}
void display()
{
    cout<<"the product ="<<s;
}
};
int main()
{
  weight s;
  s.read(20);
  s.display();
    
}