#include<iostream>
using namespace std;
class help
{
    int a;
    public:
    help(int c){
        this->a = c;
    }
    void display(){
        cout<<"the value of a is "<<a;
    }


};
int main()
{
    help h(20);
    h.display();

return 0;
}