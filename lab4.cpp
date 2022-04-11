#include<iostream>
#include<string.h>
using namespace std;
class city
{
string cityname[20];
double distfromktm;
void get_data(string s , float y);
{
cityname = s;
distfromktm = y;
    
}
void add (city c1,city c2)
{
    distfromktm = c1.distfromktm+ c2.distfromktm 
    cout<<"the sum of two distance is "<<disfromktm;
}

};
int main()
{
    city c1,c2,c3;
    c1.get_data("pokhara" , 10.4 );
    c2.get_data("dhading",30.8);
    
}