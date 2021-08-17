void printNextGreaterElement(int a[],int n){
  int ans;
  for(int i=0;i<n;i++)
  {
     ans=-1;
    for(int j=i+1;j<n;j++)
    {
      if(a[i]<a[j])
      {
        ans=a[j];
        break;
      }
    }
    cout<<ans<<" ";
  }
}