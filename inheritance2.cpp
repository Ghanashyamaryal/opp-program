#include<iostream>
#include<string.h>
using namespace std;
class game
{   protected:
    char name[10];
    int no_of_league;
     protected://
     void read();
     void display();


};
void game::read(){
    cout<<"enter name of game"<<endl;
    cin>>name;
    cout<<"enter no of league "<<endl;
    cin>>no_of_league;

}
void  game:: display(){
cout<<"the name of game is --->"<<name<<endl;
cout<<"the no of league is --->"<<no_of_league<<endl;
}
class football:virtual public game{
    protected:
char name2[20];
int no_of_player;
int no_of_game;
public:
void read2(char *s1,int n,int a);
void display2();

};
void football::read2(char *s1,int n,int a)
{ 
 strcpy(name2,s1);
 no_of_player = n ;
 no_of_game = a;

}
void football::display2(){
    cout<<"Name of club is --->"<<name2<<endl;
    cout<<"\n Total no of player in football --->"<<no_of_player<<endl;
    cout<<"Total no of game is --->"<< no_of_game <<endl;
}
class cricket:virtual public game{
    protected:
char name3[20];
int no_of_player2;
int no_of_game2;
public:
void read3(char s2[],int n,int a);
void display3();

};
void cricket::read3(char s2[],int n,int a)
{ 
 strcpy(name3,s2);
 no_of_player2 = n ;
 no_of_game2 = a;

}
void cricket::display3(){
    cout<<"Name of franchise is --->"<<name3;
    cout<<"\n Total no of player in cricket squad --->"<<no_of_player2<<endl;
    cout<<"Total no of game in ipl --->"<< no_of_game2 <<endl;
}
class medal: public football, public cricket{
    protected:
int  score1 , score2;
public:
void read4();
void display4();

};
void medal::read4(){
    read();
    read2("LALIGA",11,30);
    read3("IPL",25,70);
}
void medal::display4(){
       score1 = (no_of_player+no_of_league)/(no_of_game);
       score2 = (no_of_player2+no_of_league)/(no_of_game2);
     display();
   display2();
   display3();
   cout<<"score of football is ----> "<<score1<<endl;
   cout<<"score of cricket is  --->"<<score2 <<endl;
   if(score1>score2)
{
    cout<<"FOOTBALL IS BEST IN WORLD"<<endl;

}
else
cout<<" CRICKET IS BEST IN WORLD"<<endl;
}
int main()
{
medal m;
m.read4();
m.display4();
return 0;
}