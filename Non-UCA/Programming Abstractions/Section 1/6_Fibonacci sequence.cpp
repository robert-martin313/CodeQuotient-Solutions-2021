#include<iostream>
#include<cstdio>
#include<cmath>
// Include headers as needed
using namespace std;
int main()
{
    int n;
  cin>>n;
  if(n==1)
  {
    cout<<0;
    return 0;
  }
  int fd=0;
  int sd=1;
  cout<<fd<<endl<<sd<<endl;
  for(int i=2;i<n;i++)
  {
    int sum=fd+sd;
    cout<<sum<<endl;
    fd=sd;
    sd=sum;
  }
    return 0;
}