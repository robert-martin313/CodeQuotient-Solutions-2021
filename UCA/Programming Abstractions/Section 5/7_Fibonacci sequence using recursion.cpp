#include <iostream>
using namespace std;
int fib(int x) {
   if((x==1)||(x==0)) {
      return x;
   }else {
      return(fib(x-1)+fib(x-2));
   }
}
int main() {
   int x ;
   cin >> x;
 int i=x-1;
   while(i >= 0) {
      cout <<endl<< fib(i);
      i--;
   }
   return 0;
}