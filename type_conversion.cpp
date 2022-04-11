#include<iostream>
using namespace std;
class check
{
    int i;
    public:
    check():i(0){}
    check operator ++ (int ){
        check temp;
        temp.i = i++;
        temp;
    }
    void  output(){
        cout<<"the output is"<<i<<endl;
    }

};
int main()
{ check c1;
c1.output();
c1++;
c1.output();
c1++;
c1.output();

return 0;
}