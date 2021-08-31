// Write the mean() function as specified above
double mean(vector<double> v)
{
  if(v.size()==0)
  {
    return 0;
  }
  double s=0;
  for(int i=0;i<v.size();i++)
  {
    s=s+v[i];
  }
  return s/v.size();
}