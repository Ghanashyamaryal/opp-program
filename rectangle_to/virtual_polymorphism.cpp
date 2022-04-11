#include<iostream>
#include<conio.h>
using namespace std;
class base
{
public:
void display(){
    cout<<"\n display base"<<endl;
}
virtual void show(){
cout<<"\n show base";
}
};
class derived:public base
{
    public:
    void display(){ cout<<"\n display derived"<<endl;
}
 void show(){
cout<<"\n show derived";
}

    
};
int main()
{
base b;
derived d;
base *p;
cout<<"\n p point to base ";
p = &b;
p->display();
p->show();
cout<<"\n p points to derived"<<endl;
p =&d;
p->display();
p->show();
return 0;
}