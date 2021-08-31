int countBits(int num)
{
  int c=0;
  while(num!=0)
  {
    num=num&(num-1);
    c++;
  }
  return c;
}