int findTofK(int k)
{
  if(k==0)
  {
    return 0;
  }
  return findTofK(k-1)+3*k;
}