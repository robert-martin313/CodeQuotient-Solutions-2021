int keywordCount(string str, string word){
  int n=0;
  for(int i=0;str[i]!='\0';i++)
  {
    n++;
  }
  int count=0;
  for(int i=0;str[i]!='\0';i++)
  {
    if(str[i]!=' ')
    {
      int j,flag=0;
      for(j=0;word[j]!='\0';j++)
      {
        if(str[i]==word[j])
          i++;
        else
        {
          flag=1;
        break;
        }
      }
      if(flag==0&&(str[i]==' '|| str[i] == '\0'))
      {
        count++;
      }
      else
        while(i<n&& str[i]!=' ')
          i++;
    }
  }
  return count;
}