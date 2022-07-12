#include<iostream>
using namespace std;
class banana;

class apple
{   private:
    int number_of_apple;
    public:
    void read_data(){
        cout<<"enter number of apple"<<endl;
        cin>>number_of_apple;
    }
    friend int data(apple ,banana );

};

class banana
{   private:
    int number_of_banana;
    public:
    void read_data1(){
        cout<<"enter number of banana"<<endl;
        cin>>number_of_banana;
    }
    friend int data(apple  ,banana );
    };

       int data(apple s ,banana y)
    {
    
       return(s.number_of_apple + y.number_of_banana);
    }


int main()
{  int s;
    apple a;
    banana b;
    a.read_data();
    b.read_data1();
    cout<<"total no of fruits are "<<data(a,b);

return 0;
}