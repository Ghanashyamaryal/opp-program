#include <iostream>
using namespace std;
class m
{

public:
    void display()
    {
        cout << "class m is declared" << endl;
    }
};
class n
{
public:
    void display()
    {
        cout << "clas n is declared " << endl;
    }
};
class p : public m, public n
{
public:
    void display()
    {
        cout << "hahahahah" << endl;
        m::display();
        n::display();
    }
};
int main()
{
    p p1;
    p1.display();
    +.3






























































































































































































































































    
    return 0;
}