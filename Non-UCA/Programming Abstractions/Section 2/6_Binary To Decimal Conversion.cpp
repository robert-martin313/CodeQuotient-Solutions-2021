int binaryToDecimal(string binary){
  int num;
num=stoi(binary);
  int p=0;
  int n=0;
  while(num!=0)
  {
    int rem=num%10;
    n=n+rem*pow(2,p);
    p++;
    num=num/10;
  }
  return n;
}
int pow(int n,int p)
{
  int ans=1;
  for(int i=1;i<=p;i++)
  {
    ans=ans*n;
  }
  return ans;
}