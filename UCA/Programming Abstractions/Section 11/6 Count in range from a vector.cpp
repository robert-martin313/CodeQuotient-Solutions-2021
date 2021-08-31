// Write the countInRage() function as specified above
int countInRange(vector<int> v,int min,int max)
{
  int c=0;
  for(int i=0;i<v.size();i++)
  {
    if(v[i]<=max &&v[i]>=min)
    {
      c++;
    }
  }
  return c;
}