void switchPairs(vector<int> &v)
{
   vector<int> sp;
  for(int i=0;i<v.size();i=i+2)
  {
    if(i==v.size()-1)
    {
      sp.push_back(v[i]);
    }
    else
    {
      sp.push_back(v[i+1]);
      sp.push_back(v[i]);
    }
  }
  v=sp;
}