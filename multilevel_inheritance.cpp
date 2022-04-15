#include<iostream>
using namespace std;
class family
{   protected:
    int no_father;
    int no_of_adult;
    public:
    void read(int a,int b){
       no_father=a;
       no_of_adult = b;
    }
    void display(){
        cout<<"no of no_father ="<<no_father<<endl;
            cout<<"no of no_of_adult ="<<no_of_adult<<endl;
    }};
class parent :public family
{   protected:
    int no_of_baby;
    int baby_friend;
    
    public:
 
    void read2(int b){
         read(20,30);
       baby_friend = b;
    }
    void display(){
        family::display();
        no_of_baby = 2*no_father;
        cout<<"no of no_of_baby ="<<no_of_baby<<endl;
         cout<<"no of no_of_friend ="<<baby_friend<<endl;
    }

};
class sum :public family,public parent
{
    int total;
    public:
   
    void display(){
        total = baby_friend+no_of_baby;
        parent::display();
        cout<<"total_no_of_young_boy_is ="<< total <<endl;


}};
int main()
{
 sum s;
 
 s.read2(20);
 s.display();

return 0;
}