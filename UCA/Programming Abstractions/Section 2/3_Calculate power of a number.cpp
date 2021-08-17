int power(int num, int pow){
  if(pow<0)
  {
    return -1;
  }
  int dp[32];
  int i=0;
  while(pow>0)
  {
    dp[i]=pow%2;
    pow=pow/2;
    i++;
  }
  int ans=1;
  i--;
  while(i>=0)
  {
    if(dp[i]==1)
    {
      ans=ans*ans*num;
    }
    else
    {
      ans=ans*ans;
    }
    i--;
  }
  return ans;
}