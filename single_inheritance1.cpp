#include<iostream>
using namespace std;
class base
{private:
int a;
public:
int b;
void get_data();
int get_a();

};
void base:: get_data(){
 a = 5;
 b = 6;
}
int base::get_a(){
    return a;
}

class derived: public base
{
    private:
    int c;
    public:
    void mux();
    void display();

};
void derived::mux(){
c= get_a()*b;
}
void derived::display(){
    cout<<"the product of two number is "<<c<<endl;
}
int main()
{
derived d;
d.get_data();
d.mux();
d.display();
return 0;
}