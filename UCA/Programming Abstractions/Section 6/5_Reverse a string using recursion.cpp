void rev(char*str,int &i,int j)
{
  if(str[j]=='\0')
  {
    return;
  }
  rev(str,i,j+1);
  if(i<j)
  {
    swap(str[i],str[j]);
    i++;
  }
}
char* reverseString (char *str)
{
  int i=0;
  rev(str,i,0);
  return str;
}