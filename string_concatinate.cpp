#include<iostream>
using namespace std;
class concatinate
{
    string s1;
    string s2;
    public :
    void get(string a1,string a2){
    s1 = a1;
    s2 = a2;}
    void display ()
    {
        string s = s1+s2;
    
    cout<<"the new string is "<<s;
    }
    
};
int main()
{ concatinate s1;
s1.get("Ghanashyam" ," Aryal");
s1.display();

return 0;
}