#include<iostream>
#include<cstdio>
#include<cmath>
// Include headers as needed
using namespace std;
int main()
{
    // Write your code here
  int t,n;
  cin>>t;
  while(t--)
  {
    cin>>n;
    int s=0;
    while(n!=0)
    {
      s=s+n%10;
      n=n/10;
    }
    cout<<s<<endl;
  }
    // Return 0 to indicate normal termination
    return 0;
}