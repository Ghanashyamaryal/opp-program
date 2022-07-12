#include<iostream>
using namespace std;
class x
{ int y;
public:
void read(int a){
this->y=a;

}
void display(){
    cout<<y;
}

};
int main()

{
    x a;
    a.read(2);
    a.display();


return 0;
}