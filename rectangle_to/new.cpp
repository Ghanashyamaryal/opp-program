#include<iostream>
#include<string.h>
using namespace std;
class game
{
    protected:
    int no_of_league;
    public:
    game();
    game(int i)
    {
        no_of_league=i;
    }
    void display1()
    {
        cout<<"no of league="<<no_of_league<<endl;
    }

};
class football:public virtual game
{
    protected:
    char name1[30];
    int no_of_players1;
    int no_of_games1;
    public:
    football();
    football(char c1[],int a,int b)
    {
        strcpy(name1,c1);
        no_of_players1=a;
        no_of_games1=b;
    }
    void display2()
    {
        cout<<"name of club="<<name1<<endl;
        cout<<"no of players="<<no_of_players1<<endl;
        cout<<"no of games="<<no_of_games1;
    }
};
class cricket:public virtual game
{
    protected:
    char name2[30];
    int no_of_players2;
    int no_of_games2;
    public:
    cricket();
    cricket(char c2[],int c,int d)
    {
        strcpy(name2,c2);
        no_of_players2=c;
        no_of_games2=d;
    }
    void display3()
    {
        cout<<"name of club="<<name2<<endl;
        cout<<"no of players="<<no_of_players2<<endl;
        cout<<"no of games="<<no_of_games2;
    }

};
class medal:public football,public cricket
{
    int score1,score2;
    public:
       medal(char c1[],char *c2,int a,int b,int c,int d, int e):football(c1,a,b),cricket(c2,c,d),game(e)
    {}
    void display3()
    {
        score1=(no_of_players1+no_of_league)/no_of_games1;
        score2=(no_of_players2+no_of_league)/no_of_games2;
        
    }
    void display()
    {
        cout<<"score of football="<<score1<<endl;
        cout<<"score of cricket="<<score2<<endl;
    }
    
};
int main()
{
    medal s("fcb","rcb",12,12,12,14,14);
    s.display1();
    s.display2();
    s.display3();
    s.display();
    return 0;
}