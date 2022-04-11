#include<iostream>
#include<string.h>
using namespace std;
class game
{
protected:
int no_of_league;
public:
game();
game(int i){
    no_of_league = i;

}
void display1(){
    cout<<"the nuber of league is "<< no_of_league<<endl;
}
};
class football : public virtual game
{
protected :
 char name1[20];
 int no_of_player;
 int no_of_game;
 public:
 football();
 football(char c1[],int a ,int b){
     strcpy(name1,c1);
     no_of_player = a;
     no_of_game = b;


 }
 void display2(){
     cout<<"name of franchise is "<<name1<<endl;
     cout<<"no of player is "<<no_of_player<<endl;
     cout<<"no of game is"<<   no_of_game<<endl;

 }};
 class cricket :public virtual game
{
protected :
 char name2[20];
 int no_of_player1;
 int no_of_game1;
 public:
 cricket();
 cricket(char c1[],int a ,int b){
     strcpy(name2,c1);
     no_of_player1 = a;
     no_of_game1 = b;


 }
 void display3(){
     cout<<"name of franchise is "<<name2<<endl;
     cout<<"no of player is "<<no_of_player1<<endl;
     cout<<"no of game is"<<   no_of_game1<<endl;

 }


 
};
class score : public football, public cricket{
protected:
int score1, score2;
public:
score(char *c1 , char*c2, int a,int b,int c,int d, int e) : football (c1, a, b), cricket (c2 ,  c, d ),game( e)
{

}
void display()
{    score1 = (no_of_player+no_of_league)/(no_of_game);
       score2 = (no_of_player1+no_of_league)/(no_of_game1);
    cout<<"score of football is "<<score1<<endl;
    cout<<"score of cricket is "<<score2<<endl;
}};


int main()
{
    score s("LALLIGA","IPL",12,12,13,14,14);
    s.display1();
    s.display2();
    s.display3();
    s.display();

return 0;
}