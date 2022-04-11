#include<iostream>
#include<stdio.h>
using namespace std;
class man
{ static int count;
int num;
public:
void  get_data(int a){

num = a;
count++;

}
void display(){
    cout<<"count="<<endl<<count<<endl;
}


};
int man::count;

int main()
{
man a,b,c,d;
a.display();
b.display();
c.display();
a.get_data(100);
b.get_data(200);
c.get_data(300);
d.get_data(2);
cout<<"after reading data"<<endl;
a.display();
b.display();
c.display();

return 0;
}