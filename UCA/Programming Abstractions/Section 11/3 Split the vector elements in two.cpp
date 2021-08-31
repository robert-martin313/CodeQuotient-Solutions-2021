// Write the split() function as specified above
void split(vector<int> &v)
{
  vector<int> sp;
  for(int i=0;i<v.size();i++)
  {
    if(v[i]%2==0)
    {
      sp.push_back(v[i]/2);
      sp.push_back(v[i]/2);
    }
    else
    {
      sp.push_back(v[i]/2+1);
      sp.push_back(v[i]/2);
    }
  }
  v=sp;
}