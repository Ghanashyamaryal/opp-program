#include<iostream>
using namespace std;
class A
{protected:
int a;
    
public:
int  b;
void get_ab();
int get_a();

};
class B: public A
{int c;
    public:
    
    void mul();
    void dis();
};
void A :: get_ab()
{
    a = 5;
    b = 6;
}


void B ::mul(){
    
     c = b *a;
}
void B:: dis(){
    cout<<"the multiply of two num is "<<c;
    
}
int main()
{
    B b;
    b.get_ab();
    b.mul();
    b.dis();

return 0;
}