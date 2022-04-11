#include<iostream>
using namespace std;
struct student
{
    char name[20];
    int salary;
    int eid;

};
int main()
{ struct student s;
cout<<"enter name of the student"<<endl;
cin>>s.name;
cout<<"enter eid"<<endl;
cin>>s.eid;
cout<<"enter salary"<<endl;
cin>>s.salary;
cout<<"the information  of  student is:"<<endl;
cout<<s.name<<endl;
cout<<s.eid<<endl;
cout<<s.salary<<endl;

return 0;
}