int evenDigits(int n)
{
  if(n==0)
  {
    return 0;
  }
  int a=n%10;
  if(a%2==0)
  {
    return a+10*evenDigits(n/10);
  }
  else
  {
    return evenDigits(n/10);
  }
}