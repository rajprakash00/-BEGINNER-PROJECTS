#include<bits/stdc++.h>
using namespace std;

int str(int a)
{
   a--;
   return a;

}
int main()
{
  int c=0;
  for(int i=100;i>2;i--)
  {
   c++;
   cout<<str(i)<<"bottles of beer on the wall,"<<str(i)<<"bottles of beer."<<"\n"<<"Take"<<c<<"down,pass it around,"<<str(i-1)
       <<"bottles of beer on the wall..."<<"\n";

      if(c==97)
      {
       cout<<str(i-1)<<"bottles of beer on the wall,"<<str(i-1)<<"bottles of beer."<<"\n"<<"Take"<<c+1<<"down,pass it around,"<<str(i-2)
       <<"bottle of beer on the wall..."<<"\n";
       cout<<str(i-2)<<"bottle of beer on the wall,"<<str(i-2)<<"bottle of beer."<<"\n"<<"Take"<<c+2<<"down,pass it around,"
           <<"NO more bottles of bear on the wall..."<<"\n";

       cout<<"No more bottles of beer on the wall,no more bottles of beer."<<"\n"<<"Go to store buy some more"<<c+2
       <<"bottles of beer on the wall...";
         break;
      }


  }



}


