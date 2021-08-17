void removeDuplicates(int *arr, int *size)
{
  int j=0;
 for(int i=0;i<*size-1;i++)
   if(arr[i]!=arr[i+1])
   {
     arr[j]=arr[i];
  j++;
   }
 arr[j++]=arr[*size-1];
  *size=j;
}