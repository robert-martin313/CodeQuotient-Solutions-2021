#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
  int n;
  cin>>n;
   int a=1;
  for(int i=1;i<=n;i++)
  { 
    for(int j=1;j<=i;j++)
    {
      cout<<a;
      if(i!=j)
      {
        cout<<" ";
      }
   a++;
    }
    cout<<endl;
  }
   return 0;
}