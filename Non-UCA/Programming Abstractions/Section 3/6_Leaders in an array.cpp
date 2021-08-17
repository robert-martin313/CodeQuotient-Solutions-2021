int* findTheLeaders(int a[], int n, int* size_of_returned_array){
 int ans[n];
  int max=a[n-1];
  ans[0]=max;
int j=1;
  for(int i=n-2;i>=0;i--)
  {
    if(a[i]>max)
    {
      ans[j]=a[i];
      j++;
      max=a[i];
    }
  }
 * size_of_returned_array=j;
  for(int i=0;i<j;i++)
  {
    a[i]=ans[j-i-1];
  }
  return a;
}