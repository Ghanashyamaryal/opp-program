#include<iostream>
using namespace std;
class employee{
    int id;
    int salary;
    public:
    void setdata(){
        cout<<"Enter id of a student" << endl;
        cin>>id;
    }
    void getdata()
    {
        cout<<"the id of an employee is "<<id<<endl;
    }
};
int main()
{
    employee google[5];
   for (int i=0;i<5;i++)
    {
    google[i].setdata();
    google[i].getdata();
}
return 0;
}