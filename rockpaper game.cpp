#include<bits/stdc++.h>
using namespace std;
int s1=0,s2=0,c1=0,c2=0,c3=0;
int  choice()
{
    int ch,a,player,t;
    char ch1;

  cout<<"WELCOME TO THE GAME OF ROCK,PAPER,SCISSOR!!"<<"\n";
  cout<<"Now enter your choice :"<<"\n";
  cout<<"1.rock"<<"\n"<<"2.paper"<<"\n"<<"3.scissor"<<"\n";
  cin>>ch;
  int j=(rand()%10+2);           //here computer is given choice to input
  if(j>=0&&j<=3)
    {cout<<"COMPUTER CHOSE ROCK"<<"\n";
      a=1;}
  else if(j>=4&&j<=7)
  {cout<<"COMPUTER CHOSE PAPER"<<"\n";
      a=2;
  }
  else
  {cout<<"COMPUTER CHOSE SCISSOR"<<"\n";
      a=3;
  }

  if(a==1&&ch==1)
    {cout<<"OH!! A DRAW"<<"\n";
     c3++;}
  else if(a==1&&ch==2)
     {cout<<"YEAH!! YOU W0N"<<"\n";
       c1++;
       s1+=c1;}
  else if(a==1&&ch==3)
    {cout<<"OOPS!! YOU LOST ,BETTER LUCK NEXT TIME"<<"\n";
      c2++;
      s2+=c2;}
  else if(a==2&&ch==1)
    {cout<<"OOPS!! YOU LOST ,BETTER LUCK NEXT TIME"<<"\n";
      c2++;
      s2+=c2;}
  else if(a==2&&ch==2)
    {cout<<"OH!! A DRAW"<<"\n";
      c3++;}
  else if(a==2&&ch==3)
    {cout<<"YEAH!! YOU W0N"<<"\n";
     c1++;
     s1+=c1;}
  else if(a==3&&ch==1)
    {cout<<"YEAH!! YOU W0N"<<"\n";
       c1++;
       s1+=c1;}
  else if(a==3&&ch==2)
    {cout<<"OOPS!! YOU LOST ,BETTER LUCK NEXT TIME"<<"\n";
      c2++;
      s2+=c2;}
  else if(a==3&&ch==3)
     {cout<<"OH!! A DRAW"<<"\n";
      c3++;}

  cout<<"DO YOU WANT TO PLAY MORE AND DEFEAT A MERE COMPUTER??  (Y/N) :>>";
    cin>>ch1;
  if(ch1=='Y'||ch1=='y')
    choice();
  else if(ch1=='N'||ch1=='n')
    {
        cout<<"OK!! YOU WANT TO QUIT THE GAME,BUT BEFORE THAT YOU SHOULD SEE YOUR SCORE :";
    cout<<"COMPUTER'S SCORE IS : "<<s2<<"\n";
    cout<<"YOUR SCORE IS : "<<s1<<"\n";
    cout<<"THANK YOU !!"<<"\n";

     exit(0);
    }

}
int  main()
{
  choice();
  return 0;

}
