#include<iostream>
#include<cstdio>
#include<cmath>
// Include headers as needed
using namespace std;
int main()
{
    int n;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    int r,c;
    cin>>r;
    cin>>c;
    int arr[r][c];
    for(int row=0;row<r;row++)
    {
      for(int col=0;col<c;col++)
      {
        cin>>arr[row][col];
      }
    }
    int r2,c2;
    cin>>r2;
    cin>>c2;
    int arr2[r2][c2];
    for(int row=0;row<r2;row++)
    {
      for(int col=0;col<c2;col++)
      {
        cin>>arr2[row][col];
      }
    }
    int product[r][c2];
    for(int row=0;row<r;row++)
    {
      for(int col=0;col<c2;col++)
      {
        int sum=0;
        for(int k=0;k<c;k++)
        {
          sum+=arr[row][k]*arr2[k][col];
        }
        product[row][col]=sum;
      }
    }
    for(int row=0;row<r;row++)
    {
      for(int col=0;col<c2;col++)
      {
        cout<<product[row][col]<<" ";
      }
      cout<<endl;
    }
  }
    return 0;
}