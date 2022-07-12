// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class  popn;
class child{
    int no_of_child;
    public:
    void read(){
        cout<<"enter no of child less than 18 year "<<endl;
        cin>>no_of_child;
    }
    friend int voter(child , popn);
    
    
};
class popn{
     int total_popn;
    public:
    void read(){
        cout<<"enter total popn of country"<<endl;
        cin>>total_popn;
    }
    friend int voter(child , popn);
};
 int voter(child c, popn p)
{
    return ((p.total_popn)-(c.no_of_child));
}
int main() {
    int a;
  child c;
  popn p;
  c.read();
  p.read();
  a = voter(c,p);
  cout<<"the no of voter is "<<a;
  

    return 0;
}