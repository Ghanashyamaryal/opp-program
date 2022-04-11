#include<iostream>
#include<string.h>
using namespace std;
class university
{
    protected:
    string name;
    string name_of_faculty;
    public:
    void get_data(string s1 ,string s2){
        name = s1;
        name_of_faculty = s2;
    }
    void show(){
        cout<<name<<endl;
        cout<<name_of_faculty<<endl;

    }

};

class gov_collage : public virtual  university{
protected:
string name1;
int no_of_std1;
public:
void get_d(string d1,int c){
    name1 = d1;
    no_of_std1= c;

}
void display_gov();
};
void  gov_collage ::display_gov(){
    cout<<"name of gov collage is "<<name1<<endl;
    cout<<"no of std in gov cllge is "<<no_of_std1<<endl;
}
class pvt_collage :public virtual university
{
protected:
string name2;
int no_of_std2 ;
public:
void get_d1(string e1,int f){
    name2 = e1;
    no_of_std2= f;
  
}
 void display_pvt();
};
void pvt_collage :: display_pvt(){
     cout<<"name of priavte collage is "<<name2<<endl;
    cout<<"no of std in priavte  cllge is "<<no_of_std2<<endl;

}
class result:public gov_collage ,public pvt_collage
{
int total;
public:
void display();
};
void result::display(){
    total = no_of_std1+no_of_std2;
    show();
    display_gov();
    display_pvt();


    cout<<"\n Total no of student in gov and private is "<<total<<endl;
}
int main()
{
    result u1;
    u1.get_data("tribhuwan university","bsc_csit");
    u1.get_d("kalika",20);
    u1.get_d1("amrit",108);
    u1.display();

return 0;
}