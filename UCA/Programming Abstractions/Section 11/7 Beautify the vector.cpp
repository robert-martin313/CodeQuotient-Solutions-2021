// Write the beutify() function as specified above
void beautify(vector<string> &v)
{
  string sc="#";
  vector<string> sp;
  sp.push_back(sc);
  for(int i=0;i<v.size();i++)
  {
      sp.push_back(v[i]);
    sp.push_back(sc);
      }
  v=sp;
}