int getMissingElement(int* a,int a_size,int* b ,int b_size){
  int ans=0;
  for (int i = 0; i < a_size; i++)
    {
        int j;
        for (j = 0; j < b_size; j++)
        {
            if (a[i] == b[j])
                break;
        }
        if (j == b_size)
            ans=a[i];
    }
  return ans;
}