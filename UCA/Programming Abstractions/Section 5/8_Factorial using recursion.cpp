/*
 * Complete the function 'factorial' given below
 * @params
 *  n -> an integer whose factorial is to be calculated
 * @return
 *  The factorial of integer n
 */
int factorial(int n){
  if(n==0)
  {
    return 1;
  }
  return n*factorial(n-1);
}