// return 1 for YES and 0 for NO.
int isRotation(string str1, string str2){
  // Write your code here
  if(str1.length()!=str2.length())
  {
    return 0;
  }
  else
  {
    string temp=str1+str1;
  if (temp.find(str2) != string::npos)
       {
         return 1;
       }
  }
       return 0;
}