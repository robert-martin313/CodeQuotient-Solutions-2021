/*
 * Complete the function 'primeFactors'
 * Print all the prime factors of the number
 * @params
 *   n -> numbers whose prime factors are to be found
 */
void primeFactors(int n){
 while(n%2==0)
 {
   cout<<2<<endl;
   n=n/2;
 }
  for(int i=3;i<=sqrt(n);i=i+2)
  {
    if(n%i==0)
    {
      cout<<i<<endl;
      n=n/i;
    }
  }
   if (n > 2) 
   {
     cout<<n;
   }
}