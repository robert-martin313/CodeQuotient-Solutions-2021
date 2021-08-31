// Write the cumulative() function as specified above
void cumulative(vector<int> &v)
{
  for(int i=1;i<v.size();i++)
  {
    v.at(i)=v.at(i-1)+v.at(i);
  }
}