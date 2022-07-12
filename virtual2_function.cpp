#include <iostream>
using namespace std;
class album
{
protected:
    int a = 10;

public:
    virtual void display()
    {
        cout << "the total no of album = " << a << endl;
    }
};
class song : public album
{
protected:
    int b = 20;

public:
    void display()
    {
        int total = a * b;
        cout << "the music contains " << total << " number of music" << endl;
    }
};
int main()
{
    album x1;
    song s;
    album *x;
    x = &x1;
    x->display();
    x = &s;
    x->display();

    return 0;
}