int sparseOrNot(int num)
{
  if(num&(num>>1))
    return 0;
  return 1;
}