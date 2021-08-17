int power(int base, int exp)
{
  if(exp==0)
  {
    return 1;
  }
  return power(base,exp-1)*base;
}