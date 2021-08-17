void revWordsString(string str){
  int n=0;
  for(int i=0;str[i]!='\0';i++)
  {
    n++;
  }
  int l;
  int r;
  for(int i=0;str[i]!='\0';i++)
  {
    if(str[i]!=' ')
    {
      l=i;
      while(i<n&&str[i]!=' ')
        i++;
      r=i-1;
      while(l<r)
      {
        swap(str[l],str[r]);
        l++;
        r--;
      }
    }
  }
  cout<<str;
}