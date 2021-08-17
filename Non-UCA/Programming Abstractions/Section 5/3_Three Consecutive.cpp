class Result{
  /*
   * Complete the function 'threeConsecutive' below
   * @params
   *   a,b,c -> integers which are to be checked
   * @return
   * An integer, 1 if the numbers are consecutive else 0
   */
  static int threeConsecutive(int a, int b, int c){
     int max = Math.max(a, Math.max(b, c));
    int min = Math.min(a, Math.min(b, c));
    int mid = a + b + c - max - min;
    if(max == mid + 1 && mid == min + 1)
      return 1;
    else
      return 0;
    
  } 
}