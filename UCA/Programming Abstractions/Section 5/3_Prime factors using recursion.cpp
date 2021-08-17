#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
void primefact(int n,int i)
{
  if(n<2)
  {
    return;
  }
  if(n%i==0)
  {
    cout<<i<<endl;
    primefact(n/i,i);
  }
  else
  {
    primefact(n,i+1);
  }
}
int main()
{
  int n;
  cin>>n;
  primefact(n,2);
   return 0;
}