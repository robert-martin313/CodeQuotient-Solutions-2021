#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int twoh=0,fiveh=0,h=0,fifty=0,twenty=0,ten=0,five=0,two=0,one=0;
  int amt=n;
  if(amt>=2000)
  {
  twoh=amt/2000;
    amt-=twoh*2000;
  }
   if(amt>=500)
  {
  fiveh=amt/500;
    amt-=fiveh*500;
  }
   if(amt>=100)
  {
    h=amt/100;
    amt-=h*100;
  }
   if(amt>=50)
  {
    fifty=amt/50;
    amt-=fifty*50;
  }
   if(amt>=20)
  {
    twenty=amt/20;
    amt-=twenty*20;
  }
   if(amt>=10)
  {
  ten=amt/10;
    amt-=ten*10;
  }
   if(amt>=5)
  {
    five=amt/5;
    amt-=five*5;
  }
   if(amt>=2)
  {
    two=amt/2;
    amt-=two*2;
  }
   if(amt>=1)
  {
    one=amt/1;
    amt-=one*1;
  }
  cout<<twoh<<" "<<fiveh<<" "<<h<<" "<<fifty<<" "<<twenty<<" "<<ten<<" "<<five<<" "<<two<<" "<<one;
   return 0;
}