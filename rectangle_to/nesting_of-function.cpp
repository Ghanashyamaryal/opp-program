#include<iostream>
using namespace std;
class set
{
    int m,n;
    public:
    
void input();
void display();
int largest();

};
void set::input(){
    cout<<"enter two number"<<endl;
    cin>>m>>n;
}
int set::largest(){
    if(m>n){
        return m;
    }
    else return n;
}
void set ::display()
{
    cout<<"larges numbeer is "<<largest();
}
int main()
{
set c;
c.input();
c.display();  

return 0;
}